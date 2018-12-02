# CS207-FinalProject

This project is a device which uses a laser tripwire type mechanism to send a signal to a computer to launch a certain application when the laser is interrupted. I will be using an Arduino Uno and give it Wi-fi capabilities using an ESP8266 based module. The point of this system is to launch any applications that are used daily, whenever the user walks into a room or walks to his/her computer. This is not a very practical system to actually use in real life as it only does one simple action on a computer, but it is just a fun little device to use. The path of the programs all vary, so appropriate changes mucst be made depending on the program to launch and the computer being used.

# Repository Contents

* /src - Folder containing the software for this device
* /hardware - Folder containing design files
* /examples - Folder containing example software that can launch certain programs
* /img - Folder containing images in this readme
* /LICENSE - The license file
* /README.md - This file

# Requirements and Materials

Dependencies:
* Gobetwino (archived version) https://web.archive.org/web/20171113125718/http://www.mikmo.dk:80/gobetwinodownload.html

Materials:
* 1 x laser pointer
* 1 x photoresistor
* 1 x 10k resistor
* 10 x wire
* 1 x Arduino Uno
* 1 x breadboard
* 1 x ESP8266 or ESP8266 based Wi-fi module (such as the NodeMCU I used)

# Build Instructions

# Usage

1. Build the circuit based on the diagram provided.
2. Download the Gobetwino software and run the program.
3. Go to "commands" and then click "New command".
4. Select "SPRID" in the dropdown menu.
5. Type any command name you would like to use in your code into the command name box.
6. Click the "..." and select the file or program you would like to open with this program.
7. Save and leave the program running.
8. After connecting the Arduino Uno, go into "Settings" and to the "Serial port" menu.
9. Set the Serial port to the appropriate port and the Baud rate to 9600.
10. Donwload the " " found in the src.
11. Modify the ssid and password section in " " to match your network information.
12. Modify the command name in " " to match the command you created in Gobetwino.
13. Upload " " onto the Arduino Uno.
14. Attach a laser pointer to one side of an entrance and the Arduino on the other side.
15. Make sure the laser is pointing at the photoresistor.
16. Pass by the laser and the computer will open the program you designated. (PC must be on, and Gobetwino must be running)

# Team

This is a solo project done by Min Kyu Park.

# Credits

* Ian Cumming (hackster.io) - Borrowed code for getting data from photoresistor and printing result.
