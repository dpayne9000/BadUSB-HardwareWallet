#include <string.h>
#include "Keyboard.h"

void setup() {
  Keyboard.begin();
  delay(2000);
  OutKey();
  
}

void OutKey(){
  //replace keyhere with your private key
Keyboard.println("keyhere");
}

void loop() {
  // 

}
// if you somehow put keystrokes in the loop, and can't get it to stop to upload,
// put the cursor in front of a comment and press compile, it won't matter how many keystrokes the 
// ducky puts out, it will compile and build 

// put cursor here ->
