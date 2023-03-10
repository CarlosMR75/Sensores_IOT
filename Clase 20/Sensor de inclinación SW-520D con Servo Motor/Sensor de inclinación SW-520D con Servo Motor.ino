int sensor = 8;
int servo = 10;

void setup() {
  Serial.begin(9600);
  pinMode(sensor, INPUT);
  pinMode(servo, OUTPUT);
}

void loop() {
  digitalWrite(servo, digitalRead(sensor));
}
