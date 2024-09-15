  #define red 8 
  #define yellow 7 
  #define green 6
  
void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red, HIGH); delay(1000);
  digitalWrite(red, LOW); delay(500);

  digitalWrite(yellow, HIGH); delay(1000);
  digitalWrite(yellow, LOW); delay(500);

  digitalWrite(green, HIGH); delay(1000);
  digitalWrite(green, LOW); delay(500);

  digitalWrite(yellow, HIGH); delay(1000);
  digitalWrite(yellow, LOW); delay(500);

}
