const int buttonPin = 2;    
const int ledPin =  13;      

int buttonState = 0;        

void setup() {
  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);

  pinMode(buttonPin, INPUT);
}

void loop() {
 
  buttonState = digitalRead(buttonPin);


  if (buttonState == HIGH) {
 
    Serial.write('1');
    
    
  } else {
 
     Serial.write('0');
  
  }
  delay(1000);
}
