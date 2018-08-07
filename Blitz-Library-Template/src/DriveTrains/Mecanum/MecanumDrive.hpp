#ifndef SRC_DRIVETRAINS_MECANUM_MECANUM_HPP
#define SRC_DRIVETRAINS_MECANUM_MECANUM_HPP

#include "DriveTrains/DriveInterface.hpp"

namespace Blitz
{
    class Mecanum : Blitz::DriveInterface
    {
        public:
            void Initialize();
            void Drive();
            void Close();    
    };
}

#endif