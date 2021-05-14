int counter = 0;

void setup() {
    pinMode(0, OUTPUT);
    pinMode(1, OUTPUT);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
}

void loop() {
    displayBinary(counter);
    delay(3000);
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