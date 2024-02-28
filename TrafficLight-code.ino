
int red = 8;  //red (red LED) connected to digital pin 8
int g = 6;    //g (green LED) connected to digital pin 6
int y = 7;    //y (yellow LED) connected to digital pin 7
void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);  //sets the pin 8 (red LED) as output
  pinMode(g, OUTPUT);    //sets the pin 6 (green LED) as output
  pinMode(y, OUTPUT);    //sets the pin 7(yellow LED) as output
}

void loop() {

  //sets the digital pin  [ (green LED on] & [ yellow LED off] & [ red LED off]
  digitalWrite(g, HIGH);
  digitalWrite(y, LOW);
  digitalWrite(red, LOW);
  delay(3000);  // waits for 3 second


  //sets the digital pin  [ (green LED off] & [ yellow LED on] & [ red LED off]
  digitalWrite(y, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(red, LOW);
  delay(1000);  // waits for 1 second


  //sets the digital pin  [ (green LED off] & [ yellow LED off] & [ red LED on]
  digitalWrite(red, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(y, LOW);
  delay(2000);  // waits for 2 second
}
