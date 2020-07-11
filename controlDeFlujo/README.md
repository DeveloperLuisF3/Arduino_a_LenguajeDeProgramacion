# 6. Control de flujo

## if (si)

**if** es un estamento que se utiliza para probar si una determinada condición se ha alcanzado, como por ejemplo averiguar si un valor analógico está por encima de un cierto número, y ejecutar una serie de declaraciones (operaciones) que se escriben dentro de llaves, si es verdad. Si es falso (la condición no se cumple) el programa salta y no ejecuta las operaciones que están dentro de las llaves. El formato para if es el siguiente:

```arduino
    if (una variable ?? valor)
    {
        ejecutaInstrucciones;
    }
```

En el ejemplo anterior se compara una variable con un valor, el cual puede ser una variable o constante. Si la comparación, o la condición entre paréntesis se cumple (es cierta), las declaraciones dentro de los corchetes se ejecutan. Si no es así, el programa salta sobre ellas y sigue.

**NOTA:** Tenga en cuenta el uso especial del símbolo '=', poner dentro de if (x = 10), podría parecer que es valido para sin embargo no lo es ya que esa expresión asigna el valor 10 a la variable x, por eso dentro de la estructura if se utilizaría X == 10 que en este caso lo que hace el programa es comprobar si el valor de x es 10... Ambas cosas son distintas por lo tanto dentro de las estructuras if, cuando se pregunte por un valor se debe poner el signo doble de igual "=="

## if... else (si... sino..)

**if... else** viene a ser una estructura que se ejecuta en respuesta a la idea "**si esto no se cumle haz esto otro**". Por ejemplo, si se desea probar una entrada digital, y hacer una cosa si la entrada fue alto o hacer otra cosa si la entrada es baja, usted escribiría que de esta manera:

```arduino
    if (inputPin == HIGH)   // si el valor de la entrada inputPin es alto
    {
        instruccionesA; //ejecuta si se cumple la condición
    }
    else
    {
        instruccionesB; // ejecuta si no se cumple la condición
    }
```

Else puede ir precedido de otra condición de manera que se pueden establecer varias estructuras condicionales de tipo unas dentro de las otras (anidamiento) de forma que sean mutuamente excluyentes pudiéndose ejecutar a la vez. Es incluso posible tener un número ilimitado de estos condicionales. Recuerda sin embargo qué sólo un conjunto de declaraciones se llevará a cabo dependiendo de la condición probada:

```arduino
    if (inputPin < 500)
    {
        instruccionesA; // ejecuta las operaciones A
    }
    else if (inputPin >= 1000)
    {
        instruccionesB; //ejecuta las operaciones B
    }
    else
    { 
        instruccionesC; // ejecuta las operaciones C
    }
```

**NOTA:** Un estamento de tipo if prueba simplemente si la condición dentro del préntesis es verdadera o falsa. Esta declaración puede ser cualquier declaración válida. En el anterior ejemplo, si cambiamos y ponemos (inputPin == HIGH). En este caso, el estamento if sólo chequearía si la entrada especifícado esta en nivel alto (HIGH), o +5v.

## for 

La declaración **for** se usa para repetir un bloque de sentencias encerradas entre llaves un número determinado de veces. Cada vez que se ejecutan las instrucciones del bucle se vuelve a testear la condición. La declaración for tiene tres partes separadas por (;) vemos el ejemplo de su sintaxis:

```arduino
    for (inicialización; condición; expresión)
    {
        ejecutaInstrucciones;
    }
```

La *inicialización* de una variable local se produce una sola vez y la *condición* se testea cada vez que se termina la ejecución de las instrucciones dentro del bucle. Si la condición sigue cumpliéndose, las instrucciones del bucle se vuelven a ejecutar. Cuando la condición no se cumple, el bucletermina.

El siguiente ejemplo inicia el entero i en el 0, y la condición es probar que el valor es inferior a 20 y si es cierto i se incrementa en 1 y se vuelven a ejecutar las instrucciones que hay dentro de las llaves:

```arduino
    for (int i = 0; i < 20; i++)    // declara i, prueba que es menor que 20, incrementa i en 1
    {
        digitalWrite (13, HIGH);    // envía un 1 al pin 13
        delay (250);    // espera ¼ de seg.
        digitalWrite (13, LOW); // envía un 0 al pin 13
        delay (250);    espera ¼ de seg.
    }
```

**NOTA:** El bucle en el lenguaje C es mucho más flexible que otros bucles encontrados en algunos otros lenguajes de programación, incluyendo BASIC. Cualquiera de los tres elementos de cabecera puede omitirse, aunque el punto y coma es obligatorio. También las declaraciones de inicialización, condición y expresión puede ser cualquier estamento válido en lenguaje C sin relación con las variables declaradas. Estos tipos de estados son raros pero permiten disponer soluciones a algunos problemas de programación raras.

## while

Un bucle del tipo **while** es un bucle de ejecución continua mientras se cumpla la expresión colocada entre paréntesis en la cabecera del bucle. La *variable de prueba* tendrá que cambiar para salir del bucle. La situación podrá cambiar a expensas de una expresión dentro del código del bucle o también por el cambio de un valor en una entrada de un sensor.

```arduino
    while (una variable ?? valor)
    {
        ejecutarSentencias;
    }
```

El siguiente ejemplo testea si la variable "unaVariable" es inferior a 200 y, si es verdad ejecuta las declaraciones dentro de los corchetes y continuará ejecutando el bucle hasta que 'unaVariable' no sea inferior a 200.

```arduino
    while (unaVariable < 200)   // testea si es menor que 200
    {
        instrucciones;  // ejecuta las instrucciones entre llaves
        unaVariable ++; // incrementa la varaible en 1
    }
```

## do... while

El bucle **do while** funciona de la misma manera que el bucle while, con la salvedad de que la condición se prueba al final del bucle, por lo que el bucle siempre se ejecutará al menos una vez.

```arduino
    do
    {
        Instrucciones;
    } while (unaVariable ?? valor)
```

El siguiente ejemplo asigna el valor leído *leeSensor()* a la variable 'x', espera 50 milisegundos, y luego continua mientras que el valor de la 'x' sea inferior a 100:

```arduino
    do
    {
        x = leeSensor ();
        delay (50);
    } while (x < 100);
```