#ifndef SRC_DRIVETRAINS_ARCADE_ARCADEDRIVE_HPP
#define SRC_DRIVETRAINS_ARCADE_ARCADEDRIVE_HPP

#include <WPILib.h>

#include "DriveInterface.hpp"
#include "BlitzLogger.hpp"

using namespace std;

namespace Blitz
{
    class Arcade : DriveInterface
    {
        public:
            Arcade(Blitz::Models::DriveMotors *Motors, Blitz::BlitzLogger *Logger)
            {
                this->Motors = Motors;
                this->Logger = Logger;
            }

            void Initialize(Blitz::Models::ArcadeInput *Input);
            void Run();
            void Close();

        private:
            Blitz::BlitzLogger *Logger;
            Blitz::Models::ArcadeInput *InputData;
            Blitz::Models::DriveMotors *Motors;
    };
}   

#endif