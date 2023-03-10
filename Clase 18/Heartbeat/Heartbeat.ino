const int SENSOR_PIN = 14; 
int sensorValue;

void setup() {
  Serial.begin(9600);
  pinMode(SENSOR_PIN, INPUT);
}

void loop() {
  sensorValue = analogRead(SENSOR_PIN);
  Serial.println(sensorValue);
  delay(1000);
}

