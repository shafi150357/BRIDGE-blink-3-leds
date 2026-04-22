int led1=2;
int led2=4;
int led3=6;
int push_button=8;
void setup(){
  pinMode(push_button,INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop(){
  if(push_button,HIGH){
  digitalWrite(led1,HIGH);
  delay(3000);
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  delay(4000);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  delay(4000);
  digitalWrite(led3,LOW);
  }
  else{
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
}
}