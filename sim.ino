int led = 13;
unsigned long resetTimer = 0;
unsigned long blinkTimer = 0;
//int blinkBit = 0;
int placeMarker = 0;


#define RESETTIME 5000
#define BLINKDURATION 500

void setup() {                
  pinMode(led, OUTPUT);
  resetTimer = millis();
  placeMarker = 1;
  //blinkTimer = millis();
}

void loop() {
  //if (RESETTIME < (millis() - resetTimer)) {
  //  digitalWrite(led, HIGH);
  //}
  
  switch (placeMarker) {
    case 1:
		if (BLINKDURATION < (millis() - blinkTimer)) {
          //if (blinkBit == 0) {
          //  blinkBit = 1;
          //  digitalWrite(led, HIGH);
          //} else {
          //  blinkBit = 0;
          //  digitalWrite(led, LOW);
          //}
          blinkTimer = millis();
          digitalWrite(led, !digitalRead(led));
    	}
   		break;
    default:
    	// Error
        break;
    
  }
  
  //digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  //delay(1000);               // wait for a second
  //digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  //delay(1000);               // wait for a second
}
