void setup() {
  
  Serial.begin(9600) ;
  pinMode(2, OUTPUT);
  
}

void loop() {
  
  int val;
  val=analogRead(7);
  Serial.println(val);

  //If you need to, you will need to adjust the thresholds. 
  int threshold1 = 200
  int threshold2 = 500

  if(val <= threshold1){
    digitalWrite(2,LOW);
  }else if(val >= threshold2){
    digitalWrite(2,HIGH);
  }
  
}
