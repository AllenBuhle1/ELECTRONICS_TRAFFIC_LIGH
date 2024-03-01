//initializing variables for entire page scope
  int greenLED_pin = 2;
  int yellowLED_pin = 7;
  int redLED_pin = 12;
  int switchBTN = 13;

  //Arduino Setup Method
void setup()
{
  //Telling all LED pins to behave as output
  pinMode(yellowLED_pin,OUTPUT);
  pinMode(redLED_pin,OUTPUT);
  pinMode(greenLED_pin, OUTPUT);
  
  //Telling Switch pin to behave as input
  pinMode(switchBTN,INPUT);
}
//Method to check if switch is pressed
bool isPressed(int myPin)
{
  bool pressedBTN = false;
  if(digitalRead(myPin)==HIGH)
  {
    pressedBTN = true;
  }
  return pressedBTN;
}
//Arduino loop method
void loop()
{
  //Checking if switch is pressed
  if(isPressed(switchBTN))
  {
    digitalWrite(redLED_pin,HIGH);//Switch on the red LED
    delay(2000);//Keeping red LED on for 2 sec
    digitalWrite(redLED_pin,LOW);//Switching off red LED
    digitalWrite(yellowLED_pin,HIGH);//Switch on yellow LED
    delay(2000);//Keeping yellow LED on for 2 sec
    digitalWrite(yellowLED_pin,LOW);//Switching off the yellow LED
    digitalWrite(greenLED_pin,HIGH);//Switch on green LED
    delay(5000);//Keeping green LED on for 5 sec
    digitalWrite(greenLED_pin,LOW);//Switching off green LED
  }else
  {
    //Making sure that no LED is on if switch button is not pressed
    digitalWrite(redLED_pin,LOW);
    digitalWrite(yellowLED_pin,LOW);
    digitalWrite(greenLED_pin,LOW);
  }
}