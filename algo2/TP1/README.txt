INTRODUCCION FUNCIONAMIENTO:
    El main de este programa recibe como parametro el nombre del archivo que contiene a los pokemon del arrecife. Luego reserva espacio en el heap con calloc() y verifica que el archivo sea valido. Si alguno de estos falla, libera la memoria correspondiente para que no haya perdida. Sino abre el archivo en modo lectura y si este no falla, lee el archivo con fscanf. Con una iteracion va agrandando el vector de pokemon en el heap con realloc()(verificando si falla y reasignando el puntero) cada vez que lee un pokemon del archivo y aumenta el numero de cantidad de pokemon. Si se pudo leer bien un pokemon devuelve true, porque sino se tiene que liberar todo y devolver null. Luego crea el acuario con un calloc() y verifica que no falle.
    Para trasladar los pokemon, recorre una vez el arrecife, guardando en un vector las posiciones de los pokemon que cumplen con la condicion para ser trasladados (hice 5 funciones distintas) y verifica que haya la cantidad suficiente. Luego recorriendo el vector de posiciones, busca el pokemon de esa posicion en el arrecife y va agregando pokemon al acuario mientras agranda el vector de pokemon del acuario con realloc(). Y hace algo parecido para sacar los pokemon del arrecife, solo que hace una doble iteracion para que cuando elimine un pokemon, va atrasando una posicion a los pokemon que lo seguian y asi queda ordenado. Salvo el ultimo pokemon que esta repetido pero cuando hace el realloc() para achicar el vector de pokemon del arrecife, queda afuera. Mientras hace todo esto verifica que no haya un error.
    Luego imprime los que quedan en el arrecife (hice 5 funciones para mostrarlos de distintas maneras) con una iteracion recorriendo el arrecife.
    Alfinal crea un archivo y con una iteracion escribe con fprintf() los pokemon que estan en el acuario y a lo ultimo libera toda la memoria del heap.

COMPILACION Y EJECUCION:

Para compilarlo uso "gcc -O0 -g pescar.c evento_pesca.c -Wall -Werror -Wconversion -std=c99 -o evento_pesca", 
para valgrind: "valgrind --leak-check=full --track-origins=yes --show-reachable=yes ./evento_pesca arrecife.txt" 
y para ejecutarlo: "./evento_pesca arrecife.txt".
En lugar de arrecife.txt puede ir cualquier archivo con extension .txt

EXPLICACIONES:

Punteros: Un puntero es una variable que contiene la direccion de memoria de otra variable o para decirlo de otra manera, apunta a otra variable. Para acceder a lo que esta apuntando el puntero se usa "*" y la direccion de memoria se obtiene con "&". Esto sirve para crear strings ya que podes apuntar a un array de char o para poder modificar el valor de una variable dentro de una funcion y que no se pierda el cambio al salir de esta funcion (mandar por referencia).

Aritmetica De Punteros: Para acceder al contenido de un vector apuntado por un puntero, se puede escribir como *(puntero + k) donde k es un numero entero. Es equivalente a hacer vector[k]. Esto funciona ya que la expresion sumada no es el numero de bytes sino la cantidad de elementos del tipo de dato de ese puntero.
    Asi como se puede hacer punteros, tambien se puede hacer punteros de punteros con "**" o structs que contienen punteros y asi llegar a tener un puntero de ese struct que apunta a otro puntero como teniamos con arrecife_t y acuario_t.

Punteros a Funciones: Los punteros a funciones sirven mucho para no repetir codigo. Cuando tenes una funcion que queres llamar muchas veces pero cada vez con condiciones distintas o una ejecucion distinta, en vez de copiar y pegar la funcion y cambiarlo cada vez, podes mandarle como parametro un puntero a funcion. Entonces en tu funcion general solo tenes que llamar al puntero a funcion que recibe pero cada vez le mandas una funcion distinta. Como mandarle un int a una funcion pero en realidad le mandas una funcion: le mandas distintos valores al int para que haga cosas distintas y lo mismo con mandarle una funcion.

Malloc y Realloc: Hay dos lugares donde se pueden guardar las variables o estructuras, en el stack que se destruye al terminar de ejecutar el programa o en el heap que se queda con esa memoria hasta ser liberada. Malloc y Realloc sirven solamente para la memoria dentro del heap. Malloc te crea la memoria del tamaño que le digas y te devuelve un puntero que apunta a esa memoria si no falla. Realloc te cambia el tamaño de la memoria que estaba apuntada por un puntero y te devuelve o el mismo puntero, otro que apunta a lo mismo o NULL si falla. La memoria creada en el heap se debe liberar despues de usarla y se libera con la funcion free() que le mandas el puntero que apuntaba a esa memoria.




     
