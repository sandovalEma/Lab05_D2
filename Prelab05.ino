// constants won't change. They're used here to 
// set pin numbers:
const int buttonOne = PUSH1;     // the number of the pushbutton pin
const int buttonTwo = PUSH2;     // the number of the pushbutton pin
const int ledRed = 30;
const int ledGreen =  39;      // the number of the LED pin
const int ledBlue =  40;      // the number of the LED pin

// variables will change:
int buttonOneState = 0;         // variable for reading the pushbutton #1 status
int buttonTwoState = 0;         // variable for reading the pushbutton #2 status

void setup() {
  // initialize the LED pins as  output:
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);     
  pinMode(ledBlue, OUTPUT);     
   
  // initialize the pushbutton pin as an input:
  pinMode(buttonOne, INPUT_PULLUP);     
  pinMode(buttonTwo, INPUT_PULLUP);     
}

void loop(){
  // read the state of the pushbutton value:
  buttonOneState = digitalRead(buttonOne);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonOneState == LOW) {     
    // turn LED on: 
    delay(1000);   
    digitalWrite(ledRed, HIGH);
    delay(1000);
    digitalWrite(ledRed, LOW);
    delay(1000);
   
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledRed, HIGH);
    delay(1000);
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledRed, LOW);
    delay(1000);

    digitalWrite(ledGreen, HIGH);
    delay(1000);
    digitalWrite(ledGreen, LOW);
    delay(1000);
  }
  
   else {
    // turn LED off:
    digitalWrite(ledGreen, LOW); 
    digitalWrite(ledRed,LOW);
   }
}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
