int pin=13;
int dot_pause = 1000;
int dash_pause = 3*dot_pause;
int letter_pause = dash_pause;
int word_pause = dot_pause*7;
// Define the hasmap
void setup() {
  // put your setup code here, to run once:
  pinMode(pin,OUTPUT);

}

// Basic Commands
void dot(int pin, int dot_pause){
  digitalWrite(pin,HIGH);
  delay(dot_pause);
  digitalWrite(pin,LOW);
  delay(dot_pause);
}
void dash(int pin, int dash_pause){
  digitalWrite(pin,LOW);
  delay(dash_pause);
}

void letterPause(int pin, int word_pause){
  digitalWrite(pin,LOW);
  delay(word_pause);
}

void loop() {
  // put your main code here, to run repeatedly:
  // L
  dot(pin,dot_pause);
  dash(pin, dash_pause);
  dot(pin,dot_pause);
  dot(pin,dot_pause);
  // U
  dot(pin,dot_pause);
  dot(pin,dot_pause);
  dash(pin, dash_pause);
  //C
  dash(pin, dash_pause);
  dot(pin,dot_pause);
  dash(pin, dash_pause);
  dot(pin,dot_pause);
  //I
  dot(pin,dot_pause);
  dot(pin,dot_pause);
}
