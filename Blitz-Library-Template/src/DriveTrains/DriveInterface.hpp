#ifndef SRC_DRIVETRAINS_DRIVEINTERFACE_HPP
#define SRC_DRIVETRAINS_DRIVEINTERFACE_HPP

#include "Models/ModelTypes.hpp"

namespace Blitz
{
    class DriveInterface 
    {
        public:
            virtual void Initialize() = 0;
            virtual void Drive() = 0;
            virtual void Close() = 0;      
    };
}
#endif