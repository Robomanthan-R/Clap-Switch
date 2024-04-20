const int micPin = A0;  
const int ledPin = 13;  
int threshold = 500;    
void setup() {
  pinMode(ledPin, OUTPUT);  
  Serial.begin(9600);       
}
void loop() {
  int sensorValue = analogRead(micPin);  
  Serial.println(sensorValue);           
  if (sensorValue > threshold) {
    digitalWrite(ledPin, HIGH);  
    delay(1000);                 
    digitalWrite(ledPin, LOW);   
  }
}
