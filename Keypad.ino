#include<Keypad.h>

const byte rows = 4;
const byte columns = 4;

char keymap [rows][columns]=
{
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[rows] = {2,3,4,5};
byte columnPins[columns] = {6,7,8,9};

Keypad Matrix =  Keypad(makeKeymap(keymap), rowPins, columnPins, rows, columns);


void setup() 
{
  Serial.begin(9600);
}


void loop() 
{
  char key = Matrix.getKey();
  if (key != NO_KEY)
  {
   Serial.println(key);
  }
}
