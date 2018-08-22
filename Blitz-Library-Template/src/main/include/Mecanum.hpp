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
            Mecanum(Blitz::Models::DriveMotors *Motors,  Blitz::BlitzLogger *Logger)
            {
                this->Logger = Logger;
                this->Motors = Motors;
            }

            void Initialize(Blitz::Models::MecanumInput *Input);
            void Drive();
            void Close();
            
            
        private:
            Blitz::BlitzLogger *Logger; 
            Blitz::Models::MecanumInput *InputData;
            Blitz::Models::DriveMotors *Motors;
    };
}

#endif