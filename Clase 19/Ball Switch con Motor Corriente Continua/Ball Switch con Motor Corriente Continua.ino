int vic = 2;
int car = 3;

int mVic = 13;
int mCar = 12;

void setup () {   
  // SE INICAR MONITOR SERIE E IMPRIME FECHA Y HORA
    Serial.begin(9600);
    pinMode(vic, OUTPUT);
    pinMode(car, OUTPUT);
    pinMode(mVic, INPUT);
    pinMode(mCar, INPUT);
}

void loop () {
  int sVic = digitalRead(mVic);
  int sCar = digitalRead(mCar);

  Serial.print("Sensor 1: ");
  Serial.println(sVic);
  Serial.print("Sensor 2: ");
  Serial.println(sCar);

  digitalWrite(vic, sVic);
  digitalWrite(car, sCar);

  delay(2000);
}
