#include "JoySticks.hpp"

void Blitz::Joysticks::XboxController::update()
{
    //Update Buttons
    AButton = GetRawButton(A_BUTTON_ID);
    BButton = GetRawButton(B_BUTTON_ID);
    XButton = GetRawButton(X_BUTTON_ID);
    YButton = GetRawButton(Y_BUTTON_ID);
    LeftBumper = GetRawButton(LEFT_BUMPER_ID);
    RightBumper = GetRawButton(RIGHT_BUMPER_ID);
    LeftStickButton = GetRawButton(LEFT_STICK_BUTTON_ID);
    RightStickButton = GetRawButton(RIGHT_STICK_BUTTON_ID);

    //Update Axis
    LeftX = GetRawAxis(LEFT_X_AXIS_ID);
    LeftY = GetRawAxis(LEFT_Y_AXIS_ID);
    RightX = GetRawAxis(RIGHT_X_AXIS_ID);
    RightY = GetRawAxis(RIGHT_Y_AXIS_ID);
    LeftTrigger = GetRawAxis(LEFT_TRIGGER_ID);
    RightTrigger = GetRawAxis(RIGHT_TRIGGER_ID);
    
}

bool Blitz::Joysticks::XboxController::GetAButton()
{
    return AButton;
}

bool Blitz::Joysticks::XboxController::GetBButton()
{
    return BButton;
}

bool Blitz::Joysticks::XboxController::GetXButton()
{
    return XButton;
}

bool Blitz::Joysticks::XboxController::GetYButton()
{
    return YButton;
}

bool Blitz::Joysticks::XboxController::GetLeftBumper()
{
    return LeftBumper;
}

bool Blitz::Joysticks::XboxController::GetRightBumper()
{
    return RightBumper;
}

bool Blitz::Joysticks::XboxController::GetSelectButton()
{
    return SelectButton;
}

bool Blitz::Joysticks::XboxController::GetStartButton()
{
    return StartButton;
}

bool Blitz::Joysticks::XboxController::GetLeftStickButton()
{
    return LeftStickButton;
}

bool Blitz::Joysticks::XboxController::GetRightStickButton()
{
    return RightStickButton;
}

double Blitz::Joysticks::XboxController::GetLeftX()
{
    return LeftX;
}

double Blitz::Joysticks::XboxController::GetLeftY()
{
    return LeftY;
}

double Blitz::Joysticks::XboxController::GetRightX()
{
    return RightX;
}

double Blitz::Joysticks::XboxController::GetRightY()
{
    return RightY;
}

double Blitz::Joysticks::XboxController::GetLeftTrigger()
{
    return LeftTrigger;
}

double Blitz::Joysticks::XboxController::GetRightTrigger()
{
    return RightTrigger;
}