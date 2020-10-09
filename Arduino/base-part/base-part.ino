void setup() {
  
  Serial.begin(9600);  
  
}

void loop(){
  
  int val;
  val = analogRead(7);
  
  //If necessary, you need to adjust the value of "map".
  val = map(val, 0, 1023, 210, 0);
  
  Serial.println(val); 
  analogWrite(3, val);

}
