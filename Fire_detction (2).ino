         
/* _______________________________fire Detector___________________________________________________*/   

#define buzzerPin 12                      //buzzer pin connecetd to pin 11 of Arduino Nano 
#define LED 2                             //LED pin connecetd to pin 2 of Arduino Nano
#define flamePin 11                       //falme sensor  pin conneceted to pin 2 of Arduino Nano
#define flamepinanalog A0                 //falme sensor pin connected to analog pin A0 of arduino nano 
 void setup() 
{
  pinMode(buzzerPin, OUTPUT);            //Set buzzer as OUTPUT device
  pinMode(LED,OUTPUT);                   //Set LED as OUTPUT device
  pinMode(flamePin, INPUT);              //set Flamesensor as INPUT device
  Serial.begin(9600);                    // Initiate a serial communication with baud rate of 9600
  
} 
void loop() {
 int Flame = digitalRead(flamePin);       
  if (Flame== LOW) {                      //if Fire is detected
    Serial.println("Fire is Detected");
    digitalWrite(buzzerPin, HIGH);       // turns the buzzer on
    digitalWrite(LED, HIGH);             // turns the LED on
     } 
   else 
  { 
    Serial.println("No Fire is Detected");
    digitalWrite(buzzerPin, LOW);        // turns the buzzer off
    digitalWrite(LED,LOW);               // turns the LED off
  }
}
