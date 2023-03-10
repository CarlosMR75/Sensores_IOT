float temp; 
int sensorLM35 = 0;
 
void setup() {
  Serial.begin(9600);
 
}
 
void loop() {
  temp = analogRead(sensorLM35); 
  // Calculamos la temperatura con la fórmula
  temp = (5.0 * temp * 100.0)/1024.0; 
  Serial.println(temp);
  delay(1000);
}