#ifndef SRC_DRIVETRAINS_ARCADE_ARCADEDRIVE_HPP
#define SRC_DRIVETRAINS_ARCADE_ARCADEDRIVE_HPP

#include <WPILib.h>

#include "DriveTrains/DriveInterface.hpp"
#include "BlitzLogger/BlitzLogger.hpp"

using namespace std;

using namespace Blitz;
using namespace Blitz::Models;

namespace Blitz
{
    class Arcade : DriveInterface
    {
        public:
            Arcade(DriveMotors *Motors, BlitzLogger *Logger)
            {
                this->Motors = Motors;
                this->Logger = Logger;
            }

            void Initialize(ArcadeInput * Input);
            void Run();
            void Close();

        private:
            DriveMotors *Motors;
            BlitzLogger *Logger;
    };
}   

#endif