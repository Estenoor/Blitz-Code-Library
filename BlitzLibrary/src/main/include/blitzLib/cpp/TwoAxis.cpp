#include "JoySticks.hpp"

void Blitz::Joysticks::TwoAxisJoystick::update()
{
    //Update Buttons
    Trigger = GetRawButton(TRIGGER_ID);
    Button2 = GetRawButton(BUTTON2_ID);
    Button3 = GetRawButton(BUTTON3_ID);
    Button4 = GetRawButton(BUTTON4_ID);
    Button5 = GetRawButton(BUTTON5_ID);
    Button6 = GetRawButton(BUTTON6_ID);
    Button7 = GetRawButton(BUTTON7_ID);
    Button8 = GetRawButton(BUTTON8_ID);

    //Update Axis
    XAxis = GetRawAxis(X_AXIS_ID);
    YAxis = GetRawAxis(Y_AXIS_ID);
    Dial = GetRawAxis(DIAL_ID);
}

bool Blitz::Joysticks::TwoAxisJoystick::GetTrigger()
{
    return Trigger;
}

bool Blitz::Joysticks::TwoAxisJoystick::GetButton2()
{
    return Button2;
}

bool Blitz::Joysticks::TwoAxisJoystick::GetButton3()
{
    return Button3;
}

bool Blitz::Joysticks::TwoAxisJoystick::GetButton4()
{
    return Button4;
}

bool Blitz::Joysticks::TwoAxisJoystick::GetButton5()
{
    return Button5;
}

bool Blitz::Joysticks::TwoAxisJoystick::GetButton6()
{
    return Button6;
}

bool Blitz::Joysticks::TwoAxisJoystick::GetButton7()
{
    return Button7;
}

bool Blitz::Joysticks::TwoAxisJoystick::GetButton8()
{
    return Button8;
}

double Blitz::Joysticks::TwoAxisJoystick::GetXAxis()
{
    if(XAxisRampRate <= 0)
    {
        return XAxis;
    }
    else
    {
        XAxisRamp = RampAxis(XAxis, XAxisRamp, XAxisCenter, XAxisDeadband, XAxisRampRate);
        return XAxisRamp;
    }
}

double Blitz::Joysticks::TwoAxisJoystick::GetYAxis()
{
    if(YAxisRampRate <= 0)
    {
        return YAxis;
    }
    else
    {
        YAxisRamp = RampAxis(YAxis, YAxisRamp, YAxisCenter, YAxisDeadband, YAxisRampRate);
        return YAxisRamp;
    }
}

double Blitz::Joysticks::TwoAxisJoystick::GetDial()
{
    if(DialRampRate <= 0)
    {
        return Dial;
    }
    else
    {
        DialRamp = RampAxis(Dial, DialRamp, DialCenter, DialDeadband, DialRampRate);
        return DialRamp;
    }
}

void Blitz::Joysticks::TwoAxisJoystick::ReCenterXAxis()
{
    XAxisCenter = GetRawAxis(X_AXIS_ID);
}

void Blitz::Joysticks::TwoAxisJoystick::ReCenterYAxis()
{
    YAxisCenter = GetRawAxis(Y_AXIS_ID);
}

void Blitz::Joysticks::TwoAxisJoystick::ReCenterDial()
{
    DialCenter = GetRawAxis(DIAL_ID);
}

void Blitz::Joysticks::TwoAxisJoystick::SetUniversalDeadband(double Deadband)
{
    XAxisDeadband = Deadband;
    YAxisDeadband = Deadband;
    DialDeadband = Deadband;
}

void Blitz::Joysticks::TwoAxisJoystick::SetXAxisDeadband(double Deadband)
{
    XAxisDeadband = Deadband;
}

void Blitz::Joysticks::TwoAxisJoystick::SetYAxisDeadband(double Deadband)
{
    YAxisDeadband = Deadband;
}

void Blitz::Joysticks::TwoAxisJoystick::SetDialDeadband(double Deadband)
{
    DialDeadband = Deadband;
}

void Blitz::Joysticks::TwoAxisJoystick::SetUniversalRampRate(double RampRate)
{
    XAxisRampRate = RampRate;
    YAxisRampRate = RampRate;
    DialRampRate = RampRate;
}

void Blitz::Joysticks::TwoAxisJoystick::SetXAxisRampRate(double RampRate)
{
    XAxisRampRate = RampRate;
}

void Blitz::Joysticks::TwoAxisJoystick::SetYAxisRampRate(double RampRate)
{
    YAxisRampRate = RampRate;
}

void Blitz::Joysticks::TwoAxisJoystick::SetDialRampRate(double RampRate)
{
    DialRampRate = RampRate;
}