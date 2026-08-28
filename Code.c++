// C++ code
//

int Ledlaranja = 6;
int InfraVermelho=7;

void setup()
{
  pinMode(Ledlaranja, OUTPUT);
  pinMode(InfraVermelho, INPUT);
}

void loop()
{
  if( digitalRead(InfraVermelho) == HIGH){
  digitalWrite(Ledlaranja, HIGH);
  delay(100); 
  }else{
    digitalWrite(Ledlaranja, LOW);}
}
      
  
