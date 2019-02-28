#pragma once

#include "DriveTrain.hpp"

using namespace std;
using namespace frc;

namespace Blitz
{
    class Arcade : public Blitz::DriveTrain
    {
        public:
            Arcade(Blitz::Models::ArcadeInput *Input, Blitz::BlitzLogger *Logger) :
                DriveTrain(Logger)
            {
               this->Input = Input;
            }
            void Initialize() override;
            void Drive() override;
            void Close() override;

        private:
            Blitz::Models::ArcadeInput *Input;
    };
}