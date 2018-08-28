#pragma once

#include <WPILib.h>
#include <ctre/Phoenix.h>

namespace Blitz
{
    namespace Models 
    { 
        //The 4 Motors For the Drive Train
        class DriveMotors
        {
            public:
                WPI_TalonSRX * Motor1; // Front Left
                WPI_TalonSRX * Motor2; // Front Right
                WPI_TalonSRX * Motor3; // Back Left
                WPI_TalonSRX * Motor4; // Back Right

                DriveMotors() {}    

                DriveMotors(WPI_TalonSRX * Motor1, WPI_TalonSRX * Motor2, WPI_TalonSRX * Motor3, WPI_TalonSRX * Motor4)
                {
                    this->Motor1 = Motor1;
                    this->Motor2 = Motor2;
                    this->Motor3 = Motor3;
                    this->Motor4 = Motor4;                                                                                                                                                                                                        
                }            
        };

        // Joystick Data for Arcade Drive
        class ArcadeInput
        {
            public:
                double YValue; // Speed
                double ZValue; // Rotation

                ArcadeInput(double YValue, double XValue)
                {
                    this->YValue = YValue;
                    this->ZValue = ZValue;
                }
        };

        // Joystick Data for Tank Drive
        class TankInput
        {
            public:
                double LeftValue;  // Left Joystick Speed
                double RightValue; // Right Joystick Speed
                TankInput(double LeftValue, double RightValue)
                {
                    this->LeftValue = LeftValue;
                    this->RightValue = RightValue;                        
                }                                
        };

        // Joystick Data for Mecanum Drive
        class MecanumInput
        {
            public:
                double XValue; // Left/Right Speed
                double YValue; // Forward/Back Speed
                double ZValue; // Rotation Speed 

                MecanumInput(double XValue, double YValue, double ZValue)
                {
                    this->XValue = XValue;
                    this->YValue = YValue;
                    this->ZValue = ZValue;
                }
        };


    }
}