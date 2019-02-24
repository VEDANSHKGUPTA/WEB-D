int LED1=5;
int LED2=6;
int LED3=9;
int LED4=10;
int LDR=A0;

void setup() {
Serial.begin(9600);
pinMode(LED1,OUTPUT);                         //red light on road 1
pinMode(LED2,OUTPUT);                         //green light on road 1
pinMode(LED3,OUTPUT);                         //red light on road 2
pinMode(LED4,OUTPUT);                         //green light on road 2
pinMode(LDR,INPUT);                            
}

void loop() {
  int LDRValue=analogRead(LDR);
  Serial.print("ldr=");
  Serial.print(LDRValue);
  if (LDRValue>700)                                                //low intensity of light      
  {   digitalWrite(LED1,HIGH);                                        
   digitalWrite(LED4,HIGH);
   digitalWrite(LED2,LOW);
   digitalWrite(LED3,LOW);
   delay(5000);                                                    //traffic signal switch their colour after an interval of 5 seconds
   digitalWrite(LED1,LOW);
   digitalWrite(LED4,LOW);
   digitalWrite(LED2,HIGH);
   digitalWrite(LED3,HIGH);
   delay(5000);
  }
  else if(LDRValue<=700&&LDRValue>=300)                            //moderate intensity of light
  {
   digitalWrite(LED1,HIGH);
   digitalWrite(LED4,HIGH);
   digitalWrite(LED2,LOW);
   digitalWrite(LED3,LOW);
   delay(10000);                                                   //traffic signal switch their colour after an interval of 10 seconds
   digitalWrite(LED1,LOW);
   digitalWrite(LED4,LOW);
   digitalWrite(LED2,HIGH);
   digitalWrite(LED3,HIGH);
   delay(10000);
  }
  else                                                             //high intensity of light
  {
   digitalWrite(LED1,HIGH);
   digitalWrite(LED4,HIGH);
   digitalWrite(LED2,LOW);
   digitalWrite(LED3,LOW);
   delay(15000);                                                   //traffic signal switch their colour after an interval of 15 seconds 
   digitalWrite(LED1,LOW);
   digitalWrite(LED4,LOW);
   digitalWrite(LED2,HIGH);
   digitalWrite(LED3,HIGH);
   delay(15000);
  }
}  
