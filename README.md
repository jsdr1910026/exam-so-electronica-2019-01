pregunta 1: Para el primer escenario, con un argumento de 100 el programa se
ejecuta en 1 segundo, con un argumento de 10000 se ejecuta en 1 segundo, con 
un argumento de 10000000 1 segundo, con 100000000 2 segundos, con 1000000000
 8 segundos, con 10000000000 11 segundos. Se demora dependiendo del argumento
 que se le asigne, con argumentos bajos se demora menos ya que la operacion de
 incremetar la hace rapido. Ya con argumentos muy grandes le toma mas a los
 hilos ejecutar la tarea.

Para el segundo escenario, con un argumento de 100 el programa se ejecuta en 
un segundo, con 10000 1 segundo, con 1000000 se demoro 3 segundos, con 
10000000 se demoro 11 segundos, con 100000000 se demoro 24 segundos.
 

pregunta 2:

pregunta 3: Al hacer el programa de ejemplo en el libro guía, vemos que al
ejecutar, siempre se ejecuta primero el padre, luego el hijo. Por lo que 
solo se le modificó los mensajes a mostrar.

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


pregunta 5:
