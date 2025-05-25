#define HUMIDIFIER_PIN 4
#define LED_PIN 3
#define BUTTON_PIN 2

bool humidifier_state = false;

void setup() {
  pinMode(HUMIDIFIER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // Bluetooth control
  if (Serial.available()) {
    String cmd = Serial.readStringUntil('\n');
    cmd.trim();
    if (cmd == "ON") {
      humidifier_state = true;
    } else if (cmd == "OFF") {
      humidifier_state = false;
    }
  }

  // Button control
  if (digitalRead(BUTTON_PIN) == LOW) {
    delay(200);  // debounce
    humidifier_state = !humidifier_state;
    while(digitalRead(BUTTON_PIN) == LOW);  // wait for release
  }

  // Apply state
  digitalWrite(HUMIDIFIER_PIN, humidifier_state);
  digitalWrite(LED_PIN, humidifier_state);
}

