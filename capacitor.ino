

const int capPin = 32;   // Analog pin connected to capacitor
int capValue = 0;        // Variable to store ADC reading

void setup() {
  Serial.begin(115200);   // Start serial communication
  delay(1000);
  Serial.println("ESP32 Capacitor Timer Started...");
}

void loop() {
  // Read the capacitor voltage (0 - 4095 for 12-bit ADC)
  capValue = analogRead(capPin);

  // Print the reading to the Serial Monitor
  Serial.print("Capacitor Voltage Reading: ");
  Serial.println(capValue);

  // Small delay for stability
  delay(200);
}
