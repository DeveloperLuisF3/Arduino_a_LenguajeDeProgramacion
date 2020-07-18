int led = 13;  // asigna a LED el valor 13
int boton = 7;  // asigna a botón el valor 7
int valor = 0;  // define el valor y le asigna el valor 0
void setup()
{
  pinMode(led, OUTPUT); // configura el led (pin 13) como salida
  pinMode (boton, INPUT); // configura botón (pin 7) como entrada
}
void loop()
{
  valor = digitalRead (boton);  // lee el estado de la entrada botón
  digitalWrite(led, valor); // envía a la salida 'led' el valor leído
}
