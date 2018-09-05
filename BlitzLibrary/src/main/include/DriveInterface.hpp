#pragma once

#include <WPILib.h>

#include "DataTypes.hpp"
#include "DriveReferences.hpp"

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