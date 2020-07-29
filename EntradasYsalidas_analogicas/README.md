# E/S analogicas

## analogRead(pin)

Lee el valor de un determinado pin definido como entrada analógica con una resolución de 10 *bits*. Esta instrucción sólo funciona en los pins (0-5). El rango de valor que podemos leer oscila de 0 a 1023.

```arduino
    valor = analogRead(pin);    // asigna a valor lo que lee en la entrada 'pin'
```

**NOTA:** Los pins analógicos (0-5) a diferencia de los pins digitales, no necesitan ser declarados como INPUT u OUTPUT ya que son siempre INPUT´s.

## analogWrite(pin, value)

Esta instrucción sirve para escribir un pseudo-valor analógico utilizando el procedimiento de modulación por ancho de pulso (PWM) a uno de los pin´s de Arduino marcados como *"pinPWM"*. El más reciente Arduino, que implementa el chip **ATmega168, permite habilitar como salidas analógicas tipo PWM los pines 3, 5, 6, 9, 10 y 11**. Los modelos de Arduino más antiguos que implementan el chip **ATmega8, solo tiene habilitadas para esta función los pines 9, 10 y 11**. El valor que se puede enviar a estos pines de salida analógicapuede darse en forma de variable o constante, pero siempre con un margen de 0-255.

```arduino
    analogWrite(pin, value);    // escibe 'valor' en el 'pin' definido como analógico
```

Si enviamos el valor 0 genera una salida de 0 voltios en el pin especificado; un valor de 255 genera una salida de 5 voltios de salida en el pin especificado. Para valores de entre 0-255, el pin saca tensiones entre 0 y 5 voltios - el valor HIGH de salida equivale a 5v (5 voltios). Teniendo en cuenta el concepto de señal PWM, por ejemplo, un valor de 64 equivaldrá a mantener 0 voltios de tres cuartas partes del tiempo y 5 voltios a una cuarta parte del tiempo; un valor de 128 equivaldrá a mantener la salida en 0 la mitad del tiempo y 5 voltios la otra mitad del tiempo, y un valor de 192 equivaldrá a mantener en la salida 0 voltios una cuarta parte del tiempo y de 5 voltios de tres cuartas partes del tiempo restante.

Debido a que esta es una función de hardware, en el pin de salida analógica (PWM) se generará una onda constante después de ejecutada la instrucción *analogWrite* hasta que se llegue a ejecutar otra instrucción *analogWrite* (o una llamada a digitalRead o digitalWrite en el mismo pin).

**NOTA:** Las salidas analógicas a diferencia de las digitales, no necesitan ser declaradas como INPUT u OUTPUT..

El siguiente ejemplo lee un valor analógico de un pin de entrada analógica, convierte el valor devidiendolo por 4, y envía el nuevo valor convertido a una salida del tipo PWM o salida analógica:

```arduino
    int led = 10;       // define el pin 10 como 'led'
    int analog = 0;     // define el pin 0 como 'analog'
    int valor;          // define la variable 'valor'

    void setup (){}     // no es necesario configurar entradas y salidas

    void loop()
    {
        valor = analogRead(analog);     // lee el pin 0 y lo asocia a la variable valor
        valor /= 4;                     // divide valor entre 4 y lo asigna a valor
        analogWrite(led, valor);        // escribe en el pin 10 valor
    }
```

[E/S analógicas video](../vid/e-s_analogica.mp4 "Arduino")

[Simulación Arduino](https://www.tinkercad.com/things/5tOc90g4z6T "Arduino Tinkercad")