#include "JoySticks.hpp"

void Blitz::Joysticks::ThreeAxisJoystick::update()
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
    Button9 = GetRawButton(BUTTON9_ID);
    Button10 = GetRawButton(BUTTON10_ID);
    Button11 = GetRawButton(BUTTON11_ID);
    Button12 = GetRawButton(BUTTON12_ID);

    //Update Axis
    XAxis = GetRawAxis(X_AXIS_ID);
    YAxis = GetRawAxis(Y_AXIS_ID);
    ZAxis = GetRawAxis(Z_AXIS_ID);
    Dial = GetRawAxis(DIAL_ID);
}

bool Blitz::Joysticks::ThreeAxisJoystick::GetTrigger()
{
    return Trigger;
}

bool Blitz::Joysticks::ThreeAxisJoystick::GetButton2()
{
    return Button2;
}

bool Blitz::Joysticks::ThreeAxisJoystick::GetButton3()
{
    return Button3;
}

bool Blitz::Joysticks::ThreeAxisJoystick::GetButton4()
{
    return Button4;
}

bool Blitz::Joysticks::ThreeAxisJoystick::GetButton5()
{
    return Button5;
}

bool Blitz::Joysticks::ThreeAxisJoystick::GetButton6()
{
    return Button6;
}

bool Blitz::Joysticks::ThreeAxisJoystick::GetButton7()
{
    return Button7;
}

bool Blitz::Joysticks::ThreeAxisJoystick::GetButton8()
{
    return Button8;
}

bool Blitz::Joysticks::ThreeAxisJoystick::GetButton9()
{
    return Button9;
}

bool Blitz::Joysticks::ThreeAxisJoystick::GetButton10()
{
    return Button10;
}

bool Blitz::Joysticks::ThreeAxisJoystick::GetButton11()
{
    return Button11;
}

bool Blitz::Joysticks::ThreeAxisJoystick::GetButton12()
{
    return Button12;
}

double Blitz::Joysticks::ThreeAxisJoystick::GetXAxis()
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

double Blitz::Joysticks::ThreeAxisJoystick::GetYAxis()
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

double Blitz::Joysticks::ThreeAxisJoystick::GetZAxis()
{
    if(ZAxisRampRate <= 0)
    {
        return ZAxis;
    }
    else
    {
        ZAxisRamp = RampAxis(ZAxis, ZAxisRamp, ZAxisCenter, ZAxisDeadband, ZAxisRampRate);
        return ZAxisRamp;
    }
}

double Blitz::Joysticks::ThreeAxisJoystick::GetDial()
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

void Blitz::Joysticks::ThreeAxisJoystick::ReCenterXAxis()
{
    XAxisCenter = GetRawAxis(X_AXIS_ID);
}

void Blitz::Joysticks::ThreeAxisJoystick::ReCenterYAxis()
{
    YAxisCenter = GetRawAxis(Y_AXIS_ID);
}

void Blitz::Joysticks::ThreeAxisJoystick::ReCenterZAxis()
{
    ZAxisCenter = GetRawAxis(Z_AXIS_ID);
}

void Blitz::Joysticks::ThreeAxisJoystick::ReCenterDial()
{
    DialCenter = GetRawAxis(DIAL_ID);
}

void Blitz::Joysticks::ThreeAxisJoystick::SetUniversalDeadband(double Deadband)
{
    XAxisDeadband = Deadband;
    YAxisDeadband = Deadband;
    ZAxisDeadband = Deadband;
    DialDeadband = Deadband;
}

void Blitz::Joysticks::ThreeAxisJoystick::SetXAxisDeadband(double Deadband)
{
    XAxisDeadband = Deadband;
}

void Blitz::Joysticks::ThreeAxisJoystick::SetYAxisDeadband(double Deadband)
{
    YAxisDeadband = Deadband;
}

void Blitz::Joysticks::ThreeAxisJoystick::SetZAxisDeadband(double Deadband)
{
    ZAxisDeadband = Deadband;
}

void Blitz::Joysticks::ThreeAxisJoystick::SetDialDeadband(double Deadband)
{
    DialDeadband = Deadband;
}

void Blitz::Joysticks::ThreeAxisJoystick::SetUniversalRampRate(double RampRate)
{
    XAxisRampRate = RampRate;
    YAxisRampRate = RampRate;
    ZAxisRampRate = RampRate;
    DialRampRate = RampRate;
}

void Blitz::Joysticks::ThreeAxisJoystick::SetXAxisRampRate(double RampRate)
{
    XAxisRampRate = RampRate;
}

void Blitz::Joysticks::ThreeAxisJoystick::SetYAxisRampRate(double RampRate)
{
    YAxisRampRate = RampRate;
}

void Blitz::Joysticks::ThreeAxisJoystick::SetZAxisRampRate(double RampRate)
{
    ZAxisRampRate = RampRate;
}

void Blitz::Joysticks::ThreeAxisJoystick::SetDialRampRate(double RampRate)
{
    DialRampRate = RampRate;
}