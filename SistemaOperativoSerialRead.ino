int Boton(8);
int Led(11);
int dato=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Boton,INPUT);
   pinMode(Led,OUTPUT);
}

void loop() {
 dato=Serial.read();
 Serial.write(dato);
 if(dato!='0'){
  digitalWrite(Led,HIGH);
 
 }
 else{
  digitalWrite(Led,LOW);
 }
 dato='0';
  
}
