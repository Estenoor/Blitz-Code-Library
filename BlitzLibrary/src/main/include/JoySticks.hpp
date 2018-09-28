#pragma once

#include <WPILib.h>

namespace Blitz
{
    namespace Joysticks
    {
        class Xbox
        {
            public:
                int port;

                Joystick Xbox;

                //Buttons
                double AButton = 0;
                double BButton = 0;
                double XButton = 0;
                double YButton = 0;
                double LeftBumper = 0;
                double RightBumper = 0;
                double LeftStickButton = 0;
                double RightStickButton = 0;

                //axis
                double LeftX = 0;
                double LeftY = 0;
                double RightX = 0;
                double RightY = 0;
                double LeftTrigger = 0;
                double RightTrigger = 0;

                //Button ids
                final int A_BUTTON_ID = 0;
                final int B_BUTTON_ID = 0;
                final int X_BUTTON_ID = 0;
                final int Y_BUTTON_ID = 0;
                final int LEFT_BUMPER_ID = 0;
                final int RIGHT_BUMPER_ID = 0;
                final int LEFT_STICK_BUTTON_ID = 0;
                final int RIGHT_STICK_BUTTON_ID = 0;

                //axis ids
                final int LEFT_X_AXIS_ID = 0;
                final int LEFT_Y_AXIS_ID = 0;
                final int RIGHT_X_AXIS_ID = 0;
                final int RIGHT_Y_AXIS_ID = 0;
                final int LEFT_TRIGGER_ID = 0;
                final int RIGHT_TRIGGER_ID = 0;

                Xbox() {}

                Xbox(int port):
                    Xbox(port)
                {
                    this->port = port;

                }

                void update();

        }

        class ThreeAxisJoystick
        {
            public:
                int port = 0;

                Joystick ThreeAxis;

                //Buttons
                double Trigger = 0;
                double Button2 = 0;
                double Button3 = 0;
                double Button4 = 0;
                double Button5 = 0;
                double Button6 = 0;
                double Button7 = 0;
                double Button8 = 0;
                double Button9 = 0;
                double Button10 = 0;
                double Button11 = 0;
                double Button12= 0;
                double DPad[8] = {0, 0, 0, 0, 0, 0, 0, 0};

                //axis
                double XAxis = 0;
                double YAxis = 0;
                double zAxis = 0;
                double Dial = 0;

                //Button ids
                final int TRIGGER_ID = 1;
                final int BUTTON2_ID = 2;
                final int BUTTON3_ID = 3;
                final int BUTTON4_ID = 4;
                final int BUTTON5_ID = 5;
                final int BUTTON6_ID = 6;
                final int BUTTON7_ID = 7;
                final int BUTTON8_ID = 8;
                final int BUTTON9_ID = 9;
                final int BUTTON10_ID = 10;
                final int BUTTON11_ID = 11;
                final int BUTTON12_ID = 12;
                final int D_PAD_ID[8] = {0, 0, 0, 0, 0, 0, 0, 0};

                //axis ids
                final int X_AXIS_ID = 0;
                final int Y_AXIS_ID = 0;
                final int Z_AXIS_ID = 0;
                final int DIAL_ID = 0;


                ThreeAxisJoystick() {}

                ThreeAxisJoystick(int port) :
                    ThreeAxis(port)
                {
                    this->port = port; 
                }
        }

        class TwoAxisJoystick
        {
            
        }
    }
}