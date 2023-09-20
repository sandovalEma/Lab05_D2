// constants won't change. They're used here to 
// set pin numbers:
const int buttonOne = 31;    // the number of the pushbutton pin
const int buttonTwo = 17;    // the number of the pushbutton pin
const int buttonStart = 23;     // the number of the pushbutton pin
const int ledRed = 30;          // constante para led rojo y su pin
const int ledGreen = 39;        // constante para led verde y su pin
const int ledBlue = 40;         // constante para led azul y su pin
int contP1 = 0;                 // contador para Player1 iniciando en 0
int contP2 = 0;                 // contador para Player2 iniciando en 0
int bloqueo = 1;                // bloqueo de botones para los jugadores activo
int ARP1 = 0;                   // antirebote Player1
int ARP2 = 0;                   // antirebote Player2
int Winner;                     // si Winner = 0, Player1 es ganador
                                // si Winner = 1, Player2 es ganador

// variables will change:
int buttonOneState = 0;         // variable for reading the pushbutton #1 status
int buttonTwoState = 0;         // variable for reading the pushbutton #2 status
int buttonStartState = 0;       // variable for reading the pushbutton #3 status

// variable to leds
const int led1 = 3;             // leds para contador de decadas de Player1 
const int led2 = 4;
const int led3 = 5;
const int led4 = 6;
const int led5 = 7;
const int led6 = 8;
const int led7 = 9;
const int led8 = 10;
const int led9 = 38;            // leds para contador de decadas de Player2
const int led10 = 37;
const int led11 = 36;
const int led12 = 35;
const int led13 = 34;
const int led14 = 33;
const int led15 = 32;
const int led16 = 11;
const int ledP1 = 24;           // led indicador de Player1 si es ganador
const int ledP2 = 19;           // led indicador de Player2 si es ganador


void setup() {
  // initialize the LED pins as  output:
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);     
  pinMode(ledBlue, OUTPUT);    

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led11, OUTPUT);
  pinMode(led12, OUTPUT);
  pinMode(led13, OUTPUT);
  pinMode(led14, OUTPUT);
  pinMode(led15, OUTPUT);
  pinMode(led16, OUTPUT);
  pinMode(ledP1, OUTPUT);
  pinMode(ledP2, OUTPUT);
   
  // initialize the pushbutton pin as an input:
  pinMode(buttonOne, INPUT_PULLUP);     
  pinMode(buttonTwo, INPUT_PULLUP);  
  pinMode(buttonStart, INPUT_PULLUP);   

  
}

void loop(){

  buttonOneState = digitalRead(buttonOne);              // variable para leer el estado del boton 1
  buttonTwoState = digitalRead(buttonTwo);              // variable para leer el estado del boton 2
  buttonStartState = digitalRead(buttonStart);          // variable para leer el estado del boton 3

    if ((buttonStartState == LOW) and (bloqueo == 1)){     // condicional para iniciar el juego
      contP1 = 0;       // iniciando Player1 en cero
      contP2 = 0;       // iniciando Player2 en cero

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

      bloqueo--;      // desabilitamos el bloqueo de los jugadores
      }
  while (bloqueo == 0){
    if (buttonOneState == LOW){       // si el boton 1 se presiona y el bloqueo esta desabilitado 
      if (ARP1 == 0){                 // si el antirrebote es 0, entonces el contador incrementa 
      contP1++;
      }  ARP1 = 1;
    }
    if (buttonOneState == HIGH){
      ARP1 = 0;
    }
     

    // contador de decadas para el Player1
    switch(contP1){
      case(1):
        digitalWrite(led1, HIGH);
        break;
      case(2):
        digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);
        break;
      case(3):
        digitalWrite(led2, LOW);
        digitalWrite(led3, HIGH);
        break;
      case(4):
        digitalWrite(led3, LOW);
        digitalWrite(led4, HIGH);
        break;
      case(5):
        digitalWrite(led4, LOW);
        digitalWrite(led5, HIGH);
        break;
      case(6):
        digitalWrite(led5, LOW);
        digitalWrite(led6, HIGH);
        break;
      case(7):
        digitalWrite(led6, LOW);
        digitalWrite(led7, HIGH);
        break;
      case(8):
        digitalWrite(led7, LOW);
        digitalWrite(led8, HIGH);
        Winner = 0;
        bloqueo = 1;
        break;
      default:
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
        digitalWrite(led5, LOW);
        digitalWrite(led6, LOW);
        digitalWrite(led7, LOW);
        digitalWrite(led8, LOW);
        contP1 = 0;
        
    }

    if (buttonTwoState == LOW){       // si el boton 2 se presiona y el bloqueo esta desabilitado 
      if (ARP2 == 0){                 // si el antirrebote es 0, entonces el contador incrementa 
      contP2++;
      }  ARP2 = 1;
    }
    if (buttonTwoState == HIGH){
      ARP2 = 0;
    }
    // contador de decadas para el Player2
    switch(contP2){
      case(1):
        digitalWrite(led9, HIGH);
        break;
      case(2):
        digitalWrite(led9, LOW);
        digitalWrite(led10, HIGH);
        break;
      case(3):
        digitalWrite(led10, LOW);
        digitalWrite(led11, HIGH);
        break;
      case(4):
        digitalWrite(led11, LOW);
        digitalWrite(led12, HIGH);
        break;
      case(5):
        digitalWrite(led12, LOW);
        digitalWrite(led13, HIGH);
        break;
      case(6):
        digitalWrite(led13, LOW);
        digitalWrite(led14, HIGH);
        break;
      case(7):
        digitalWrite(led14, LOW);
        digitalWrite(led15, HIGH);
        break;
      case(8):
        digitalWrite(led15, LOW);
        digitalWrite(led16, HIGH);
        Winner = 1;
        bloqueo = 1;
        break;
      default:
        digitalWrite(led9, LOW);
        digitalWrite(led10, LOW);
        digitalWrite(led11, LOW);
        digitalWrite(led12, LOW);
        digitalWrite(led13, LOW);
        digitalWrite(led14, LOW);
        digitalWrite(led15, LOW);
        digitalWrite(led16, LOW);
        contP2 = 0;
    }

    // eleccion de ganador
    //if ((contP1 == 8) or (contP2 == 8)){
     // bloqueo = 0;

      if (Winner == 0){
        digitalWrite(ledP1, HIGH);
      }
      else if (Winner == 1){
        digitalWrite(ledP2, HIGH);
      }
    //}
  } 
}
 
