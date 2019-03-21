#pragma once

#include "DriveTrain.hpp"

using namespace std;
using namespace frc;

namespace Blitz
{
    class Tank : public Blitz::DriveTrain
    {
        public:
            Tank(Blitz::Models::TankInput *Input, Blitz::BlitzLogger *Logger) :
                DriveTrain(Logger)
            {
                this->Input = Input;
            }

            void Initialize() override;
            void Drive() override;
            void Close() override;

        private:
            Blitz::Models::TankInput *Input;
    };
}