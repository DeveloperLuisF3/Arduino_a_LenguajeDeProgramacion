# Estructura

## Estructura de un programa

La estructura básica del lenguaje de programación de Arduino es bastante simple y se compone de al menos dos partes. Estas dos partes necesarias, o funciones, encierran bloques que contienen declaraciones, estamentos o instrucciones.


```ardino
    void setup ()
    {
        estamentos;
    }
    void loop ()
    {
        estamentos;
    }
```


En donde **setup()** es la parte encargada de recoger la configuración y **loop()** es la que contiene el programa que se ejecutará cíclicamente (de ahí el termino loop-bucle-). Ambas funciones son necesarias para que el programa trabaje.

La función de configuración debe contener la declaración de las variables. Es la primera función a ejecutar en el programa, se ejecuta sólo una vez, y se utiliza para configurar o inicializar pinMode (modo de trabajo de las E/S), configuración de la comunicación en serie y otras.

La función bucle (loop) siguiente contiene el código que se ejecutara continuamente (lectura de entradas, activación de salidas, etc) esta función es el núcleo de todos los programas de Arduino y la que realiza la mayor parte del trabajo.


## setup()

La función **setup** se invoca una sola vez cuando el programa empieza. Se utiliza para inicializar los modos de trabajo de los pins, o el puerto serie. Debe ser incluido en un programa aunque no haya declaración que ejecutar.


```arduino
    void setup ()
    {
        pinMode (pin, OUTPUT);  // configurar el 'pin' como salida
    }
```


## loop ()

Después de llamar a **setup()**, la función **loop()** hace precisamente lo que sugiere su nombre, se ejecuta de forma cíclica, lo que posibilita que el programa este respondiendo continuamente ante los eventos que se produzcan en la tarjeta.


```arduino
    void loop ()
    {
        digitalWrite (pin, HIGH);   // pone en uno (on, 5v) el 'pin'
        delay (1000);   // espera un segundo (1000 ms)
        digitalWrite (pin, LOW);    // pone en cero (off, 0v.) el 'pin'
        delay (1000);
    }
```


## funciones

Una función es un bloque de código que contiene un nombre y un conjunto de estamentos que son ejecutados cuando se llama a la función. Son funciones setup () y loop () de las que ya se ha hablado. Las funciones de usuario pueden ser escritas para realizar tareas repetitivas y reducir el tamaño de un programa. Las funciones se declaran asociadas a un tipo de valor **"type"**. Este valor será el que devolverá la función, por ejemplo **'int** se utilizará cuando la función devuelva un dato númerico de tipo entero. Si la función no devuelve ningún valor entonces se colocará delante la palabra **"void"**, que significa "función vacía". Después de declarar el tipo de dato que devuelve la función se debe escribir el nombre de la función y entre paréntesis se escribirán, si es necesario, los parámetros que se deben pasar a la función para que se ejecute.


```arduino
    type nombreFunción (parámetros)
    {
        estamentos;
    }
```


La función siguiente devuelve un número entero, **delayVal()** se utiliza para poner un valor de retraso en un programa que lee una variable analógica de un potenciómetro conectado a una entrada de Arduino. Al principio se declara como una variable local, **'v'** recoge el valor leído del potenciómetro que estará comprendido entre 0 y 1023, luego se divide el valor por 4 para ajustarlo a un margen comprendido entre 0 y 255, finalmente se devuelve el valor **'v'** y se retornaría al programa principal. Esta función cuando se ejecuta devuelve el valor de tipo entero **'v'**


```arduino
    int delayVal ()
    {
        int v;  // crea una variable temporal 'v'
        v = analogRead (pot);   // lee el valor del potenciómetro
        v /= 4; // convierte 0-1023 a 0-255
        return v;   // devuelve el valor final
    }
```