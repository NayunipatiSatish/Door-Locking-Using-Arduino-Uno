void setup() 
{
    pinMode(3,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(A0,INPUT);
    Serial.begin(9600); 
}

void loop() 
{
    float p;
    p=analogRead(A0);
    Serial.println(p);
    digitalWrite(3,HIGH);
    if(p>0&&p<100)
    { Serial.println(p);
      digitalWrite(3,HIGH);
      delay(2000);
      digitalWrite(5,HIGH);
    }
    else
    {
      digitalWrite(3,LOW);
      delay(2000);
      digitalWrite(5,LOW);
      
    }
    
}
