#pragma once

#include <frc/WPILib.h>
#include <ctre/Phoenix.h>

#include "DataTypes.hpp"
#include "DriveReferences.hpp"
#include "BlitzLogger.hpp"
#include "Arcade.hpp"
#include "Mecanum.hpp"

using namespace std;
using namespace frc;

namespace Blitz
{
    class Octocanum
    {
        public:
            Octocanum() :
                Solenoid(0),
                comp(0)
            {

            }
            void SetMotorDirection(int Motor, int dir);
            double GetMotorOutput(int MotorID);

            void EnablePID(bool enabled);
            void TuneF(int MotorID, double FGain);
            void TuneP(int MotorID, double PGain);
            void TuneI(int MotorID, double IGain);
            void TuneD(int MotorID, double DGain);

            void Initialize();
            void Drive();
            void Drive(Blitz::Models::OctocanumInput Input);
            void Close();

        private:
            Blitz::Arcade ArcadeDrive;
            Blitz::Mecanum MecanumDrive;
            frc::Compressor comp;
            frc::Solenoid Solenoid;
    };
}