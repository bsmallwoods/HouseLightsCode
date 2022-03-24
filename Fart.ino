/*
  CTC GO! CORE MODULE 
  LESSON 04 - Digital Inputs & Outputs

  This sketch is written to accompany Activity 3 in Lesson 04 of the CTC GO! core module
*/

// Initialising the pins and other variables.

int button1 = 0;
int button2 = 0;

const int buttonPin1 = 10;
const int buttonPin2 = 9;

int LEDstatus = 0;

void setup()
{
  // Setting up the pins as OUTPUTS.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
}

void loop(){
button1 = digitalRead(buttonPin1);
button2 = digitalRead(buttonPin2);
  if (button1 == HIGH && button2 == HIGH){
    digitalWrite(LED_BUILTIN, LOW);
  }
  else if (button1 == LOW || button2 == HIGH)
  {
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else 
  {
    digitalWrite(LED_BUILTIN, LOW);
  }
  
  
}
