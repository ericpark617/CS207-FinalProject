/*
 * TripwireLauncher
 * 
 * Code based off of :
 * laser_tripwire.ino written by Ian Cumming (hackster.io) - reading photoresistor and cycling modes according to read
 * gobetwinoXLtest.pde by unnamed owner of the mikmo blog (mikmo.dk) - syntax for writing Serial print command compatible with Gobetwino
 * 
 * Modified by Min Kyu Park
*/

const int photoResistor = A0; //photoresistor connected to A0
int state;  //variable for storing value read from photoresistor
int mode = 0; //cycle through opening and closing programs

void setup() 
{
  Serial.begin(9600);
  pinMode(photoResistor, INPUT);  //set pin A0 for input
}

void loop()
{ 
  state = analogRead(photoResistor);  //read value from 
  //cycle modes each time laser is interrupted
  if (state < 800){
    mode++;
  }
  //if light is interrupted, serial print command for Gobetwino to read
  if (mode == 1 && state < 800) { 
      Serial.println("#S|CHROME|[]#");  //Command for Gobetwino (modify according to command created in Gobetwino)
      delay(2000); //delay to prevent multiple occurences in one trigger
    }
   if (mode == 2 && state < 800){
      Serial.println("#S|CLOSE|[]#"); //command to close window (set correct path to .bat file)
      delay(2000);  //delay to prevent multiple occurences in one trigger
      mode = 0; //reset to first mode
   }
}
