void setup() {
    Serial.begin(9600);
    for(int i=1;i<=6;i++){
      Serial.print("robatik kodlama");
      Serial.print(i);
    }

}

void loop() {
   Serial.print("");
   Serial.println(6);
}
