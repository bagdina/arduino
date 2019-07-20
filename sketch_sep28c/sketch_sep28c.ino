int counter = -1;
int MAX_VALUE = 16;

void updateLED(int pin, int bit, int ctr) {
    digitalWrite(pin,  (ctr & (1<<bit)) == (1<<bit) ? HIGH : LOW);
}

void setup() {
    // put your setup code here, to run once:
    pinMode(12, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(9, OUTPUT);
}

void loop() {
    // put your main code here, to run repeatedly:
    counter = (counter + 1) % MAX_VALUE;    
    updateLED(12, 0, counter);
    updateLED(11, 1, counter);
    updateLED(10, 2, counter);
    updateLED(9, 3, counter);
    delay(500);
}
