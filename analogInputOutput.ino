#define MUYVALUE_PIN A0
#define LED 9

void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop()
{
  int val = analogRead(MUYVALUE_PIN); 
  int valLed = map(val, 0, 1023, 0, 100);
    
  Serial.println(String(val) +','+String(valLed));
  
  analogWrite(LED, valLed);
  
  delay(100); // Wait for 100 millisecond(s)
}
