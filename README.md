**About:**

Home automation or domotics is building automation for a home, called a smart home or smart house. A home automation system will control lighting, climate, entertainment systems, and appliances. It may also include home security such as access control and alarm systems. This is possible via smartphones and the internet. When connected with the Internet, home devices are an important constituent of the Internet of Things. In this project, a simple home automation system is designed connecting different electrical appliances which can be switched on or off via 4-channel relay using Arduino UNO.


**Working Process:**

The implementation will be of a simple home automation system using Arduino UNO, Bluetooth module and a smartphone. The aim of this project is to control different home appliances using a smartphone. When the power is turned on, the LED connection to the Bluetooth module starts blinking. The “Bluetooth Controller” app in the smartphone is connected to the Bluetooth module.
If the pairing is successful, the LED becomes stable.

Now, in the app, set the different keys for different loads and their corresponding value that must be transmitted when that key is pressed.


To test the program, use the remote serial monitor on the Arduino IDE. To practically run it, download any Bluetooth Controller application on your device and connect it to the *HC-05* bluetooth module in your circuit. Once connected, in the app interface, type:

- A-D to turn the respective device connected to the 4-channel relay ON
- a-d to turn them OFF 
