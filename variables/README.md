# 2. Variables

## variables

Una variable es una manera de nombrar y almacenar un valor numérico para su uso posterior por el programa. Como su nombre indica, las variables son números que se pueden variar continuamente en contra de lo que ocurre con las constantes cuyo valor nunca cambia. Una variable debe ser declarada y, opcionalmente, asignarle un valor. El siguiente código de ejemplo declara una variable llamada *variableEntrada* y luego le asigna el valor obtenido en la entrada analógica del PIN2:


```arduino
    int variableEntrada = 0;    // declara una variable y le asigna el valor 0
    variableEntrada = analogRead (2);   // la variable recoge el valor analógico del PIN2
```


'variableEntrada' es la variable en sí. La primera línea declara que será de tipo entero "int". La segunda línea fija a la variable el valor correspondiente a la entrada analógica PIN2. Esto hace que el valor de PIN2 sea accesible en otras partes del código.

Una vez que una variable ha sido asignada, o re-asignada, usted puede probar su valor para ver si cumple ciertas condiciones (instrucciones if...), o puede utilizar directamente su valor. Como ejemplo ilustrativo veamos tres operaciones útiles con variables: el siguiente código prueba si la variable *"entradaVariable"* es inferior a 100, si es cierto se asigna el valor 100 a *"entradaVariable"* y, a continuación, establece un retardo (delay) utilizando como valor *"entradaVariable"*  que ahora será como mínimo de valor 100:


```arduino
    if (entradaVariable < 100)  // pregunta si la variable es menor de 100
    {
        entradaVariable = 100;  // si es cierto asigna el valor 100 a esta
    }
    delay (entradaVariable);    // usa el valor como retardo
```


**Nota:** Las variables deben tomar nombres descriptivos, para hacer el código más legible. Nombres de variables pueden ser "contactoSensor" o "pulsador", para ayudar al programador y a cualquier otra persona a leer el código y entender lo que representa la variable. Nombres de variables como "var" o "valor", facilitan muy poco que el código sea inteligible. Una variable puede ser cualquier nombre o palabra que no sea una ***palabra reservada*** en el entorno de Arduino.


## Declaración de variables

Todas las variables tienen que declararse antes de que puedan ser utilizadas. Para declarar una variable se comienza por definir su tipo como **int** (entero), **long** (largo), **float** (coma flotante), etc, asignándoles siempre un nombre, y, opcionalmente, un valor inicial. Esto sólo debe hacerse una vez en un programa, pero el valor se puede cambiar en cualquier momento usando aritmética y reasignaciones diversas.

El siguiente ejemplo declara la variable *entradaVariable* como una variable de tipo entero "int", y asignándole un valor inicial igual a cero. Esto se llama una asignación.


```arduino
    int entradaVariable = 0;
```


Una variable puede ser declarada en una serie de lugares del programa y en función del lugar en donde se lleve a cabo la definición esto determinará en que partes del programa se podrá hacer uso de ella.


## Utilización de una variable

Una variable puede ser declarada al inicio del programa antes de la parte de configuración *setup()*, a nivel local dentro de las funciones, y, a veces, dentro de un bloque, como para los bucles del tipo if.. for.., etc. En función del lugar de declaración de la variable así se determinará el ámbito de aplicación, o la capacidad de ciertas partes de un programa para hacer uso de ella.

Una *variable global* es aquella que pueda ser vista y utilizada por cualquier función y estamento de un programa. Esta variable se declara al comienzo del programa, antes de *setup()*.

Una *variable local* es aquella que se define dentro de una función o como parte de un bucle. Sólo es visible y sólo puede utilizarse dentro de la función en la que se declaró.

Por lo tanto, es posible tener dos o más variables del mismo nombre en diferentes partes del mismo programa que pueden contener valores diferentes. La garantía de que sólo una función tiene acceso a sus variables dentro del programa simplifíca y reduce el potencial de errores de programación

El siguiente ejemplo muestra cómo declarar a unos tipos diferentes de variables y la visibilidad de cada variable:


```arduino
    int value;                      // 'value' es visible para cualquier función
    void setup ()
    {
        // no es necesario configurar
    }

    void loop ()
    {
        for (int i = 0; i < 20;)    // 'i' solo es visible
        {                           // dentro del bucle for
            i ++;
        } 
        float f;                    // 'f' es visible solo
    }                               // dentro del bucle
```