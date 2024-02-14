# Arduino Metronome
For my first ever Arduino project, I wanted to create a simple metronome to help me play guitar better. It features a 4-LED sequence and piezo buzzer to create a steady pulse, and an LCD to show the beats per minute (BPM) being emulated. Additionally, the project has a potentiometer to adjust the LCD brightness and a switch to toggle the sound. While the default BPM is 100, it can be adjusted by changing the ```bpm``` variable in the code.

![picture](https://github.com/borisrokhmanov/arduino-metronome/blob/main/images/IMG_4761.jpeg)

![closeup](https://github.com/borisrokhmanov/arduino-metronome/blob/main/images/IMG_4762.jpeg)

# What I learned

As a programmer, I am experienced with computer science principles, but wanted to branch out and learn about electrical engineering as well. As this was my first project utilizing the Arduino, I had to learn concepts like breadboard wiring and component polarity (after burning out a couple LEDs!) In particular, the LCD was tough to get working as there were many unfamiliar connections. However, after completing the project I have a greater understanding of components like potentiometers and liquid crystal displays, as well as coding in the Arduino IDE.

# Future Goals

- **Adjust metronome BPM locally** (with an onboard potentiometer, unfortunately didn't have enough parts on hand to do this)
- **Adjust the sound with a variable resistor** (same as above)
- **Buttons for common BPMs** (e.g. 80, 100, 120)
- **Support for different time signatures**
