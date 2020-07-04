void setup()
{
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(10, HIGH);
  digitalWrite(12, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
  delay(5000); // Wait for 5000 millisecond(s)
}