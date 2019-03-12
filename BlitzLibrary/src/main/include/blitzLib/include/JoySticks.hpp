#pragma once

#include <frc/WPILib.h>

using namespace frc;

namespace Blitz
{
    class JoystickInterface : public frc::Joystick
    {
        public:
            JoystickInterface(int port) :
                Joystick(port)
            {

            }

            virtual void update();

        protected:
            double RampAxis(double inputValue, double rampedValue, double center, double deadband, double rampRate);

    };

    namespace Joysticks
    {
        class XboxController : public Blitz::JoystickInterface
        {
            public:

                XboxController(int port) :
                    JoystickInterface(port)
                {

                }

                void update() override;

                bool GetAButton();
                bool GetBButton();
                bool GetXButton();
                bool GetYButton();
                bool GetLeftBumper();
                bool GetRightBumper();
                bool GetSelectButton();
                bool GetStartButton();
                bool GetLeftStickButton();
                bool GetRightStickButton();

                double GetLeftX();
                double GetLeftY();
                double GetRightX();
                double GetRightY();
                double GetLeftTrigger();
                double GetRightTrigger();

                void ReCenterLeftX();
                void ReCenterLeftY();
                void ReCenterRightX();
                void ReCenterRightY();
                void ReCenterLeftTrigger();
                void ReCenterRightTrigger();

                void SetUniversalDeadband(double Deadband);
                void SetLeftXDeadband(double Deadband);
                void SetLeftYDeadband(double Deadband);
                void SetRightXDeadband(double Deadband);
                void SetRightYDeadband(double Deadband);
                void SetLeftTriggerDeadband(double Deadband);
                void SetRightTriggerDeadband(double Deadband);

                void SetUniversalRampRate(double RampRate);
                void SetLeftXRampRate(double RampRate);
                void SetLeftYRampRate(double RampRate);
                void SetRightXRampRate(double RampRate);
                void SetRightYRampRate(double RampRate);
                void SetLeftTriggerRampRate(double RampRate);
                void SetRightTriggerRampRate(double RampRate);


            private:

                //Buttons
                bool AButton = false;
                bool BButton = false;
                bool XButton = false;
                bool YButton = false;
                bool LeftBumper = false;
                bool RightBumper = false;
                bool SelectButton = false;
                bool StartButton = false;
                bool LeftStickButton = false;
                bool RightStickButton = false;

                //Axes
                double LeftX = 0;
                double LeftY = 0;
                double RightX = 0;
                double RightY = 0;
                double LeftTrigger = 0;
                double RightTrigger = 0;

                //Ramped Axes
                double LeftXRamp = 0;
                double LeftYRamp = 0;
                double RightXRamp = 0;
                double RightYRamp = 0;
                double LeftTriggerRamp = 0;
                double RightTriggerRamp = 0;

                //Axis Centers
                double LeftXCenter = 0;
                double LeftYCenter = 0;
                double RightXCenter = 0;
                double RightYCenter = 0;
                double LeftTriggerCenter = 0;
                double RightTriggerCenter = 0;

                //Axis Deadbands
                double LeftXDeadband = 0;
                double LeftYDeadband = 0;
                double RightXDeadband = 0;
                double RightYDeadband = 0;
                double LeftTriggerDeadband = 0;
                double RightTriggerDeadband = 0;

                //Axis Ramp Rates
                double LeftXRampRate = 0;
                double LeftYRampRate = 0;
                double RightXRampRate = 0;
                double RightYRampRate = 0;
                double LeftTriggerRampRate = 0;
                double RightTriggerRampRate = 0;


                //Button ids
                const int A_BUTTON_ID = 1;
                const int B_BUTTON_ID = 2;
                const int X_BUTTON_ID = 3;
                const int Y_BUTTON_ID = 4;
                const int LEFT_BUMPER_ID = 5;
                const int RIGHT_BUMPER_ID = 6;
                const int SELECT_BUTTON = 7;
                const int START_BUTTON = 8;
                const int LEFT_STICK_BUTTON_ID = 9;
                const int RIGHT_STICK_BUTTON_ID = 10;

                //axis ids
                const int LEFT_X_AXIS_ID = 0;
                const int LEFT_Y_AXIS_ID = 1;
                const int LEFT_TRIGGER_ID = 2;
                const int RIGHT_TRIGGER_ID = 3;
                const int RIGHT_X_AXIS_ID = 4;
                const int RIGHT_Y_AXIS_ID = 5;

        };

        class ThreeAxisJoystick : public Blitz::JoystickInterface
        {
            public:

                ThreeAxisJoystick(int port) :
                    JoystickInterface(port)
                {

                }

                void update() override;

                bool GetTrigger();
                bool GetButton2();
                bool GetButton3();
                bool GetButton4();
                bool GetButton5();
                bool GetButton6();
                bool GetButton7();
                bool GetButton8();
                bool GetButton9();
                bool GetButton10();
                bool GetButton11();
                bool GetButton12();

                double GetXAxis();
                double GetYAxis();
                double GetZAxis();
                double GetDial();

            private:
                //Buttons
                bool Trigger = 0;
                bool Button2 = 0;
                bool Button3 = 0;
                bool Button4 = 0;
                bool Button5 = 0;
                bool Button6 = 0;
                bool Button7 = 0;
                bool Button8 = 0;
                bool Button9 = 0;
                bool Button10 = 0;
                bool Button11 = 0;
                bool Button12= 0;

                //axes
                double XAxis = 0;
                double YAxis = 0;
                double ZAxis = 0;
                double Dial = 0;

                //Button IDs
                const int TRIGGER_ID = 1;
                const int BUTTON2_ID = 2;
                const int BUTTON3_ID = 3;
                const int BUTTON4_ID = 4;
                const int BUTTON5_ID = 5;
                const int BUTTON6_ID = 6;
                const int BUTTON7_ID = 7;
                const int BUTTON8_ID = 8;
                const int BUTTON9_ID = 9;
                const int BUTTON10_ID = 10;
                const int BUTTON11_ID = 11;
                const int BUTTON12_ID = 12;

                //axis IDs
                const int X_AXIS_ID = 0;
                const int Y_AXIS_ID = 1;
                const int Z_AXIS_ID = 2;
                const int DIAL_ID = 3;

        };

        class TwoAxisJoystick : public Blitz::JoystickInterface
        {
            public:

                TwoAxisJoystick(int port) :
                    JoystickInterface(port)
                {

                }

                void update() override;

                bool GetTrigger();
                bool GetButton2();
                bool GetButton3();
                bool GetButton4();
                bool GetButton5();
                bool GetButton6();
                bool GetButton7();
                bool GetButton8();

                double GetXAxis();
                double GetYAxis();
                double GetDial();

            private:

                //Buttons
                bool Trigger = 0;
                bool Button2 = 0;
                bool Button3 = 0;
                bool Button4 = 0;
                bool Button5 = 0;
                bool Button6 = 0;
                bool Button7 = 0;
                bool Button8 = 0;

                //Axes
                double XAxis = 0;
                double YAxis = 0;
                double Dial = 0;

                //Button IDs
                const int TRIGGER_ID = 1;
                const int BUTTON2_ID = 2;
                const int BUTTON3_ID = 3;
                const int BUTTON4_ID = 4;
                const int BUTTON5_ID = 5;
                const int BUTTON6_ID = 6;
                const int BUTTON7_ID = 7;
                const int BUTTON8_ID = 8;

                //Axis IDs
                const int X_AXIS_ID = 0;
                const int Y_AXIS_ID = 1;
                const int DIAL_ID = 2;

        };   
    }
}