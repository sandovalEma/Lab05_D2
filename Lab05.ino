
// set pin numbers:
const int buttonOne = PUSH1;     // the number of the pushbutton pin
const int buttonTwo = PUSH2;     // the number of the pushbutton pin
const int ledRed = 30;
const int ledGreen =  39;      // the number of the LED pin
const int ledBlue =  40;      // the number of the LED pin

// variables will change:
int buttonOneState = 0;         // variable for reading the pushbutton #1 status
int buttonTwoState = 0;         // variable for reading the pushbutton #2 status

const int led1 = 2;
const int led2 = 3;
const int led3 = 4;
const int led4 = 5;
const int led5 = 6;
const int led6 = 7;
const int led7 = 8;
const int led8 = 9;



void setup() {
  // put your setup code here, to run once:
      // initialize the LED pins as  output:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);

  // initialize the pushbutton pin as an input:
  pinMode(buttonOne, INPUT_PULLUP);     
  pinMode(buttonTwo, INPUT_PULLUP);     
}

void loop() {
  // put your main code here, to run repeatedly: 
  // read the state of the pushbutton value:
  //buttonTwoState = digitalRead(buttonTwo);

  /*if (buttonTwoState == LOW) { 
   // delay(1000);
    digitalWrite(led1, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    //delay(1000);
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led2, LOW);
   // delay(1000);
    digitalWrite(led3, HIGH);
    delay(1000);
    digitalWrite(led3, LOW);
    //delay(1000);
    digitalWrite(led4, HIGH);
    delay(1000);
    digitalWrite(led4, LOW);
    //delay(1000);
    digitalWrite(led5, HIGH);
    delay(1000);
    digitalWrite(led5, LOW);
   // delay(1000);
    digitalWrite(led6, HIGH);
    delay(1000);
    digitalWrite(led6, LOW);
    //delay(1000);
    digitalWrite(led7, HIGH);
    delay(1000);
    digitalWrite(led7, LOW);
   // delay(1000);
    digitalWrite(led8, HIGH);
    delay(1000);
    digitalWrite(led8, LOW);
    //delay(1000);
     
  }*/

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
