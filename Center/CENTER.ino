int x = 0;
int m = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  initMotors();
  fwd();  
  

}

void loop() {
  //testSensors();
  turnonblack();
  turnonwhite();
}