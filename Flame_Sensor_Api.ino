int sensorAnalog = 4;   
int sensorDigital = 19;   
int led = 18;    
int nilaisensorAnalog = 0;
int nilaisensorDigital = 0;
 
void setup() {
Serial.begin(9600);
  pinMode(led, OUTPUT);
}
 
void loop() {
  nilaisensorAnalog = analogRead(sensorAnalog);
  nilaisensorDigital = digitalRead(sensorDigital);
  
  if (nilaisensorAnalog <= 2000 || nilaisensorDigital == 1){
  Serial.print("Nilai Sensor Analog : ");
  Serial.print(nilaisensorAnalog);
  Serial.print(" Nilai Sensor Digital : ");
  Serial.print(nilaisensorDigital);
  Serial.println(" ADA API !!");
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(500);
  digitalWrite(led, HIGH);
  }else{
  digitalWrite(led, LOW);
  Serial.print("Nilai Sensor Analog: ");
  Serial.print(nilaisensorAnalog);
  Serial.print(" Nilai Sensor Digital : ");
  Serial.print(nilaisensorDigital);
  Serial.println(" Itu Berarti Aman");
  delay(2000);
  }
  
  
}
 
