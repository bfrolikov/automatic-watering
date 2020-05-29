const int RELAY_PIN = 4;
const int DETECTOR_PIN = A6;
const int DETECTOR_THRESHOLD = 450;

void addWater();

void setup() {
  pinMode(RELAY_PIN,OUTPUT);
  digitalWrite(RELAY_PIN,HIGH);
  delay(9000);
}

void loop() {
  if(analogRead(DETECTOR_PIN) >= DETECTOR_THRESHOLD)
  {
    //soil is dry
     addWater();
  }
  delay(3000);
}

void addWater(){
  digitalWrite(RELAY_PIN,LOW);
  delay(1100);
  digitalWrite(RELAY_PIN,HIGH);
}
