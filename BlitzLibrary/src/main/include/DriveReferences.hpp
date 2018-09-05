#pragma once

#include <WPILib.h>

namespace Blitz
{
    class DriveReference
    {
        public:
            static constexpr double WHEEL_CIRCUMFERENCE = 0.5;
            static constexpr double ENCODER_UNITS_PER_ROTATION = 4096;
            static constexpr double RPM_PER_METER = 1/WHEEL_CIRCUMFERENCE;
            static constexpr double ENCODER_UNITS_PER_METER = RPM_PER_METER * ENCODER_UNITS_PER_ROTATION;
            static constexpr double CTRE_MILLISECOND_CONVERSION = 10;

        private:

    };
}