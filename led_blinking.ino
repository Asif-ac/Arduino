int led = 13;
void setup()
{
pinMode(13, OUTPUT);
}
void loop()
{
 digitalWrite(led, HIGH);
 delay(1000);
 digitalWrite(led,LOW);
 delay(1000);
}
