int moisture,sensor_analog;
const int sensor_pin = A0;
const int rele = 5;

void setup(void) {
  Serial.begin(9600);
  pinMode(rele, OUTPUT);
}

void loop(void) {
  sensor_analog = analogRead(sensor_pin);
  // moisture = ( 100 - ( (sensor_analog/4095.00) * 100 ) );
  Serial.println(sensor_analog);
  delay(1000);
  digitalWrite

  // digitalWrite(rele, HIGH);
  // Serial.println("Turnin on");
  // delay(1000);
  // digitalWrite(rele, LOW);
  // Serial.println("Turnin off");
  // delay(1000);

  // if (sensor_analog > 600)
  // {
  //   Serial.println("the sensor in the water.");
  //   digitalWrite(rele, LOW);
  
  // }
  

  if (sensor_analog >= 370 && sensor_analog <= 600)
  {
    Serial.println("the soil is humid.");
    digitalWrite(rele, HIGH);
  }
  
  // else if (sensor_analog >= 0 && sensor_analog <= 400)
  // {
  //   Serial.println("the soil is dry.");
    
  // }

  // else if (sensor_analog >= 400)
  // {
  //   digitalWrite(rele, 1);
  //   delay(1000);
  //   digitalWrite(rele, 0);
  //   Serial.println("the soil is humid.");
  // }

  

}