int rele = 3;

void setup(){
 pinMode(rele, OUTPUT);

}

void loop(){
 digitalWrite(rele, HIGH);
 delay(250);
 digitalWrite(rele, LOW);
 delay(250);
}