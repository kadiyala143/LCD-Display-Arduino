/* Nikhil kadiyala */
/*Import the following Libraries*/
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
//I2C pins declaration
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() 
{
lcd.init(); // Initialise the lcd

lcd.backlight();//To Power ON the back light

//lcd.backlight();// To Power OFF the back light
}
void loop() 
{
//Write your code
lcd.setCursor(0, 0);  // setting the cursor to zero
lcd.print("Yourchoice!");

lcd.setCursor(0,1); //Defining positon to write from first row,first column .
lcd.print("Like, Share"); //You can write 16 Characters per line .
delay(6000);

lcd.clear(); // Clear the previous lcd display
lcd.setCursor(0, 0);
lcd.print("And Subscribe");

lcd.setCursor(0, 1);
lcd.print("Yourchoice");
delay(6000); 


}
