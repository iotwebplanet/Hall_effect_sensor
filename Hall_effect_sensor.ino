//int hallsensorpin=2;
int red=9;
int green=8;
int yoll=7;
void setup() {
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(yoll,OUTPUT);
//  pinMode(hallsensorpin,INPUT);
  // put your setup code here, to run once:
  Serial.begin(9600);
}
void loop() {
  int state=analogRead(A0);
  Serial.println(state);
  // put your main code here, to run repeatedly:
if(state >=520 && state <=590){//ex 560 >550|| 560<=570
   digitalWrite(green,HIGH);
   digitalWrite(red,LOW);
   digitalWrite(yoll,LOW);
  }
else {
    digitalWrite(green,LOW);
    digitalWrite(yoll,LOW);
    if(state >=590 ){
    digitalWrite(red,HIGH);} 
    else{
        digitalWrite(red,LOW);
        digitalWrite(green,LOW);
        digitalWrite(yoll,HIGH);
        }
      }
}
