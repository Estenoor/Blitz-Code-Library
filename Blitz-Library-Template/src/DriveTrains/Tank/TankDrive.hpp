#ifndef SRC_DRIVETRAINS_TANK_TANKDRIVE_HPP
#define SRC_DRIVETRAINS_TANK_TANKDRIVE_HPP

#include <WPILib.h>

#include "DriveTrains/DriveInterface.hpp"
#include "BlitzLogger/BlitzLogger.hpp"

using namespace Blitz;
using namespace Blitz::Models;
using namespace std;

namespace Blitz
{
    class Tank : DriveInterface
    {
        public:
            TankDrive(DriveMotors DriveTrain,  BlitzLogger *Logger)
            {
                this->Logger = Logger;
                this->DriveTrain = DriveTrain;
            }

            void Initialize(ArcadeInput *Input, BlitzLogger *Logger);
            void Run();
            void Close();

        private:
            BlitzLogger *Logger;
            DriveMotors DriveTrain;
    };
}   

#endif