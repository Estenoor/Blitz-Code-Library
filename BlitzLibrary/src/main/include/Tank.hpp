#pragma once

#include <WPILib.h>

#include "DriveInterface.hpp"
#include "BlitzLogger.hpp"

using namespace std;

namespace Blitz
{
    class Tank : DriveInterface
    {
        public:
            Tank(Blitz::Models::DriveMotors *Motors,  Blitz::BlitzLogger *Logger)
            {
                this->Logger = Logger;
                this->Motors = Motors;
            }

            void Initialize(Blitz::Models::TankInput *Input);
            void Run();
            void Close();

        private:
            Blitz::BlitzLogger *Logger;
            Blitz::Models::TankInput *InputData;
            Blitz::Models::DriveMotors *Motors;

    };
}