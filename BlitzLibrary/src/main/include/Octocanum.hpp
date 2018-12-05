#pragma once

#include <WPILib.h>

#include "DataTypes.hpp"
#include "BlitzLogger.hpp"
#include "DriveReferences.hpp"

using namespace std;

namespace Blitz
{
    class Octocanum
    {

        public:
            Octocanum(Blitz::Models::DriveMotors *Motors,  Blitz::BlitzLogger *Logger)
            {
                this->Logger = Logger;
                this->Motors = Motors;
            }

            void SetMotorDirection(int Motor, int dir);
            void Initialize(Blitz::Models::OctocanumInput *Input);
            void Drive();
            void Close();
            
            
        private:
            Blitz::BlitzLogger *Logger; 
            Blitz::Models::OctocanumInput *InputData;
            Blitz::Models::DriveMotors *Motors;
            int MotorDirs[4] = {1, 1, 1, 1};

    };
}