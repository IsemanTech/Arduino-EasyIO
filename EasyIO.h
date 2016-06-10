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
    void pushTurnOn(int lPin, int bPin);
    //When bPin is pushed lPin turned off
    void pushTurnOff(int lPin, int bPin);
    
private:
    int ledPin;
    int buttonPin;
    
};
#endif
