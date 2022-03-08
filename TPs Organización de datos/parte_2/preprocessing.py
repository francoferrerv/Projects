import numpy as np
import pandas as pd
from sklearn.feature_extraction import FeatureHasher
from sklearn.experimental import enable_iterative_imputer
from sklearn.impute import IterativeImputer
from sklearn.impute import SimpleImputer
from sklearn import preprocessing
from sklearn.feature_selection import RFE
from sklearn import tree
from sklearn.tree import DecisionTreeClassifier
from sklearn.feature_selection import VarianceThreshold

def drop_and_replace(df):
  df = df.drop(columns=['barrio','dia','direccion_viento_tarde', 'direccion_viento_temprano', 'llovieron_hamburguesas_hoy', 'nubosidad_temprano', 'nubosidad_tarde','rafaga_viento_max_direccion'])
  df = df.reset_index()
  df = df.drop(columns=['index', 'id'])
  df.replace('1.009.555', np.nan, inplace= True)
  df.replace('10.167.769.999.999.900', np.nan, inplace=True)
  df['presion_atmosferica_tarde'] = pd.to_numeric(df['presion_atmosferica_tarde'], downcast="float")
  return df


def preprocessing_continuos(df, df_test, one_hot=True):
  
  df = drop_and_replace(df)
  df_test = drop_and_replace(df_test)

  features_numericos = ['horas_de_sol', 'humedad_tarde', 'humedad_temprano', 'mm_evaporados_agua', 'mm_lluvia_dia', 
                        'presion_atmosferica_tarde', 'presion_atmosferica_temprano', 'rafaga_viento_max_velocidad', 'temp_max', 'temp_min', 'temperatura_tarde',
                        'temperatura_temprano', 'velocidad_viendo_tarde', 'velocidad_viendo_temprano']

  for feature in features_numericos:
    df[feature].fillna(df[feature].mean(), inplace = True)
    df_test[feature].fillna(df[feature].mean(), inplace = True)

  return df, df_test

def f(date):
    año, mes, dia = date.split('-')
    return año

def f2(date):
    año, mes, dia = date.split('-')
    return mes

def f3(date):
    año, mes, dia = date.split('-')
    return dia

def hacer_discreto(df):
    
  df = df[['barrio','dia','direccion_viento_tarde', 'direccion_viento_temprano', 'llovieron_hamburguesas_hoy', 'nubosidad_temprano', 'nubosidad_tarde','rafaga_viento_max_direccion']]
  df = df.reset_index()
  df = df.drop(columns=['index'])

  df = pd.get_dummies(df, drop_first=True, columns=['llovieron_hamburguesas_hoy', 'barrio', 'direccion_viento_tarde', 'direccion_viento_temprano', 'rafaga_viento_max_direccion'])

  datos_t2 = df.copy();
  datos_t3 = df.copy();
  datos_t4 = df.copy();

  df['año'] = datos_t2['dia'].apply(f)
  df['mes'] = datos_t3['dia'].apply(f2)
  df['dia'] = datos_t4['dia'].apply(f3)
  return df


def preprocessing_discretos(df, df_test):
  
  df = hacer_discreto(df)
  df_test = hacer_discreto(df_test)

  df['nubosidad_tarde'] = df['nubosidad_tarde'].fillna(round(df['nubosidad_tarde'].mean()))
  df_test['nubosidad_tarde'] = df_test['nubosidad_tarde'].fillna(round(df['nubosidad_tarde'].mean()))
  df['nubosidad_temprano'] = df['nubosidad_temprano'].fillna(round(df['nubosidad_temprano'].mean()))
  df_test['nubosidad_temprano'] = df_test['nubosidad_temprano'].fillna(round(df['nubosidad_temprano'].mean()))

  return df, df_test

def hashing_trick(df, feature):
  fh = FeatureHasher(n_features=3, input_type='string')
  hashed_features = fh.fit_transform(df[feature].astype(str)).todense()
  hashed_features = pd.DataFrame(hashed_features).add_prefix(feature + "_")
  return hashed_features


def preprocessing_(df, one_hot=True):
    
    df = df.reset_index()
    df = df.drop(columns=['index', 'id'])

    if one_hot == True:
        df = pd.get_dummies(df, drop_first=True, columns=['llovieron_hamburguesas_hoy'])

    columns_for_hashing_trick=['barrio', 'direccion_viento_tarde', 'direccion_viento_temprano', 'rafaga_viento_max_direccion']
    for feature in columns_for_hashing_trick:
        hashed_features = hashing_trick(df, feature)
        df = pd.merge(df, hashed_features, left_index=True, right_index=True)
        df.drop(columns= [feature], inplace=True)

    datos_t2 = df.copy();
    datos_t3 = df.copy();
    datos_t4 = df.copy();

    df['año'] = datos_t2['dia'].apply(f)
    df['mes'] = datos_t3['dia'].apply(f2)
    df['dia'] = datos_t4['dia'].apply(f3)

    df.replace('1.009.555', np.nan, inplace= True)
    df.replace('10.167.769.999.999.900', np.nan, inplace=True)
    df['presion_atmosferica_tarde'] = pd.to_numeric(df['presion_atmosferica_tarde'], downcast="float")

    return df

def preprocessing_mean(df, df_test, one_hot=True):

    df = preprocessing_(df)
    df_test = preprocessing_(df_test)

    features_numericos = ['horas_de_sol', 'humedad_tarde', 'humedad_temprano', 'mm_evaporados_agua', 'mm_lluvia_dia', 'nubosidad_tarde', 'nubosidad_temprano', 
                        'presion_atmosferica_tarde', 'presion_atmosferica_temprano', 'rafaga_viento_max_velocidad', 'temp_max', 'temp_min', 'temperatura_tarde',
                        'temperatura_temprano', 'velocidad_viendo_tarde', 'velocidad_viendo_temprano']

    for feature in features_numericos:
        df[feature].fillna(df[feature].mean(), inplace = True)
        df_test[feature].fillna(df[feature].mean(), inplace = True)

    return df, df_test

def scale(df, df_test):
    standard_scaler = preprocessing.StandardScaler()
    scaler = standard_scaler.fit(df)
    scaled_df = scaler.transform(df)
    scaled_df_test = scaler.transform(df_test)

    return scaled_df, scaled_df_test


def preprocessing_mean_scaled(df, df_test):
    df, df_test= preprocessing_mean(df, df_test)
    df, df_test= scale(df, df_test)
    return df, df_test


def imputer(X, df_test):
    imputer = IterativeImputer(random_state=117, max_iter=50)
    imp= imputer.fit(X)
    imputed_X = imp.transform(X)
    imputed_df_test = imp.transform(df_test)
    return imputed_X, imputed_df_test

def filter_and_replace(X):
    X = X.filter(items=['humedad_tarde', 'presion_atmosferica_temprano', 'rafaga_viento_max_velocidad', 'presion_atmosferica_tarde', 'horas_de_sol'])
    X.replace('1.009.555', np.nan, inplace= True)
    X.replace('10.167.769.999.999.900', np.nan, inplace=True)
    X['presion_atmosferica_tarde'] = pd.to_numeric(X['presion_atmosferica_tarde'], downcast="float")
    return X

def preprocessing_imputer_filtered(df, df_test):
    df = filter_and_replace(df)
    df_test = filter_and_replace(df_test)

    df_imputed, df_test_imputed = imputer(df, df_test)

    return df_imputed,df_test_imputed


def selector_func(df, df_test, df_resultados):

  estimator = tree.DecisionTreeClassifier(
        random_state=117, max_depth=9, min_samples_leaf=11)
  selector = RFE(estimator, n_features_to_select=8, step=1)
  selector = selector.fit(df, df_resultados)
  df = selector.transform(df)
  df_test = selector.transform(df_test)
  return df, df_test

def preprocessing_arbol(df, df_test, df_resultados):
    
  df = preprocessing_(df)
  df_test = preprocessing_(df_test)
    
  df, df_test = imputer(df,df_test)
  df, df_test = selector_func(df, df_test, df_resultados)

  return df, df_test


def simple_imp(df, df_test):
  imp = SimpleImputer(missing_values=np.nan, strategy='mean')
  imp.fit(df)
  df = imp.transform(df)
  df_test = imp.transform(df_test)
  return df, df_test

def preprocessing_gb(df, df_test):
  df = preprocessing_(df)
  df_test = preprocessing_(df_test)
  df, df_test = simple_imp(df, df_test)

  return df, df_test

def min_max(df, df_test):
    minmax_scaler = preprocessing.MinMaxScaler()
    scaler = minmax_scaler.fit(df)
    scaled_df = scaler.transform(df)
    scaled_df_test = scaler.transform(df_test)

    return scaled_df, scaled_df_test

def imputer_knn(X, df_test):
    imputer = IterativeImputer(random_state=117)
    imp= imputer.fit(X)
    imputed_X = imp.transform(X)
    imputed_df_test = imp.transform(df_test)
    return imputed_X, imputed_df_test


def preprocessing_knn(df, df_test):
  df = preprocessing_(df)
  df_test = preprocessing_(df_test)
  df, df_test = imputer_knn(df, df_test)
  df, df_test = min_max(df, df_test)

  selection = VarianceThreshold(threshold=(0.01))
  selection = selection.fit(df)
  df = selection.transform(df)
  df_test = selection.transform(df_test)  
  df = np.delete(df, [0,3,4,5,7,11,12,13,14,15,19,20,21,22,23,24,25,26,27,28], 1)
  df_test = np.delete(df_test, [0,3,4,5,7,11,12,13,14,15,19,20,21,22,23,24,25,26,27,28], 1)
  return df, df_test