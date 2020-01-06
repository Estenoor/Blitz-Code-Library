#pragma once

#include <frc/WPILib.h>
#include <BlitzLib/BlitzLib.hpp>


class Robot : public frc::SampleRobot 
{
    public:
        Robot();

        void RobotInit() override;
        void Autonomous() override;
        void OperatorControl() override;
        void Test() override;

    private:
        Blitz::Joysticks::ThreeAxisJoystick ThreeAxis;
        Blitz::Joysticks::TwoAxisJoystick TwoAxis;
        Blitz::Joysticks::XboxController Xbox;

        bool toggles = false;

        Blitz::Mecanum DriveTrain;
  
};
