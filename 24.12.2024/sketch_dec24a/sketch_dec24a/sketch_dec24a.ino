void setup() {
  Serial.begin(9600);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(13,OUTPUT);

}

void loop() {
  int girilen_deger=0;
  if(Serial.available()){
  girilen_deger=Serial.read();
  Serial.print("girilen değer:");
  Serial.println(girilen_deger);

  //digitalWrite(13,1);

  if(girilen_deger=="k"){
    digitalWrite(3,1);
    delay(3000);
     digitalWrite(3,0);
  }
    
if(girilen_deger=="r"){
    digitalWrite(4,1);
    delay(3000);
     digitalWrite(4,0);
  }}
}
