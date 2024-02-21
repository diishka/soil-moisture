int sensor_analog;
const int sensor_pin = A0;
const int rele = 5;

void setup(void) {
  Serial.begin(9600);
  pinMode(rele, OUTPUT);
}

void loop(void) {
  sensor_analog = analogRead(sensor_pin);
  delay(1000);
  digitalWrite(rele, LOW);


  if (sensor_analog >= 370 && sensor_analog <= 600)
  {
    Serial.println("the soil is humid.");
    digitalWrite(rele, HIGH);
    delay(2000);
  }

}
