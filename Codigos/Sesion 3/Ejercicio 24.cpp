/*
 * Indicar si se produce un problema de precisión o de desbordamiento en los siguientes
 * ejemplos indicando cuál sería el resultado final de las operaciones.
 * 
 *
 * int chico, chico1, chico2;
 * chico1 = 123456789;
 * chico2 = 123456780;
 * chico = chico1 * chico2;
 *
 * Fallo por desbordamiento. En int no puede guardar todas las cifras obtenidas en el calculo.
 * Se obtiene 1425960444. Se deberia obtener 15241577639079420.
 *
 * 
 * long grande;
 * int chico1, chico2;
 * chico1 = 123456789;
 * chico2 = 123456780;
 * grande = chico1 * chico2;
 *
 * Fallo por desbordamiento. En long no puede guardar todas las cifras obtenidas en el calculo.
 * Se obtiene 1425960444. Se deberia obtener 15241577639079420.
 *
 * 
 * double resultado, real1, real2;
 * real1 = 123.1;
 * real2 = 124.2;
 * resultado = real1 * real2;
 * 
 * Fallo de precision. No muestra los valores decimales del resultado.
 * Se obtiene 15289. Se deberia obtener 15289,02.
 *
 * 
 * double resultado, real1, real2;
 * real1 = 123456789.1;
 * real2 = 123456789.2;
 * resultado = real1 * real2;
 * 
 * Fallo de precision. No puede almacenar todos los valores decimales obtenidos. Solo una parte son mostrados.
 * Se obtiene 1.52416e+016. Se deberia obtener 15241578787227557,72
 *
 * 
 * double real, otro_real;
 * real = 2e34;
 * otro_real = real + 1;
 * otro_real = otro_real - real;
 * 
 * Fallo de Precision. 
 * Se obtiene 0. Se deberia obtener 1.
 *
 *
 * double real, otro_real;
 * real = 1e+300;
 * otro_real = 1e+200;
 * otro_real = otro_real * real;
 * 
 * Desbordamiento. Se obtiene valor Infinito.
 * Se obtiene Inf. Se deberia obtener 1e+500.
 *
 *
 * float chico;
 * double grande;
 * grande = 2e+150;
 * chico = grande;
 * 
 * Desbordamiento. Se obtiene valor Infinito.
 * Se obtiene Inf. Se deberia obtener 2e+150.
 */
