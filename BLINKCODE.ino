const int led = 13; // Led Pin Number
const int button=4;
bool buttonstatus=false;
bool buttonlaststatus=false;

void setup() {
  pinMode(led, OUTPUT);    // Setting the pin as OUTPUT pin
  pinMode(button, INPUT);
}

void loop() {
  buttonstatus=digitalRead(button);
  if (buttonstatus != buttonlaststatus){
    if(buttonstatus==HIGH){
      char msg[] = "VANSH"; // HERE WE ARE STORING THE NAME IN ARRAY
      int msglength = strlen(msg);
    
      for (int i = 0; i < msglength; i++) {     //THE LOOP WILL RUN THROUGHOUT THE LENGTH OF AN ARRAY
        char a = toupper(msg[i]);         
    
        switch (a) {
          case 'A':
            blinkFunc(".-");
            break;
          case 'B':
            blinkFunc("-...");
            break;
          case 'C':
            blinkFunc("-.-.");
          case 'D':
            blinkFunc("-..");
            break;
          case 'E':
            blinkFunc(".");
            break;
          case 'F':
            blinkFunc("-.");
            break;
          case 'G':
            blinkFunc("--.");
            break;
           case 'H':
            blinkFunc("....");
            break;
           case 'I':
            blinkFunc("..");
            break;
           case 'J':
            blinkFunc(".---");
            break;
           case 'K':
            blinkFunc("-.-");
            break;
           case 'L':
            blinkFunc(".-..");
            break;
           case 'M':
            blinkFunc("--");
            break;
           case 'N':
            blinkFunc("-.");
            break;
           case 'O':
            blinkFunc("---");
            break;
           case 'P':
            blinkFunc(".--.");
            break;
           case 'Q':
            blinkFunc("--.-");
            break;
           case 'R':
            blinkFunc(".-.");
            break;
           case 'S':
            blinkFunc("...");
            break;
           case 'T':
            blinkFunc("-");
            break;
           case 'U':
            blinkFunc("..-");
            break;
           case 'V':
            blinkFunc("...-");
            break;
           case 'W':
            blinkFunc(".--");
            break;
           case 'X':
            blinkFunc("-..-");
            break;
           case 'Y':
            blinkFunc("-.--");
            break;
           case 'Z':
            blinkFunc("--..");
            break;
          default:
            delay(300);
            break;
        }
    
        delay(3000); // SPACING BETWEEN THE LETTERS
      }
      delay(1000); 
      }
      buttonlaststatus = buttonstatus;
  }
}

void blinkFunc(const char* morsecode) {
  for (int i = 0; morsecode[i]; i++) {    // For Loop For Running Through the Morsecode
    if (morsecode[i] == '.') {            // For Running The dot Method
      digitalWrite(led, HIGH);       // Setting pin high
      delay(500);
      digitalWrite(led, LOW);        // Setting the pin Low
      delay(400);
    }
    else if (morsecode[i] == '-') {       // Run the Dash Method
      digitalWrite(led, HIGH);         // Set the pin-High
      delay(1800);
      digitalWrite(led, LOW);        // Setting the pin Low
      delay(400);
    }
  }
}
