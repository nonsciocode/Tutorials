/** Copyright (C) 2021  Nonscio, LLC
 *  This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

//================================================================================
//CONSTANTS
//================================================================================

const int outputPin = 12; //Define the OUT Pin

//================================================================================
//VARIABLES
//================================================================================

//================================================================================
//FUNCTIONS
//================================================================================

/**
 * Function: setup()
 * Description: The setup() function runs once after the microcontroller is 
 * booted or reset. Sets the pin modes of the defined motor logic pin to OUTPUT
 * mode. Sets the echoPin as INPUT and the trigPin as OUTPUT. Initializes
 * distance and duration as 0. Initializes rand function, and serial monitor for
 * debugging.
 */

void setup() {

  pinMode(outputPin, INPUT);  //Set Output Pin Pin as INPUT

  Serial.begin(9600);

}

/**
 * Function: loop()
 * Description: The loop() function runs repeatedly in a loop after the setup()
 * function has completed. Executes code to operate the Infrared sensor,
 * interpret sensor data and make and execute descisions based on sensor data.
 */

void loop() {

  if(digitalRead(outputPin) > 0) {     //If no obstacle is detected

    Serial.println("No obstacle detected!");
    
  } else {                              //Otherwise (Obstacle Detected)
    
    Serial.println("Obstacle detected!");
    
  }
  
}
