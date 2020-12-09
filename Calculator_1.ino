#include <Keypad.h>
char key;
String expression;
const byte ROWS = 4; // Four rows
const byte COLS = 4; // Three columns

// Define the Keymap
char i[ROWS][COLS] = {
  {'7','8','9','/'},
  {'4','5','6','*'},
  {'1','2','3','-'},
  {'C','0','=','+'}
};
byte rowPins[ROWS] = { 11, 10, 9, 8 };// Connect keypad ROW0, ROW1, ROW2 and ROW3 to these Arduino pins.
byte colPins[COLS] = { 5, 4, 3, 2 }; // Connect keypad COL0, COL1 and COL2 to these Arduino pins

Keypad kpd = Keypad( makeKeymap(i), rowPins, colPins, ROWS, COLS );

void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  key=kpd.getKey();
  if(key==NULL){
    }
    else{
  Serial.println(key);
  if(key=='C'){
    Serial.println("Boom");
    }
  /*if(key=='=')
  calculateResult();//function for calculation*/
    }
 /* if(key=='C')
  expression='';//return to the empty expression
  
  if(key=='=')
  calculateResult();//function for calculation

  else
expression.concat('key');*/

}
