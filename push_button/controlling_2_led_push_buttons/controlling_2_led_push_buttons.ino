#define RedButton 8
#define BlueButton 9

#define RedPin 13
#define BluePin 12

int state;
String message;
int dt = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(RedButton,INPUT);
  pinMode(BlueButton,INPUT);

  pinMode(RedPin,OUTPUT);
  pinMode(BluePin,OUTPUT);
  Serial.begin(9600);
}

void BlinkLED(int LEDPin, int dt){
  digitalWrite(LEDPin,HIGH);
  delay(dt);
  digitalWrite(LEDPin,LOW);
  delay(dt);
}

void TurnOnLED(int LEDPin){
  digitalWrite(LEDPin,HIGH);
}
void TurnOFFLED(int LEDPin){
  digitalWrite(LEDPin,LOW);
}


void loop() {
  // put your main code here, to run repeatedly:
  int RedButtonState = digitalRead(RedButton);
  int BlueButtonState = digitalRead(BlueButton);
  
  if (RedButtonState == 0 and BlueButtonState == 0){
    state = 0;
    message = "State: 0 changed to: Red LED ON Blue LED OFF";
  }
  if (RedButtonState == 1 and BlueButtonState == 0){
    state = 1;
    message ="State: 1 changed to: Red LED Off Blue LED OFF";
  }
  if (RedButtonState == 1 and BlueButtonState == 1){
    state = 2;
    message ="State: 4 changed to: RED LED ON Blue LED ON ";
  }
  if (RedButtonState == 0 and BlueButtonState == 1){
    state = 3;
    message ="State: 3 changed to: RED LED ON Blue LED ON";
  }

  switch(state){
    case 0:
      TurnOnLED(RedPin);
      TurnOFFLED(BluePin);
      Serial.println(message);
      delay(dt);
      break;
    case 1:
      TurnOFFLED(BluePin);
      TurnOFFLED(RedPin);
      Serial.println(message);
      delay(dt);
      break;
  case 2:
      TurnOnLED(RedPin);
      TurnOnLED(BluePin);
      Serial.println(message);
      delay(dt);
      break;
  case 3:
      TurnOnLED(RedPin);
      TurnOnLED(BluePin);
      Serial.println(message);
      delay(dt);
      break;}
}
