# PushSwap
Imagínate que tienes una pila de platos y cada plato es de un tamaño diferente y para colocarlos solo tienes unos movimientos determinados y otra pila que usar como auxiliar.
Y el objetivo es ordenar los platos de menor a mayor tamaño.

Pues eso es lo que hace este programa.

## Movimientos
* sa: Intercambia los dos primeros platos del stack a
* sb: Intercambia los dos primeros platos del stack b
* ss: Intercambia los dos primeros platos de ambos stacks
* pa: Quita el primer plato del stack a y lo pone al principio del stack b
* pb: Quita el primer plato del stack b y lo pone al principio del stack a
* ra: Rota todos los platos una posición. El primer plato se convierte en el último (En el stack a)
* rb: Rota todos los platos una posición. El primer plato se convierte en el último (En el stack b)
* rr: ra y rb sucenden al mismo tiempo
* rra: Rota todos los platos una posición. El último plato se convierte en el primero (En el stack a)
* rrb: Rota todos los platos una posición. El último plato se convierte en el primero (En el stack b)
* rrr: rra y rrb sucenden a la vez

## Algoritmo
Se ha utilizado una versión binaria del algoritmo radix. Analizando cada número en su equivalente en binario. De esta manera al comprobar cada bit desde el least significant bit (LSB), podemos ir comprobando cuál es mayor e ir poniendolo más abajo en el stack. Al haber hecho esto con cada bit, los números quedan ordenados

## Uso

Una vez clonado el reposiorio escribir en terminal:

`make`

`ARGS="Los números que se quiera separados por espacios"`

`./push_swap $ARGS`

Para que se pueda probar con muchos números sin que sea muy cansado estar escribiendo, aquí dejo unos comandos para seleccionar una cantidad variable de números aleatorios:

`./push_swap $(seq 3000 | sort -R | tail -n 100)`

Este te hará una lista de 3000 números, luego los ordenará de manera aleatoria y tomará 100 de ellos. Cambialo para poder hacer pruebas.

## Valores de retorno

El programa devuelve una lista de los movimientos utilizados para ordenar los números.

## EXTRA

Para ayudar al programa se ha incluido un CHECKER, que permite comprobar si se han utilizado los movimientos correctos.

### Uso

`./checker "Lista de números a ordenar separados por espacios" "Movimientos a realizar separados por salto de línea"`

Si los movimientos no son pasados como argumento, se le pedirán por el STDIN hasta que se introduzca Ctrl+D

### Valores de retorno

OK en caso de que los movimientos introducidos sí que sean capaces de ordenar los números

KO en caso de que los movimientos no sean los correctos para ordenar los números


