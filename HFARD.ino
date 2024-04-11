// Define the pins
const int BuzzerPin = 8;
const int PotentiometerPin = A0;

void setup() {
  // Set the buzzer pin as an output
  pinMode(BuzzerPin, OUTPUT);
}

void loop() {
  // Read the value from the potentiometer
  int potValue = analogRead(PotentiometerPin);
  
  // Map the potentiometer value to the frequency range
  int frequency = map(potValue, 0, 1023, 0, 25000);
  
  // Generate the tone with the calculated frequency
  tone(BuzzerPin, frequency);
}
