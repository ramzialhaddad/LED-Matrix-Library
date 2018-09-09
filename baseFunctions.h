void switchOnLED(int led){
	digitalWrite(column[led], 1);
	digitalWrite(rows[led], 1);
}

void switchOffLED(int led){
	digitalWrite(column[led], 0);
	digitalWrite(rows[led], 0);
}

void switchOnLEDs(int leds[]){
	for(int x = 0; x < sizeof(leds)/sizeof(int); x++){
		switchOnLED(leds[x]);
	}
}

void switchOffLEDs(int leds[]){
	for(int x = 0; x < sizeof(leds)/sizeof(int); x++){
		switchOffLED(leds[x]);
	}
}

// 0 = up 1 = right 2 = down 3 = left
void move(direction, value){
	//TODO
}