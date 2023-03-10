int sensorVic = A0;
int sensorCarlos = A1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
  float sensorVicValue = analogRead(sensorVic);

  float sensorCarlosValue = analogRead(sensorCarlos);

  Serial.print("Carlos: ");
  Serial.println(sensorCarlosValue);
  Serial.print("Victor: ");
  Serial.println(sensorVicValue);

  delay(1000);
}
