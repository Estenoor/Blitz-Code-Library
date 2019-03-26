#include "JoySticks.hpp"

double Blitz::JoystickInterface::RampAxis(double inputValue, double rampedValue, double center, double deadband, double rampRate)
{
    double expectedValue = inputValue + center;

    if(abs(abs(expectedValue) - abs(rampedValue)) <= rampRate)
    {
        rampedValue = expectedValue;
    }
    else if(rampedValue < expectedValue)
    {
        expectedValue += rampRate;
    }
    else if(rampedValue > expectedValue)
    {
        expectedValue -= rampRate;
    }

    if(expectedValue < deadband)
    {
        rampedValue = 0;
    }

    return rampedValue;
}