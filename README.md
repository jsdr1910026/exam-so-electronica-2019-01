pregunta 1: La repuesta a este problema se soluciono copiando el codigo threads realizado anteriormente y tomando los tiempos
de ejecucion con argumentos de diferentes tamanos consignados a continuacion:
-Para el primer escenario:
Argumento de 10000: se ejecuta en 1 segundo.
Argumento de 10000000: se ejecuta en 1 segundo
Argumento de 100000000: se ejecuta en 2 segundos.
Argumento de 1000000000: se ejecuta en  8 segundos.
Argumento de 10000000000: se ejecuta 11 segundos.
Conclusion: Se demora dependiendo de la dimension del argumento que se le asigne, con argumentos bajos, 
se demora menos ya que la operacion de incremetar la hace rapido. Ya con argumentos muy grandes le toma mas a los
hilos ejecutar la tarea por eso de demora mas.

-Para el segundo escenario:
Argumento de 100: se ejecuta en 1 segundo.
Argumento de 10000: se ejecuta en 1 segundo.
Argumento de 1000000: se ejecuta en 3 segundos.
Argumento de 10000000: se ejecuta en 11 segundos.
Argumento de 100000000: se ejecuta en 24 segundos.

Conclusion: Al modificar la posicion de abrir y cerrar puerta, vemos que aumentan los tiempos de ejecucion se ven 
afectados, debido a que en este escenario este arreglo de puerta esta encuentra dentro del for, por lo que se ve involucrado
directamente en el incremento de la variable haciendo que se demore mas la ejecucion
 
pregunta 2: Para la solucion de este problema se creo un mycommon.h como en
clases anteriores para poder usar los hilos con la puerta, para evitar el 
problema de concurrencia, se le adiciono al mycommon las operaciones de
multiplicacion y division como una libreria.Luego se creo una variable global
llamada v, se crearon los hilos y dos void a los que accederian cada hilo,
el hilo 1 ingreso al void division el cual lo que hace es la division entre 
z e y, se guarda en la variable v. El hilo 2 ingresa al void multiplicacion
que lo que hace es multiplicar el valor de la division en v por una constante 
x y lo guarda en v, luego imprime el valor.

pregunta 3: Para la solucion de este problema se tomo el ejemplo del libro
guia para la explicacion del wait(), lo que se hizo fue cambiar el wait de 
posicion, se puso en el proceso hijo lo que lo obliga a esperar hasta que el 
padre termine de ejecutar. 

pregunta 4:

 -pregunta 1: La utilización debería ser del 100%, ya que en el comando 5:100, 5:100, el 5 es la cantidad de instrucciones que queremos 
  ejecutar, el número después de los dos puntos es la CPU que queremos utilizar, en este caso del 100% para ambas ejecuciones.
  En clase se explicó que la parte :100 indicaba el porcentaje de ejecución que queríamos darle al sistema.
  Al aplicar el comando ./process-run.py -l 5:100,5:100 -c -p, nos confirma que la utilización 
  fue del 100%, con una ejecución total de 10 tiempos, lo que se toma como 
  5 ejecuciones de process 0 y 5 de process 1.

 -pregunta 2: A la máquina debería tomarle 8 tiempos ejecutar las 4 instrucciones de CPU y 4 de E/S.
  Al ejecutar ./process-run.py -l 4:100,1:0 -c -p, vemos que le llevó 10 tiempos la
  ejecución de 4 instrucciones de CPU y 4 de E/S, ya que al ser una instrucción E/S, pasó del 
  estado RUN a WAITING y se quedó esperando 4 tiempos a que se le respondiera, 
  para finalmente pasar a DONE.


pregunta 5: La solucion de este problema se realizo en conjunto con el grupo
de trabajo, ya que solo no se encontro la solucion, estos son los links guia
que nos ayudaron a la implementacion de ejercicio: https://fresh2refresh.com/c-programming/c-strings/c-strtok-function/
Teniendo en cuenta que fue el unico punto que se hizo en conjunto se deja a 
criterio del profesor la decision sobre el punto. En la solucion lo que se
hizo fue hacer un arreglo que nos recorriera las carpetas buscando el 
argumento que se le paso, que en este caso es un ejecutable, dandonos asi la 
direccion del ejecutable.
