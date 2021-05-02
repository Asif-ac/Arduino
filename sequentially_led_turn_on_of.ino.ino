// A simple programme to sequentially turn on and off 4led's//

int LED1 = 13;
int LED2 = 12;
int LED3 = 11;
int LED4 = 10;
void setup ()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
}

void loop()
{
  digitalWrite(LED1, HIGH);
  delay(100);
  digitalWrite(LED2, HIGH);
  delay(100);
  digitalWrite(LED3, HIGH);
  delay(100);
  digitalWrite(LED4, HIGH);
  delay(100);

  digitalWrite(LED1, LOW);
  delay(50);
  digitalWrite(LED2, LOW);
  delay(50);
  digitalWrite(LED3, LOW);
  delay(50);
  digitalWrite(LED4, LOW);
  delay(50);
  }
