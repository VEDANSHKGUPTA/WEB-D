
int LED1=5;
int LED2=6;
int LED3=9;
int LED4=10;
int LDR=A0;

void setup() {
Serial.begin(9600);
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(LED3,OUTPUT);
pinMode(LED4,OUTPUT);
pinMode(LDR,INPUT);
}

void loop() {
  int LDRValue=analogRead(LDR);
  Serial.print("ldr=");
  Serial.print(LDRValue);
  if (LDRValue>700)
  {   digitalWrite(LED1,HIGH);
   digitalWrite(LED4,HIGH);
   digitalWrite(LED2,LOW);
   digitalWrite(LED3,LOW);
   delay(5000);
   digitalWrite(LED1,LOW);
   digitalWrite(LED4,LOW);
   digitalWrite(LED2,HIGH);
   digitalWrite(LED3,HIGH);
   delay(5000);
  }
}
