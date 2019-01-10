#pragma once

#include <frc/WPILib.h>

using namespace frc;

namespace Blitz
{
    class DriveReference
    {
        public:
            static constexpr double WHEEL_RADIUS = 0.1016; //Radius of the wheel in Meters
            static constexpr double ENCODER_UNITS_PER_ROTATION = 4096;

            static constexpr double MAX_RPM = 100;

            static constexpr double WHEEL_CIRCUMFERENCE = 3.14 * WHEEL_RADIUS;
            static constexpr double ROTATIONS_PER_METER = 1/WHEEL_CIRCUMFERENCE;
            static constexpr double ENCODER_UNITS_PER_METER = ROTATIONS_PER_METER * ENCODER_UNITS_PER_ROTATION;
            static constexpr double SECOND_TO_HUNDERD_MILLISECOND_CONVERSION = 10;

            static constexpr double MAX_SPEED_PID = ((MAX_RPM/60) * ENCODER_UNITS_PER_ROTATION)/SECOND_TO_HUNDERD_MILLISECOND_CONVERSION;
            static constexpr double MAX_SPEED_NO_PID = (MAX_RPM/60) * ROTATIONS_PER_METER;


            static constexpr double MOTOR1_kF = 0;
            static constexpr double MOTOR1_kP = 0;
            static constexpr double MOTOR1_kI = 0;
            static constexpr double MOTOR1_kD = 0;

            static constexpr double MOTOR2_kF = 0;
            static constexpr double MOTOR2_kP = 0;
            static constexpr double MOTOR2_kI = 0;
            static constexpr double MOTOR2_kD = 0;

            static constexpr double MOTOR3_kF = 0;
            static constexpr double MOTOR3_kP = 0;
            static constexpr double MOTOR3_kI = 0;
            static constexpr double MOTOR3_kD = 0;

            static constexpr double MOTOR4_kF = 0;
            static constexpr double MOTOR4_kP = 0;
            static constexpr double MOTOR4_kI = 0;
            static constexpr double MOTOR4_kD = 0;

        private:

    };
}