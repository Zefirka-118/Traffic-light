int rojo = 8;
int amarillo = 9;
int verde = 10;

void setup() {

  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(verde, OUTPUT);

}

void loop() {

  // ROJO
  digitalWrite(rojo, HIGH);
  digitalWrite(amarillo, LOW);
  digitalWrite(verde, LOW);
  delay(5000);

  // AMARILLO
  digitalWrite(rojo, LOW);
  digitalWrite(amarillo, HIGH);
  delay(2000);

  // VERDE
  digitalWrite(amarillo, LOW);
  digitalWrite(verde, HIGH);
  delay(5000);

  // AMARILLO antes del rojo
  digitalWrite(verde, LOW);
  digitalWrite(amarillo, HIGH);
  delay(2000);

  digitalWrite(amarillo, LOW);
}