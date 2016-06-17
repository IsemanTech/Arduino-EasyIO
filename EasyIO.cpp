/*one line to give the program's name and an idea of what it does.
Copyright (C) 2016  Iseman Johnson

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.*/


#include "EasyIO.h"
#include "Arduino.h"

void EasyIO::initLed(int lPin)
{
    pinMode(lPin, OUTPUT);
}
void EasyIO::initButton(int bPin)
{
    pinMode(bPin, INPUT);
}
void EasyIO::pushTurnOn(int lPin, int bPin)
{
    ledPin = lPin;
    buttonPin = bPin;

    int buttonState = digitalRead(buttonPin);
    if (buttonState == HIGH)
	{
	    delay(150);
	    digitalWrite(ledPin, HIGH);
	}
    else
	digitalWrite(ledPin, LOW);
}
void EasyIO::pushTurnOff(int lPin, int bPin)
{
    ledPin = lPin;
    buttonPin = bPin;

    int buttonState = digitalRead(buttonPin);
    if (buttonState == HIGH)
	{
	    delay(150);
	    digitalWrite(ledPin, LOW);
	}
    else
	digitalWrite(ledPin, HIGH);
}
void EasyIO::turnAllOn(int least, int greatest)
{
    for (int led = least; led <= greatest; led++)
	{
	    digitalWrite(led, HIGH);
	}
}
void EasyIO::turnAllOff(int least, int greatest)
{
    for (int led = least; led <= greatest; led++)
	{
	    digitalWrite(led, LOW);
	}
}
	    
	    
    
