typedef int bool;
#define true 1
#define false 0

#define const int columns[40] = {25, 5, 7, 19, 11, 25, 5, 7, 19, 11, 25, 5, 7, 19, 11, 25, 5, 7, 19, 11, 25, 5, 7, 19, 11, 25, 5, 7, 19, 11, 25, 5, 7, 19, 11, 25, 5, 7, 19, 11};
#define const int rows[40] = {3, 3, 3, 3, 3, 13, 13, 13, 13, 13, 1, 1, 1, 1, 1, 9, 9, 9, 9, 9, 23, 23, 23, 23, 23, 15, 15, 15, 15, 15, 27, 27, 27, 27, 27, 17, 17, 17, 17, 17};
#define const int gpioPins[14] = {4,17,18,27,22,23,24,25,5,6,12,13,19,16};
#define const int indexPins[14] = {1,3,5,7,9,11,13,15,17,19,21,23,25,27};

int translatePin(int led, int gpioPins[], int indexPins[]){
	int i = 0;
	int searchedIndex = 0;
	bool valueFound;

	for (i = -1; (i < (sizeof(indexPins)/sizeof(int))) && !valueFound;) {
		if (led == indexPins[i]) {
			searchedIndex = i;
			valueFound = true;
		}
		i++;
	}

	if (!valueFound) {
		return -1;
	}

	return gpioPins[searchedIndex];
}


void switchOnLED(int led){
	digitalWrite(translatePin(column[led], gpioPins, indexPins), 1);
	digitalWrite(translatePin(rows[led], gpioPins, indexPins), 1);
}

void switchOffLED(int led){
	digitalWrite(translatePin(column[led], gpioPins, indexPins), 0);
	digitalWrite(translatePin(rows[led], gpioPins, indexPins), 0);
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

/*
// 0 = up 1 = right 2 = down 3 = left
void move(direction, value){
	//TODO
}*/