#include <ESPert.h>
ESPert espert;

const int PIR = 0;
int bacaPIR;

void setup() {
  // put your setup code here, to run once:
  espert.init();  
  espert.oled.init();  // put your setup code here, to run once:
  espert.oled.setTextSize(1);

  pinMode(PIR, INPUT);  
  espert.oled.clear();    
  espert.oled.println("Sensor Gerak Testing");
  delay(2000);

}

void loop() {
  // put your main code here, to run repeatedly:
  bacaPIR = digitalRead(PIR);  
  if(bacaPIR==HIGH)  {    
    espert.oled.println("Ada Gerakan");  
    }  else  {    
      espert.oled.println("Aman");  
    }  
    delay(500);  
      espert.oled.clear();    

}
