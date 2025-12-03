
int BUT1 = DO;
int BUT2 = D1;
int BUT3 = D2;
int BUT4 = D3;

int LED1 = D6;
int LED2 = D7;
int LED3 = D8;
int LED4 = D9;

int currentLED = 0;

void setup()
{
pinMode(BUT1, INPUT_PULLUP);
pinMode(BUT2, INPUT_PULLUP);
pinMode(BUT3, INPUT_PULLUP);
pinMode(BUT4, INPUT_PULLUP);
  
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
pinMode(LED4, OUTPUT);
  
randomSeed(analogRead(A0));

pickNewLED();
}

void loop()
{
if (currentLED == 0 && digitalRead(BUT1) == LOW) hit();
if (currentLED == 1 && digitalRead(BUT2) == LOW) hit();
if (currentLED == 2 && digitalRead(BUT3) == LOW) hit();
if (currentLED == 3 && digitalRead(BUT4) == LOW) hit();
}

void pickNewLED()
{
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);

currentLED = random(0, 4);


if (currentLED == 0) digitalWrite(LED1, HIGH);
if (currentLED == 1) digitalWrite(LED2, HIGH);
if (currentLED == 2) digitalWrite(LED3, HIGH);
if (currentLED == 3) digitalWrite(LED4, HIGH);
}

void hit()
{
if (currentLED == 0) digitalWrite(LED1, LOW);
if (currentLED == 1) digitalWrite(LED2, LOW);
if (currentLED == 2) digitalWrite(LED3, LOW);
if (currentLED == 3) digitalWrite(LED4, LOW);

delay(150);
  
pickNewLED();
}












