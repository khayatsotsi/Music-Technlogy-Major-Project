// Created by Khaya Tsotsi as part of the BSc Music Technology Major Project Module at the University of the West of Scotland 

#include <ezButton.h>

#include "MIDIUSB.h"

void noteOn(byte channel, byte pitch, byte velocity) {
  midiEventPacket_t noteOn = {0x09, 0x90 | channel, pitch, velocity};
  MidiUSB.sendMIDI(noteOn);
}

void noteOff(byte channel, byte pitch, byte velocity) {
  midiEventPacket_t noteOff = {0x08, 0x80 | channel, pitch, velocity};
  MidiUSB.sendMIDI(noteOff);
}

void controlChange(byte channel, byte control, byte value) {
  midiEventPacket_t event = {0x0B, 0xB0 | channel, control, value};
  MidiUSB.sendMIDI(event);
}

//byte midiNote = 4; 
const byte midiChan = 0;
const byte midiVel  = 127;

ezButton button1 (2);  // create ezButton object that attach to pin 2;
ezButton button2 (3);  // create ezButton object that attach to pin 3;
ezButton button3 (4);  // create ezButton object that attach to pin 4;
ezButton button4 (5);  // create ezButton object that attach to pin 5;
ezButton button5 (6);  // create ezButton object that attach to pin 6;
ezButton button6 (7);  // create ezButton object that attach to pin 7;
ezButton button7 (8);  // create ezButton object that attach to pin 8;
ezButton button8 (9);  // create ezButton object that attach to pin 9;
ezButton button9 (10); // create ezButton object that attach to pin 10;

void setup() {
  Serial.begin(9600);
  button1.setDebounceTime(50); // set debounce time to 50 milliseconds
  button2.setDebounceTime(50); // set debounce time to 50 milliseconds
  button3.setDebounceTime(50); // set debounce time to 50 milliseconds
  button4.setDebounceTime(50); // set debounce time to 50 milliseconds
  button5.setDebounceTime(50); // set debounce time to 50 milliseconds
  button6.setDebounceTime(50); // set debounce time to 50 milliseconds
  button7.setDebounceTime(50); // set debounce time to 50 milliseconds
  button8.setDebounceTime(50); // set debounce time to 50 milliseconds
  button9.setDebounceTime(50); // set debounce time to 50 milliseconds
}

void loop() {
  button1.loop(); // MUST call the loop() function first
  button2.loop(); // MUST call the loop() function first
  button3.loop(); // MUST call the loop() function first
  button4.loop(); // MUST call the loop() function first
  button5.loop(); // MUST call the loop() function first
  button6.loop(); // MUST call the loop() function first
  button7.loop(); // MUST call the loop() function first
  button8.loop(); // MUST call the loop() function first
  button9.loop(); // MUST call the loop() function first

////////////////////////BUTTON 1

  if(button1.isPressed()){ 
    Serial.println("The button 1 is on"); 
    
    // MIDI Note On
    noteOn(midiChan, 60, midiVel);  // channel, note, velocity
    MidiUSB.flush();

  }
  
  if(button1.isReleased()){
    Serial.println("The button 1 is off");

    //MIDI Note Off
    noteOff(midiChan, 60, 0);  // channel, note, velocity
    MidiUSB.flush();
    
  }

///////////////////////BUTTON 2 
  
  if(button2.isPressed()){
    Serial.println("The button 2 is on");

    // MIDI Note On
    noteOn(midiChan, 61, midiVel);  // channel, note, velocity
    MidiUSB.flush();
    
  }
 
  if(button2.isReleased()){
    Serial.println("The button 2 is off");

     //MIDI Note Off
    noteOff(midiChan, 61, 0);  // channel, note, velocity
    MidiUSB.flush();
    
  }  

////////////////////////BUTTON 3

  if(button3.isPressed()){
    Serial.println("The button 3 is on");
    
    // MIDI Note On
    noteOn(midiChan, 62, midiVel);  // channel, note, velocity
    MidiUSB.flush();
    
  }
  
  if(button3.isReleased()){
    Serial.println("The button 3 is off");

      //MIDI Note Off
    noteOff(midiChan, 62, 0);  // channel, note, velocity
    MidiUSB.flush();
    
  }
  
////////////////////////BUTTON 4

     if(button4.isPressed()){
    Serial.println("The button 4 is on");

// MIDI Note On
    noteOn(midiChan, 63, midiVel);  // channel, note, velocity
    MidiUSB.flush();
    
   }
   
   if(button4.isReleased()){
    Serial.println("The button 4 is off");

     //MIDI Note Off
    noteOff(midiChan, 63, 0);  // channel, note, velocity
    MidiUSB.flush();
    
  }

/////////////////////////BUTTON 5

     if(button5.isPressed()){
    Serial.println("The button 5 is on");
    
// MIDI Note On
    noteOn(midiChan, 64, midiVel);  // channel, note, velocity
    MidiUSB.flush();

  }
   
  if(button5.isReleased()){
    Serial.println("The button 5 is off");

 //MIDI Note Off
    noteOff(midiChan, 64, 0);  // channel, note, velocity
    MidiUSB.flush();
  }

/////////////////////////BUTTON 6 

     if(button6.isPressed()){
    Serial.println("The button 6 is on");
    
// MIDI Note On
    noteOn(midiChan, 65, midiVel);  // channel, note, velocity
    MidiUSB.flush();

    }
     
  if(button6.isReleased()){
    Serial.println("The button 6 is off");
    
//MIDI Note Off
    noteOff(midiChan, 65, 0);  // channel, note, velocity
    MidiUSB.flush();
   }
   
////////////////////////BUTTON 7

     if(button7.isPressed()){
    Serial.println("The button 7 is on");

// MIDI Note On
    noteOn(midiChan, 66, midiVel);  // channel, note, velocity
    MidiUSB.flush();
    
     }

  if(button7.isReleased()){
    Serial.println("The button 7 is off");

    //MIDI Note Off
    noteOff(midiChan, 66, 0);  // channel, note, velocity
    MidiUSB.flush();

}

///////////////////////BUTTON 8

     if(button8.isPressed()){
    Serial.println("The button 8 is on");

// MIDI Note On
    noteOn(midiChan, 67, midiVel);  // channel, note, velocity
    MidiUSB.flush();
     }
     
  if(button8.isReleased()){
    Serial.println("The button 8 is off");
    
 //MIDI Note Off
    noteOff(midiChan, 67, 0);  // channel, note, velocity
    MidiUSB.flush();

  }
  
///////////////////////BUTTON 9    

     if(button9.isPressed()){
    Serial.println("The button 9 is on");

// MIDI Note On
    noteOn(midiChan, 68, midiVel);  // channel, note, velocity
    MidiUSB.flush();
     }
     
  if(button9.isReleased()){
    Serial.println("The button 9 is off");

     //MIDI Note Off
    noteOff(midiChan, 68, 0);  // channel, note, velocity
    MidiUSB.flush();

    }
}

//////////////////////////////////
