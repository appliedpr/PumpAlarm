/*Provides the logic to trigger a sound speech alarm upon
the water pressure pump activation by monitoring
the pressure sw contact position to send a signal and 
start the logic sequence. A WT588d audio ckt is used
for the speech implementation. Uses ATtiny85 uP.*/

void setup() {
#define pin_pressSwitchStatus 0  // activated=1 deactivated=0 input
#define pin_Led 1 // indicator LED output
}

void loop() {
  // put your main code here, to run repeatedly:

}
