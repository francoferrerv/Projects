Este trabajo practico es una simulacion de un entrenador pokemon que pelea a los gimnasios y se convierte en Maestro pokemon.

(Me gustaria aclarar que en trabajos practicos anteriores han aparecido errores de compilacion para los correctores que no han aparecido para mi, errores con punteros. Con la siguiente linea de compilacion me compila perfecto pero capaz no sea igual para todos.)
Compilación: gcc batallas.c heap.c lista.c abb.c -o batallas -g -std=c99 -Wall -Wconversion -Wtype-limits -pedantic -Werror -O0
Ejecución: valgrind --leak-check=full --track-origins=yes --show-reachable=yes ./batallas

TDA'S USADOS:   

Usé una lista para los pokemon de los entrenadores ya que necesitaba un TDA donde se podia acceder facilmente a cada elemento de la lista sin la necesidad de borrar los elementos anteriores(como en una pila o cola) ya que aunque muera el pokemon, lo puedo llegar a necesitar en la revancha si es que el personaje perdio. 

Usé una pila para los entrenadores ya que no necesitaba acceder a cada elemento, solo al ultimo, y como en el archivo se leia en orden decreciente, necesitaba un TDA donde el ultimo elemento insertado seria el primero en usarse. Como no puedo pelear a los demas entrenadores antes de ganarle al primero, no necesito una lista. Entonces llamo al elemento tope y si el personaje le gano a ese entrenador, borro el elemento tope y vuelvo a llamar al elemento tope (que va a ser el proximo entrenador), y asi sucesivamente hasta llegar al ultimo entrenador que es el lider ya que siempre es el primero en insertarse.

Usé una lista para los pokemon para combatir del personaje ya que necesitaba un TDA donde se podia acceder facilmente a cada elemento de la lista sin la necesidad de borrar los elementos anteriores (como en una pila o cola) ya que los pokemon del personaje no se borran nunca hasta haber terminado el juego y debo poder usarlos en cada batalla. No usé un arbol porque si, por ejemplo, los ordenaba por nombre no iba poder elegir el orden de combate de mis pokemon, irian siempre en orden alfabetico. Si en cambio les asignaba un numero a cada pokemon al leerlo del archivo, el arbol hubiese tendido a degenerarse en una lista.

Usé un ABB para los pokemon obtenidos del personaje ya que necesitaba un TDA donde no sea tan complejo buscar elementos muchas veces. El ABB tiene menor complejidad que una lista a la hora de buscar ya que usa la busqueda binaria. Tambien queria que este ordenado asi es mas facil, para el usuario, buscar el pokemon que quiere agregar a su equipo ya que estan ordenados alfabeticamente.

