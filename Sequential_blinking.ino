
/* Code to control the brightness of the LED(Analog signal)*/ 

int LED1 = 13;

void setup() {
   pinMode(LED1, OUTPUT);
}


void loop() {
  analogWrite(LED1, 50);  // turn on LED1 
  delay(200);                  // wait for 200ms
  analogWrite(LED1, 50);  // turn on LED1 
  delay(200);                  // wait for 200ms       
  analogWrite(LED1, 50);  // turn on LED1 
  delay(200);                  // wait for 200ms

}
