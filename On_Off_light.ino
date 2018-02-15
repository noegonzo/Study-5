const int LED = 13; 
const int BUTTON = 7; 
int val = 0; 
int state = 0; // 0 = LED off while 1 = LED on
void setup() {
pinMode(LED, OUTPUT); // tell Arduino LED is an output pinMode(BUTTON, INPUT)
}
void loop() {
val = digitalRead(BUTTON); 
if (val == HIGH) {
    state = 1 - state;
  }
if (state == 1) {
digitalWrite(LED, HIGH); // turn LED ON
}else{ digitalWrite(LED, LOW);
}
}
