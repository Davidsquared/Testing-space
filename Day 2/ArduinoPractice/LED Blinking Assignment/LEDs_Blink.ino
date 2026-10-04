//Declaring of LED blinking function
int i;
void blinker(int counter, int pinUsed, int delayTime);

void setup() {
  // Declaring pins to be used
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // Initialization and declaration of counter and delay time
  int counter;
  int delayTime;
  counter = 3;
  delayTime = 100;
  // Calling Blinker for blinking the 3 LEDs
  blinker(counter,13,delayTime);
  counter = 5;
  blinker(counter,12,delayTime);
  counter = 10;
  blinker(counter, 11, delayTime);
}

// Creation of the Blinker Function
void blinker(int counter, int pinUsed, int delayTime) {
  for (i = 0; i < counter; i++){
    digitalWrite(pinUsed, HIGH);
    delay(delayTime);
    digitalWrite(pinUsed, LOW);
    delay(delayTime);
  }
}
