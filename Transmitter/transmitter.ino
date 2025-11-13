// ----------- Transmitter Code (Hand Gesture Controller) -----------

const int xPin = A0;  // X-axis of accelerometer
const int yPin = A1;  // Y-axis of accelerometer
const int zPin = A2;  // Z-axis (optional)

int xValue, yValue;

void setup() {
  Serial.begin(9600);
}

void loop() {
  xValue = analogRead(xPin);
  yValue = analogRead(yPin);

  // Gesture Mapping
  if (xValue < 300) {
    Serial.println("LEFT");
  } 
  else if (xValue > 700) {
    Serial.println("RIGHT");
  } 
  else if (yValue < 300) {
    Serial.println("FORWARD");
  } 
  else if (yValue > 700) {
    Serial.println("BACKWARD");
  } 
  else {
    Serial.println("STOP");
  }

  delay(200);
}
