#pragma once

#include "DriveTrain.hpp"

using namespace std;
using namespace frc;

namespace Blitz
{
    class Arcade : public Blitz::DriveTrain
    {
        public:
            Arcade() :
                DriveTrain()
            {

            }
            
            void Drive() override;
            void Drive(Blitz::Models::ArcadeInput Input);
            void Close() override;

        private:
    };
}