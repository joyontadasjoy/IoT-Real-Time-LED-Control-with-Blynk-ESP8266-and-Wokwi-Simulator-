<!DOCTYPE html>
<html>
<head>
	<title>ESP8266 Real Time Simulation with Blynk App</title>
</head>
<body>
	<h1>ESP8266 Real Time Simulation with Blynk App</h1>
	<p>This project is a demonstration of how to use the Blynk app and the Wokwi online simulator to simulate and control an ESP8266-based device in real-time. The project allows you to control three LEDs connected to the ESP8266 through the Blynk app, and see the changes both in the online simulator and the physical device.</p>
php
Copy code
<h2>Hardware Requirements</h2>
<ul>
	<li>ESP8266</li>
	<li>3 LEDs</li>
	<li>3 x 220 ohm resistors</li>
	<li>Breadboard</li>
	<li>Jumper wires</li>
</ul>

<h2>Software Requirements</h2>
<ul>
	<li>Arduino IDE</li>
	<li>Blynk App (Android or iOS)</li>
	<li>Wokwi Simulator</li>
</ul>

<h2>How to Use</h2>
<ol>
	<li>Connect the LEDs and resistors to the ESP8266 as shown in the circuit diagram.</li>
	<li>Download and install the Blynk app on your mobile device.</li>
	<li>Open the app and create a new project.</li>
	<li>Add three buttons to the project and label them "LED 1", "LED 2", and "LED 3".</li>
	<li>Set the button settings to "Switch" mode and set the output pins to D6, D7, and D8 respectively.</li>
	<li>Download and install the Wokwi simulator plugin for Arduino IDE.</li>
	<li>Open the Arduino IDE and paste the provided code.</li>
	<li>Replace the BLYNK_AUTH_TOKEN with your own token from the Blynk app project settings.</li>
	<li>Compile and upload the code to the ESP8266.</li>
	<li>Open the Wokwi simulator and load the uploaded code to the simulator.</li>
	<li>Open the Blynk app and click the "Play" button to start the project.</li>
	<li>Use the buttons on the app to control the LEDs and see the changes both on the online simulator and the physical device.</li>
</ol>

<h2>Circuit Diagram</h2>
<p align="center">
	<img src="https://drive.google.com/uc?id=1cih0V0p-l1XZLlJjE1Ug7VjbSGwOyB7V" alt="Circuit Diagram">
</p>

<h2>Code</h2>
<pre>
	<code>
		<!-- Insert the code here -->
	</code>
</pre>

<h2>Contributing</h2>
<p>This project is a personal project and contributions are not expected.</p>

<h2>License</h2>
<p>This project is licensed under the MIT License - see the <a href="LICENSE">LICENSE</a> file for details.</p>
</body>
</html>
