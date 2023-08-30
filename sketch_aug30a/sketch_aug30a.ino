
int tempo = 1000/2, rele = 2;
int valor_lido = 0;
bool vai = false;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(rele, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  valor_lido = map(analogRead(A0), 1023, 0, 0, 100);
  Serial.print("Valor Lido: ");
  Serial.print(valor_lido);
  Serial.println(" %"); // sensor de chuva
  vai = valor_lido >= 50;
  digitalWrite(rele, vai);
  delay(tempo);
  /*if (valor_lido >= 50) {
    Serial.println("a");
  }*/
  /*
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(rele, 1);
  delay(tempo); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(rele, 0);
  delay(tempo); // Wait for 1000 millisecond(s)
  */
}