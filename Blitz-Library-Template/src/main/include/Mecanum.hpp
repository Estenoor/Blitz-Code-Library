#ifndef SRC_DRIVETRAINS_MECANUM_MECANUM_HPP
#define SRC_DRIVETRAINS_MECANUM_MECANUM_HPP

#include <WPILib.h>

#include "DataTypes.hpp"
#include "DriveInterface.hpp"
#include "BlitzLogger.hpp"

using namespace std;
using namespace Blitz;
using namespace Blitz::Models;

namespace Blitz
{
    class Mecanum : DriveInterface
    {

        public:
            MecanumDrive(Blitz::Models::DriveMotors *DriveTrain,  Blitz::BlitzLogger *Logger)
            {
                this->Logger = Logger;
                this->DriveTrain = DriveTrain;
            }

            void Initialize(MecanumInput *input);
            void Drive();
            void Close();
            
            
        private:
            MecanumInput *InputData;
            BlitzLogger *Logger; 
            Blitz::DriveMotors *DriveTrain;
    };
}

#endif