#include "WProgram.h"
void setup();
void loop();
int incomingByte = 0;	// for incoming serial data

void setup() {
	Serial.begin(115200);	// opens serial port, sets data rate to 9600 bps
}

void loop() {

	// send data only when you receive data:
	if (Serial.available() > 0) {
		// read the incoming byte:
		incomingByte = Serial.read();

		// say what you got:
		Serial.print("I received: ");
		Serial.println(incomingByte, DEC);
	}
}


int main(void)
{
	init();

	setup();
    
	for (;;)
		loop();
        
	return 0;
}

