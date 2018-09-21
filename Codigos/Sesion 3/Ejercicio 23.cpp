/*
 * Razonar sobre la falsedad o no de las siguientes afirmaciones:
 *
 *
 * a) 'c' es una expresión de caracteres.
 *
 * c esta contenido en comillas simples, luego es tratado como un caracter. Al imprimir
 * 'c' con cout, sacara c por pantalla.
 *
 *
 * b) 4<3 es una expresión numérica.
 *
 * Como 4 y 3 son numeros y no estan contenidos entre comillas simples, son tratados como numeros.
 * Al evaluar la expresion devuelve falso puesto que 4 no es menor que 3. 
 *
 *
 * c) (4+3)<5 es una expresión numérica.
 *
 * Como 4, 5 y 3 son numeros y no estan contenidos entre comillas simples, son tratados como numeros.
 * Al evaluar la expresion devuelve falso puesto que (4+3) = 7 no es menor que 5. 
 *
 * 
 * d) cout << a; da como salida la escritura en pantalla de una a.
 *
 * cout << a daria fallo puesto que busca la variable a y suponemos que no esta declarada. Para
 * imprimir el caracter a, debe ponerse entre comillas simples 'a'
 *
 * 
 * e) ¿Qué realiza cin >> cte, siendo cte una constante entera?
 *
 * Daria error. No se puede modificar la valor de una constante. Pide un dato por pantalla y, al 
 * introducirlo en la variable cte falla.
 */