# 4. Aritmética

## Aritmetica

Los operadores aritméticos que se incluyen en el entorno de programación son suma, resta, multiplicación y división. Estos devuelven la suma, diferencia, producto, o cociente (respectivamente) de dos operandos.

```arduino
    y = y + 3;
    x = x - 7;
    i = j * 6;
    r = r / 5;
```

Las operaciones se efectúan teniendo el tipo de datos que hemos definido para los operandos (int, dbl, float, etc...), por lo que, por ejemplo, si definimos 9 y 4 como enteros "int", 9 /4 devuelve de resultado 2 en lugar de 2,25 ya que el 9 y 4 de valores de tipo entero "int" (enteros) y no se reconocen los decimales con este tipo de datos.

Esto también significa que la operación puede sufrir un desbordamiento si el resultado es más grande que lo que puede ser almacenada en el tipo de datos. Recordemos el alcance de los tipos de datos numéricos que ya se ha explicado anteriormente.

Si los operandos son de diferentes tipos, para el cálculo se utilizará el tipo más grande de los operandos en juego. Por ejemplo, si uno de los números (operandos)es del tipo float y otra de tipo integer, para el cálculo se utilizará el método de float es decir el método de coma flotante.

Elija el tamaño de las varaiables de tal manera que sea lo suficientemente grande como para que los resultados sean lo precisos que usted desea. Para las operaciones que requieran decimales utilice variables tipo float, pero sea consciente de que las operaciones con este tipo de variables son más lentas a la hora de realizarse el computo.

**NOTA:** Utilice el operador (int)*myFloat* para convertir un tipo de variable a otro sobre la marcha. Por ejemplo, **i = (int)3, 6** establecerá i igual a **3**.

## Asignaciones compuestas

Las asignaciones compuestas combinan una operación aritmética con una variable asignada. Estas son comúnmente utilizadas en los bucles tal como se describe más adelante. Estas asignaciones compuestas pueden ser:

```arduino
    x ++        // igual que x = x + 1, o incrementar x en + 1
    x --        // igual que x = x - 1, o decrementar x en - 1
    x += y      // igual que x = x + y, o incrementar x en + y
    x -=  y     // igual que x = x - y, o decrementar x en - y
    x *= y      // igual que x = x * y, o multiplicar x por y
    x /= y      // igual que x = x / y, o dividir x por y
```

**NOTA:** Por ejemplo, **x * = 3** hace que x se convierta en el triple del antiguo valor x y por lo tanto x es reasignada al nuevo valor.

## Operadores de comparación

Las comparaciones de una variable o constante con otra se utilizan con frecuencia en las estructuras condicionales del tipo *if..* para testear si una condición es verdadera. En los ejemplos que siguen en las próximas páginas se verá su utilización práctica usando los siguientes tipos de condicionales:

```arduino
    x == y      // x es igual a y
    x != y      // x no es igual a y
    x < y       // x es menor que y
    x > y       // x es mayor que y
    x <= y      //x es menor o igual que y
    x >= y      // x es mayor o igual que y
```

## Operadores lógicos

Los operadores lógicos son usualmente una forma de comparar dos expreciones y devolver un **VERDADERO o FALSO** dependiendo del operador. Existen tres operadores lógicos, **AND (&&), OR (||) y NOT (!)**, que a menudo se utilizan en estamentos de tipo if...:

```arduino
    Logical AND:
    if (x > 0 && x < 5)     // cierto sólo si las dos expresiones son ciertas

    Logical OR:
    if (x > 0 || y > 0)     // cierto si cualquiera de las expresiones es cierta

    Logical NOT:
    if (!x > 0)         // cierto solo si la expresión es falsa
```