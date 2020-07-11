# 5. Constantes

## Constantes

El lenguaje de programaión de Arduino tiene unos valores predeterminados, que son llamados constantes. Se utilizan para hacer los programas más fáciles de leer. Las constantes se clasifican en grupos.

## cierto/falso (true/false)

Estas son constantes booleanas que definen los niveles **HIGH** (alto) y **LOW** (bajo) cuando estos se refieren al estado de las salidas digitales. **FALSE** se asocia con **0** (cero), mientras que **TRUE** se asocia con **1**, pero TRUE también puede ser cualquier otra cosa exepto cero. Por lo tanto, en sentido booleano, -1, 2 y -200 son todos también se define como TRUE. (esto es importante tenerlo en cuenta)

```arduino
    if (b == TRUE);
    {
        ejecutar las instrucciones;
    }
```

## high/low

Estas constantes definen los niveles de salida altos o bajos y se utilizan para la lectura o la escritura digital para las patillas. **ALTO** se define como en la lógica de nivel 1, **ON**, ó 5 voltios, mientras que **BAJO** es lógica nivel 0, **OFF**, o 0 voltios.

```arduino
    digitalWrite (13, HIGH);    // activa la salida 13 con un nivel alto (5v.)
```

## input/output

Estas constantes son utilizadas para definir, al comienzo del programa, el modo de funcionamiento de los pines mediante la instrucción *pinMode* de tal manera que el pin puede ser una **entrada INPUT** o una **salida OUTPUT**.

```arduino
    pinMode (13, OUTPUT);   // designamos que el PIN 13 es una salida
```