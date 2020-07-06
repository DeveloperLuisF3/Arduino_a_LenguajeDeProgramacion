int ledPin = 10;  // Salida LED en el PIN 10
byte parpadeo [] = {180, 30, 255, 200, 10, 90, 150, 60};//array de 8 valores diferentes
void setup()
{
  pinMode(ledPin, OUTPUT);  // configura la salida PIN 10
}

void loop() // bucle del programa
{
  for (int i = 0; i < 8; i++) // crea un bucle tipo for utilizando la variable i de 0 a 7
  {
    analogWrite (ledPin, parpadeo [i]); // escribe en la salida PIN10 el valor al que 
    delay (500); // espera 200ms    // apunta i dentro del array parpadeo []
  }
}
