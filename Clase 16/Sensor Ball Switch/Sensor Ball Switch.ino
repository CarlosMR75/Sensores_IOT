int sensorGas = 2;
int pinSensor = 8;

void setup() {
  // put your setup code here, to run once
  Serial.begin(9600);
  pinMode(pinSensor, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = digitalRead(sensorGas);
  int b = digitalReadRead(pinSensor);
  Serial.print("Sensor de gas: ");
  Serial.println(a);
  Serial.println("---------------");
  Serial.print("Sensor de Movimiento: ");
  Serial.println(b);
  Serial.println("---------------");
  delay(1000);
}
