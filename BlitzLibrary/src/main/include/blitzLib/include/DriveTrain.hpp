#pragma once

#include <frc/WPILib.h>
#include <ctre/Phoenix.h>

#include "DataTypes.hpp"
#include "DriveReferences.hpp"
#include "BlitzLogger.hpp"

namespace Blitz
{
    class DriveTrain
    {
        public:
            DriveTrain();

            void SetMotorDirection(int Motor, int dir);
            double GetMotorOutput(int MotorID);

            void EnablePID(bool enabled);
            void TuneF(int MotorID, double FGain);
            void TuneP(int MotorID, double PGain);
            void TuneI(int MotorID, double IGain);
            void TuneD(int MotorID, double DGain);

            void Initialize();
            virtual void Drive() {}
            virtual void Close() {}

        protected:
            Blitz::Models::DriveMotors Motors;
            
            int MotorDirs[4] = {1, 1, 1, 1};
            double motorValues[4] = {0, 0, 0, 0};
            int NumOfMotors = 4;
            bool usePID = false;

        private:
            TalonSRX LeftFrontMotor, LeftBackMotor, RightFrontMotor, RightBackMotor;

    };
}