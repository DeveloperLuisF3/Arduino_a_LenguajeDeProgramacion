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
