void setup(){
	pinMode(13,OUTPUT);
}

void loop(){
	for (int i=0;i<3;i=i+1){
		digitalWrite(13, HIGH);
		delay(200);
		digitalWrite(13,LOW);
		delay(200);}

	delay(1200);

	for (int i=0;i<3;i=i+1){
		digitalWrite(13, HIGH);
		delay(800);
		digitalWrite(13,LOW);
		delay(800);}

	delay(1200);

	for (int i=0;i<3;i=i+1){
		digitalWrite(13, HIGH);
		delay(200);
		digitalWrite(13,LOW);
		delay(200);}

	delay(1200);
}
