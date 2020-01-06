#pragma once

#include <frc/WPILib.h>
#include <ctre/Phoenix.h>
#include <rev/CANSparkMax.h>

using namespace frc;
using namespace rev;

namespace Blitz
{
    namespace Models 
    { 
        //The 4 Motors For the Drive Train
        class DriveMotors
        {
            public:
                TalonSRX * Motor0; // Front Left
                TalonSRX * Motor1; // Front Right
                TalonSRX * Motor2; // Back Left
                TalonSRX * Motor3; // Back Right

                DriveMotors() {}

                DriveMotors(TalonSRX * LeftFrontMotor, TalonSRX * LeftBackMotor, TalonSRX * RightFrontMotor, TalonSRX * RightBackMotor)
                {
                    this->Motor0 = LeftFrontMotor;
                    this->Motor1 = LeftBackMotor;
                    this->Motor2 = RightFrontMotor;
                    this->Motor3 = RightBackMotor;
                }            
        };

        class SparkMAXDriveMotors
        {
            public:
                CANSparkMax * Motor0; //Front Left
                CANSparkMax * Motor1; //Front Right
                CANSparkMax * Motor2; //Back Left
                CANSparkMax * Motor3; //Back Right

                SparkMAXDriveMotors() {}

                SparkMAXDriveMotors(CANSparkMax * LeftFrontMotor, CANSparkMax * LeftBackMotor, CANSparkMax * RightFrontMotor, CANSparkMax * RightBackMotor)
                {
                    this->Motor0 = LeftFrontMotor;
                    this->Motor1 = LeftBackMotor;
                    this->Motor2 = RightFrontMotor;
                    this->Motor3 = RightBackMotor;
                }  
        };

        // Joystick Data for Arcade Drive
        class ArcadeInput
        {
            public:
                double YValue; // Speed
                double ZValue; // Rotation

                ArcadeInput(double YValue, double ZValue)
                {
                    this->YValue = YValue;
                    this->ZValue = ZValue;
                }

                ArcadeInput()
                {
                    YValue = 0;
                    ZValue = 0;
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

                TankInput()
                {
                    LeftValue = 0;
                    RightValue = 0;
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

                MecanumInput()
                {
                    XValue = 0;
                    YValue = 0;
                    ZValue = 0;
                }
        };

        // Joystick Data for Ocotocanum Drive
        class OctocanumInput
        {
            public:
                double XValue; // Left/Right Speed (ignored in tank mode)
                double YValue; // Forward/Back Speed
                double ZValue; // Rotation Speed 
                int DriveMode; //Drive Mode

                OctocanumInput(double XValue, double YValue, double ZValue, int DriveMode)
                {
                    this->XValue = XValue;
                    this->YValue = YValue;
                    this->ZValue = ZValue;
                    this-> DriveMode = DriveMode;
                }

                OctocanumInput()
                {
                    XValue = 0;
                    YValue = 0;
                    ZValue = 0;
                    DriveMode = 0;
                }
        };
    }
}