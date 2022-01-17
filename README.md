# Who_s_Home
## Arduino Project to Know who is at home

### What it does? What problem does it solve?
Let me tell you my situation: I'm a college student living with three more roommates in our apartment in Portugal. Sometimes, each one of us needs some privacy for whatever reason and I decided to create a little device that allows each and every one of us to be able to know who´s ate home.

### How does it work?
So, as I said before, we´re four people in the same house. So to indicate if someone is in or not I thought that I could use a LED Matrix and divide it in four corners, one for each one of us. And if that specific corner is lightened up it means that the person associated with that corner is home. So firstly I assigned a corner to each person and than a key. That key is for logging in and out just by pressing it (And every time it is pressed it shows a little message that says "ola" (which is "Hello" in Portuguese) and then the name of the person with that key and if pressed again it displays "adeus" (which is "by" in portuguese) and the name of the same person). Every one has a different Key. In addition, we have one more key that allow us to know who'se really at home, bue this time that key is the same for everyone (In my case it is the '\*' key). If that key is pressed the corners that light up are the ones who are actually at home.  

https://user-images.githubusercontent.com/80637059/149798110-7658fc4a-170e-41aa-80ca-9a1716420c4e.mov

### Components Needed:
- Arduino Uno Board
- MAX7219 Module (LED Matrix 8x8)
- Membrane Switch Module (KeyPad)
- 13 Jumper Cables
- USB-B to USB-A cable (conect the Arduino board to your computer)
- Power Supply
