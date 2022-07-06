#include <Ultrasonic.h>
#include <LiquidCrystal.h>
#include "DFRobotDFPlayerMini.h"
#include "SoftwareSerial.h"
SoftwareSerial mySoftwareSerial(10, 11); // RX, TX

DFRobotDFPlayerMini myDFPlayer;
void printDetail(uint8_t type, int value);

int fin1 = 0 ;
int fin2 = 0 ;
int fin3 = 0 ;
int fin4 = 0 ;
int fin5 = 0 ;
Ultrasonic ultrasonic(3, 2);

int distance;
const int rs = 8, en = 9, d4 = 7, d5 = 6, d6 = 5, d7 = 4;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup()
{
  mySoftwareSerial.begin(9600);  
  lcd.begin(16, 2);
  lcd.print("Rwpg3y by yousef");
pinMode ( A0 , INPUT ) ; 
pinMode ( A1 , INPUT ) ; 
pinMode ( A2 , INPUT ) ; 
pinMode ( A3 , INPUT ) ; 
pinMode ( A4 , INPUT ) ;  

  
  if (!myDFPlayer.begin(mySoftwareSerial)) {  //Use softwareSerial to communicate with mp3.
    while(true){
      delay(0); // Code to compatible with ESP8266 watch dog.
    }
  }
  
  myDFPlayer.volume(30);


}
void loop()
{
  distance = ultrasonic.read();
  lcd.setCursor(0 , 1);
lcd.print ( "****________cm" ) ;   
lcd.print ( distance ) ;
  fin1 = analogRead ( A2 ) ;
  fin4 = analogRead ( A4 ) ;
  fin5 = analogRead ( A3 ) ;
  fin3 = analogRead ( A1 ) ;
  fin2 = analogRead ( A0 ) ;

if ( distance >= 0 && distance < 15 ) {

if ( fin1 >= 1004 ) {
myDFPlayer.play ( 1 );
  distance = ultrasonic.read();
  lcd.setCursor(0 , 1);
lcd.print ( "Fa-5________cm" ) ;   
lcd.print ( distance ) ;
delay ( 500 ) ;
  } 
  
else if ( fin2 >= 1002 ) {
myDFPlayer.play ( 2 );
 
  distance = ultrasonic.read();
  lcd.setCursor(0 , 1);
lcd.print ( "Mi-5________cm" ) ;   
lcd.print ( distance ) ;
 
delay ( 500 ) ;}
   
  
else if ( fin3 >= 1000 ) {
myDFPlayer.play ( 3 );
 
  distance = ultrasonic.read();
  lcd.setCursor(0 , 1);
lcd.print ( "Re#5________cm" ) ;   
lcd.print ( distance ) ;

delay ( 500 ) ; } 
  
else if ( fin4 >= 1000 ) {
  myDFPlayer.play ( 4 );
 
  distance = ultrasonic.read();
  lcd.setCursor(0 , 1);
lcd.print ( "Re-5________cm" ) ;   
lcd.print ( distance ) ;

delay ( 500 ) ; } 
  
else if ( fin5 >= 1000 ) {
  myDFPlayer.play ( 5 );
  distance = ultrasonic.read();
  lcd.setCursor(0 , 1);
lcd.print ( "Do#5________cm" ) ;   
lcd.print ( distance ) ;

delay ( 500 ) ;
} 
}
  
else if ( distance >= 15 && distance < 30 ) {
if ( fin1 >= 1004 ) {
myDFPlayer.play ( 6 );
  distance = ultrasonic.read();
  lcd.setCursor(0 , 1);
lcd.print ( "Do-5________cm" ) ;   
lcd.print ( distance ) ;

delay ( 500 ) ;  } 
  
else if ( fin2 >= 1002 ) {
myDFPlayer.play ( 7 );

  distance = ultrasonic.read();
  lcd.setCursor(0 , 1);
lcd.print ( "Si-4________cm" ) ;   
lcd.print ( distance ) ;

delay ( 500 ) ;  }
   
  
else if ( fin3 >= 1000 ) {
myDFPlayer.play ( 8 );

  distance = ultrasonic.read();
  lcd.setCursor(0 , 1);
lcd.print ( "La#4________cm" ) ;   
lcd.print ( distance ) ;

delay ( 500 ) ;
} 
  
else if ( fin4 >= 1000 ) {
  myDFPlayer.play ( 9 );

  distance = ultrasonic.read();
  lcd.setCursor(0 , 1);
lcd.print ( "La-4________cm" ) ;   
lcd.print ( distance ) ;

delay ( 500 ) ;
} 
  
else if ( fin5 >= 1000 ) {
  myDFPlayer.play ( 10 );
  distance = ultrasonic.read();
  lcd.setCursor(0 , 1);
lcd.print ( "So#4________cm" ) ;   
lcd.print ( distance ) ;

delay ( 500 ) ;
} 
  
  }
   
else if ( distance >= 30 && distance < 45 ) {
  if ( fin1 >= 1004 ) {
myDFPlayer.play ( 11 );
  distance = ultrasonic.read();
  lcd.setCursor(0 , 1);
lcd.print ( "So-4________cm" ) ;   
lcd.print ( distance ) ;


delay ( 500 ) ;
} 
  
else if ( fin2 >= 1002 ) {
myDFPlayer.play ( 12 );

  distance = ultrasonic.read();
  lcd.setCursor(0 , 1);
lcd.print ( "Fa#4________cm" ) ;   
lcd.print ( distance ) ;

delay ( 500 ) ;
}
   
  
else if ( fin3 >= 1000 ) {
myDFPlayer.play ( 13 );

  distance = ultrasonic.read();
  lcd.setCursor(0 , 1);
lcd.print ( "Fa-4________cm" ) ;   
lcd.print ( distance ) ;

delay ( 500 ) ;
} 
  
else if ( fin4 >= 1000 ) {
  myDFPlayer.play ( 14 );

  distance = ultrasonic.read();
  lcd.setCursor(0 , 1);
lcd.print ( "Mi-4________cm" ) ;   
lcd.print ( distance ) ;

delay ( 500 ) ;
} 
  
else if ( fin5 >= 1000 ) {
  myDFPlayer.play ( 15 );

 distance = ultrasonic.read();
  lcd.setCursor(0 , 1);
lcd.print ( "Re#4________cm" ) ;   
lcd.print ( distance ) ;

delay ( 500 ) ;
} 

  } 
else if ( distance >= 45 && distance < 60 ) {
  if ( fin1 >= 1004 ) {
myDFPlayer.play ( 16 );
  distance = ultrasonic.read();
  lcd.setCursor(0 , 1);
lcd.print ( "Re-4________cm" ) ;   
lcd.print ( distance ) ;

delay ( 500 ) ;
} 
  
else if ( fin2 >= 1002 ) {
myDFPlayer.play ( 17 );

  distance = ultrasonic.read();
  lcd.setCursor(0 , 1);
lcd.print ( "Do#4________cm" ) ;   
lcd.print ( distance ) ;


delay ( 500 ) ;
}
   
  
else if ( fin3 >= 1000 ) {
myDFPlayer.play ( 18 );

  distance = ultrasonic.read();
  lcd.setCursor(0 , 1);
lcd.print ( "Do-4________cm" ) ;   
lcd.print ( distance ) ;
delay ( 500 ) ;
} 
  
else if ( fin4 >= 1000 ) {
  myDFPlayer.play ( 19 );

  distance = ultrasonic.read();
  lcd.setCursor(0 , 1);
lcd.print ( "Si-3________cm" ) ;   
lcd.print ( distance ) ;

delay ( 500 ) ;
} 
  
else if ( fin5 >= 1000 ) {
  myDFPlayer.play ( 20 );

  distance = ultrasonic.read();
  lcd.setCursor(0 , 1);
lcd.print ( "La#3________cm" ) ;   
lcd.print ( distance ) ;

delay ( 500 ) ;
} 

  }
   
else if ( distance >= 60 && distance < 75 ) {
 if ( fin1 >= 1004 ) {
myDFPlayer.play ( 21 );

  distance = ultrasonic.read();
  lcd.setCursor(0 , 1);
lcd.print ( "La-3________cm" ) ;   
lcd.print ( distance ) ;

delay ( 500 ) ;
} 
  
else if ( fin2 >= 1002 ) {
myDFPlayer.play ( 22 );

  distance = ultrasonic.read();
  lcd.setCursor(0 , 1);
lcd.print ( "So#3________cm" ) ;   
lcd.print ( distance ) ;

delay ( 500 ) ;
}
   
  
else if ( fin3 >= 1000 ) {
myDFPlayer.play ( 23 );

  distance = ultrasonic.read();
  lcd.setCursor(0 , 1);
lcd.print ( "So-3________cm" ) ;   
lcd.print ( distance ) ;
delay ( 500 ) ;
  } 
  
else if ( fin4 >= 1000 ) {
  myDFPlayer.play ( 24 );
  distance = ultrasonic.read();
  lcd.setCursor(0 , 1);
lcd.print ( "Fa#3________cm" ) ;   
lcd.print ( distance ) ;

delay ( 500 ) ;
} 
  
else if ( fin5 >= 1000 ) {
  myDFPlayer.play ( 25 );

  distance = ultrasonic.read();
  lcd.setCursor(0 , 1);
lcd.print ( "Fa-3________cm" ) ;   
lcd.print ( distance ) ;

delay ( 500 ) ;
} 
 
  }
  
}
