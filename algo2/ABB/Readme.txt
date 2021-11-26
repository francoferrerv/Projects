INTRODUCCION:
    Esto es un TDA de un arbol binario de busqueda junto con un archivo de pruebas que debe pasar todas para asegurar el correcto funcionamiento del TDA

Compilacion: gcc abb.c pruebas.c -o abb -g -std=c99 -Wall -Wconversion -Wtype-limits -pedantic -Werror -O0
Ejecucion: valgrind --leak-check=full --track-origins=yes --show-reachable=yes ./abb

CONCEPTOS:

Un ABB es un arbol binario de busqueda que es una estructura de datos en forma de arbol. Cada elemento se guarda en un nodo y cada uno de estos tiene un puntero al nodo que esta a su izquierda y otro al de su derecha. Se ordena segun el criterio que quiera el usuario, por ejemplo: a la izquierda va el numero menor y a la derecha el mayor. Al primer nodo se le dice nodo raiz, y a los nodos que estan a lo ultimo, o sea que no tienen nodos hijos, se les dice hojas. Todos los nodos nuevos se insertan despues de un nodo hoja. El ABB es util ya que reduce la complejidad (si esta balanceado) de las operaciones de busqueda. La diferencia entre ABB y Arbol Binario es que este ultimo no tiene un criterio de ordenamiento. No hay comparacion entre los elementos para saber donde buscar o insertar. Entonces queda un arbol desordenado que hace mas compleja la funcion de buscar elemento.
   
Es necesario tener una funcion destructor en el TDA porque solo el usuario sabe que guarda en el arbol, y si llegara a guardar elementos almacenados en el heap, se deberia liberar esa memoria. Si el usuario no tiene la funcion destructor, a la hora de liberar toda la memoria, quedaria sin liberar los elementos. Y es imposible para el programador crear una funcion que libere todas los posibles elementos que puede llegar a insertar el usuario.

COMPLEJIDAD:

Crear arbol: O(1). Es solo una operacion para crear la estructura.

Destruir arbol: O(n). Hay que recorrer cada nodo para destruir bien el arbol.

Buscar en arbol: O(log(n)). No tiene que recorrer todos los n elementos ya que al estar ordenado el arbol, con comparaciones vas dividiendo por 2 (exponencialmente) al arbol entonces se reduce la complejidad. Si el arbol esta desbalanceado de manera que estan todos los elementos para un lado (como una lista), ahi la complejidad sera O(n).

Insertar en arbol: O(log(n)). La complejidad es la misma que la de buscar en arbol ya que se busca la posicion de la misma manera y luego se insertar que es O(1).

Borrar en arbol: O(nlog(n)). Para borrar en un arbol hay que buscar el elemento que es O(log(n)) y despues de borrar, que en el peor de los casos ese elemento tenia dos hijos, entonces hay que buscar un reemplazante recorriendo el arbol.

Ver si arbol esta vacio: O(1). Solo hay que fijarse si hay un nodo raiz.

Recorrer el arbol (inorden, preorden, postorden): O(n). Se recorre todos los n elementos del arbol.

Recorrer con iterador interno: O(n) si la funcion del usuario es O(1). Se recorre todos los n elementos del arbol.





