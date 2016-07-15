#ifndef EASYIO_H
#define EASYIO_H


class EasyIO
{
public:
    //set led pin to output
    void initLed(int lPin);
    //set button pin to input
    void initButton(int bPin);
    //When the bPin is pushed the lPin lights up
    bool pushTurnOn(int lPin, int bPin);
    //When bPin is pushed lPin turned off
    void pushTurnOff(int lPin, int bPin);
    //Turn all of the leds on from least pin to greatest
    void turnAllOn(int least, int greatest);
    //Turn all of the leds off from least pin to greatest 
    void turnAllOff(int least, int greatest);
    
    
private:
    int ledPin;
    int buttonPin;
    bool isPushed;
   
    
};
#endif
