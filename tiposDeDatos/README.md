# 3. Tipos de datos

## byte

Byte almacena un valor numérico de 8 bits sin decimales. Tienen un rango entre 0 y 255.

```arduino
    byte unaVariable = 180; // declara 'unaVariable' como tipo byte
```

## Int

Enteros son un tipo de datos primarios que almacenan valores numéricos de 16 bits sin decimales comprendidos en el rango 32,767 to -32,768.

```arduino
    int unaVariable = 1500; // declara 'unaVariable' como una variable de tipo entero
```

**NOTA:** Las variables de tipo entero "int" pueden sobrepasar su valor máximo o mínimo como consecuencia de una operación. Por ejemplo, si x = 32767 y una posterior declaración agrega 1 a x, x = x + 1 entonces el valor de x pasará a ser -32.768. (algo así como que el valor da la vuelta)

## long

El formato de variable numérica de tipo extendido "long" se refiere a números enteros (tipo 32 bits) sin decimales que se encuentran dentro del rango -2147483648 a 2147483647.

```arduino
    long unaVariable = 90000;   // declara 'unaVariable' como tipo long
```

## float

El formato de dato del tipo "punto flotante" "float" se aplica a los números con decimales. Los números de punto flotante tienen una mayor resolución que los de 32 bits con un rango comprendido de 3.4028235E + 38 a + 38-3.4028235E.

```arduino
    float unaVariable = 3.14;   // declara 'unaVariable' como tipo flotante
```

**NOTA:** Los números de punto flotante no son exactos, y pueden producir resultados extraños en las comparaciones. Los cálculos matemáticos de punto flotante son también mucho más lentos que los del tipo de números enteros, por lo que debe evitarse su uso si es posible.

## arrays

Un array es un conjunto de valores a los que se accede con un número índice. Cualquier valor puede ser recogido haciendo uso del nombre de la matriz y el número del índice.

EL primer valor de la matriz es el que está indicado con el índice 0, es decir el primer valor del conjunto es el de la posición 0. Un array tiene que ser declarado y opcionalmente asignados valores a cada posición antes de ser utilizado.

```arduino
    int miArray [] = {valor0, valor1, valor2...}
```

Del mismo modo es posible declarar una matriz indicando el tipo de datos y el tamaño y posteriormente, asignar valores a una posición especifíca:

```arduino
    int miArray [5];    // declara un array de enteros de 6 posiciones
    miArray [3] = 10;   // asigna 1 valor 10 a la posición 4
```

Para leer de un array basta con escribir el nombre y la posición a leer:

```arduino
    x = miArray [3];    // x ahora es igual a 10 que está en la posición 3 del array
```

Las matrices se utilizan a menudo para estamentos de tipo bucle, en los que la variable de incremento del contador del bucle se utiliza como índice o puntero del array. El siguiente ejemplo usa una matriz para el parpadeo de un LED.

Utilizando un bucle *for*, el contador comienza en cero 0 y escribe el valor que figura en la posición de índice 0 en la serie que hemos escrito dentro del array parpadeo[], en este caso 180, que se envía a la salida analógica tipo PWM configurada en el PIN10, se hace una pausa de 200ms y a continuación se pasa al siguiente valor que asigna el índice "i".

```arduino
    int ledPin = 10;	// Salida LED en el PIN 10
    byte parpadeo [] = {180, 30, 255, 200, 10, 90, 150, 60};//array de 8 valores diferentes
    void setup()
    {
    pinMode(ledPin, OUTPUT);	// configura la salida PIN 10
    }

    void loop()	// bucle del programa
    {
        for (int i = 0; i < 8; i++)	// crea un bucle tipo for utilizando la variable i de 0 a 7
        {
            analogWrite (ledPin, parpadeo [i]);	// escribe en la salida PIN10 el valor al que 
            delay (500); // espera 200ms		// apunta i dentro del array parpadeo []
        }
    }
```

[Simulación del código de Arduino](https://www.tinkercad.com/things/7wLa3cdEXFn-arrays "Arduino simulación del código")