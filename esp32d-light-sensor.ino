const int LIGHT_SENSOR_PIN = 34;

void setup() {
  Serial.begin(115200);
  pinMode(LIGHT_SENSOR_PIN, INPUT);
}

void loop() {
  const int lightValue = analogRead(LIGHT_SENSOR_PIN);

  Serial.print("Light value: ");
  Serial.println(lightValue);

  delay(250);
}
