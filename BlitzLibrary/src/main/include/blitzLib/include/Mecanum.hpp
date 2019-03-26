#pragma once

#include "DriveTrain.hpp"

using namespace std;
using namespace frc;

namespace Blitz
{
    class Mecanum : public Blitz::DriveTrain
    {
        public:
            Mecanum(Blitz::Models::MecanumInput *Input, Blitz::BlitzLogger *Logger) :
                DriveTrain(Logger)
            {
                this->Input = Input;
            }

            void Initialize() override;
            void Drive() override;
            void Close() override;
            
        private:
            Blitz::Models::MecanumInput *Input;

    };
}