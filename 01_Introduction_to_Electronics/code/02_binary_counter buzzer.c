int counter = 0;
const int buzzerPin = 8;

void setup() {
    pinMode(0, OUTPUT);
    pinMode(1, OUTPUT);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(buzzerPin, OUTPUT);
}

void loop() {
    if (counter == 0) {
        tone(buzzerPin, 200, 100);
    }
    displayBinary(counter);
    delay(500);
    counter++;
    if (counter == 16) {
        counter = 0;
    }
}

void displayBinary(int number) {
    for (int i=0; i<4; i++) {
        if (bitRead(number, i) == 0) {
            digitalWrite(i, LOW);
        } else {
            digitalWrite(i, HIGH);
        }
    }
}