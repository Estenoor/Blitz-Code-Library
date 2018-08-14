#ifndef SRC_DRIVETRAINS_TANK_TANKDRIVE_HPP
#define SRC_DRIVETRAINS_TANK_TANKDRIVE_HPP

#include <WPILib.h>

#include "DriveInterface.hpp"
#include "BlitzLogger.hpp"

using namespace std;
using namespace Blitz;
using namespace Blitz::Models;

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

            void Initialize(TankInput *Input);
            void Run();
            void Close();

        private:
            BlitzLogger *Logger;
            DriveMotors DriveTrain;
    };
}   

#endif