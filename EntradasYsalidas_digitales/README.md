# E/S digitales

## pinMode (pin, mode)

Esta instrucción es utilizada en la parte de configuración *setup()* y sirve para configurar el modo de trabajo de un **PIN** pudiendo ser **INPUT** (entrada) u **OUTPUT** (salida).

```arduino
    pinMode (pin, OUTPUT);  // configura 'pin' como salida
```

Los terminales de Arduino, por defecto, están configurados como entradas, por lo tanto no es necesario definirlos en el caso de que vayan a trabajar como entradas. Los pines configurados como entradas quedan, bajo el punto de vista eléctrico, como entradas en estado de alta impedancia.

Estos pines tienen a nivel interno una resistencia de 20KΩ a las que se puede acceder mediante software. Estas resistencias se acceden de la siguiente manera:

```arduino
    pinMode (pin, INPUT);   // configura el 'pin' como entrada
    digitalWrite (pin, HIGH);   // activa las resistencias internas
```

Las resistencias internas normalmente se utilizan para conectar las entradas a interruptores. En el ejemplo anterior no se trata de convertir un pin en salida, es simplemente un método para activar las resistencias interiores.

Los pins configurados como OUTPUT (salida) se dice que están en un estado de baja impedancia estado y pueden proporcionar **40 mA** (miliamperios) de corriente a otros dispositivos y circuitos. Esta corriente es suficiente para alimentar un diodo LED (no olvidando poner una resistencia en serie), pero no es lo suficiente grande como para alimentar cargas de mayor consumo como relés, solenoides, o motores.

Un cortocircuito en las patillas Arduino provocará una corriente elevada que puede deñar o destruir el chip Atmega. A menudo es una buena idea conectar en la OUTPUT (salida) una resistencia externa de 470 o de 1000Ω (ohms).

## digitalRead (pin)

Lee el valor de un pin (definido como digital) dando un resultado **HIGH** (alto) o **LOW** (bajo). El pin se puede especificar ya sea como una variable o una constante (0-13).

```arduino
    valor = digitalRead (Pin);  // hace que 'valor sea igual al estado leído en 'Pin'
```

## digitalWrite (pin, value)

Envía al 'pin' definido previamente como OUTPUT el valor HIGH o LOW (poniendo en 1 o 0 la salida). El pin se puede especificar ya sea como una variable o como una constante (0-13).

```arduino
    digitalWrite (pin, HIGH);   // deposita en el 'pin' un valor HIGH (alto o 1)
```

El siguiente ejemplo lee el estado de un pulsador conectado a una entrada digital y lo escribe en el 'pin' de salida LED:

```arduino
    int led = 13;   // asigna a LED el valor 13
    int boton = 7;  // asigna a botón el valor 7
    int valor = 0;  // define el valor y le asigna el valor 0

    void setup ()
    {
        pinMode (led, OUTPUT);  // configura el led (pin 13) como salida
        pinMode (boton, INPUT); //configura botón (pin7) como entrada
    }

    void loop ()
    {
        valor = digitalRead (boton);    // lee el estado de la entrada botón
        digitalWrite (led, valor);  // envía a la salida 'led' el valor leído
    }
```

[Array video](../vid/E_S-digitales.mp4 "Arduino")

[Simulación Arduino](https://www.tinkercad.com/things/1RWFJk72QnE "arduino tinkencard")