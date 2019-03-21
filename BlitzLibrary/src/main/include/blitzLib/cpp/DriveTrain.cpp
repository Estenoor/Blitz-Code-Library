#include "DriveTrain.hpp"

Blitz::DriveTrain::DriveTrain(Blitz::BlitzLogger *Logger) :
    LeftFrontMotor(0),
    LeftBackMotor(1),
    RightFrontMotor(2),
    RightBackMotor(3),
    Motors(&LeftFrontMotor, &LeftBackMotor, &RightFrontMotor, &RightBackMotor)
{
    this->Logger = Logger;
}

void Blitz::DriveTrain::SetMotorDirection(int Motor, int dir)
{
    MotorDirs[Motor] = dir;
}

double Blitz::DriveTrain::GetMotorOutput(int MotorID)
{
    return motorValues[MotorID];
}

void Blitz::DriveTrain::EnablePID(bool Enabled)
{
    usePID = Enabled;
}

void Blitz::DriveTrain::TuneF(int MotorID, double FGain)
{
    switch(MotorID)
    {
        case 0:
            Motors.Motor1->Config_kF(0, FGain, 30);
            break;
        case 1 :
            Motors.Motor2->Config_kF(0, FGain, 30);
            break;
        case 2 :
            Motors.Motor3->Config_kF(0, FGain, 30);
            break;
        case 3 :
            Motors.Motor4->Config_kF(0, FGain, 30);
            break;
    }
}

void Blitz::DriveTrain::TuneP(int MotorID, double PGain)
{
    switch(MotorID)
    {
        case 0:
            Motors.Motor1->Config_kP(0, PGain, 30);
            break;
        case 1 :
            Motors.Motor2->Config_kP(0, PGain, 30);
            break;
        case 2 :
            Motors.Motor3->Config_kP(0, PGain, 30);
            break;
        case 3 :
            Motors.Motor4->Config_kP(0, PGain, 30);
            break;
    }
}

void Blitz::DriveTrain::TuneI(int MotorID, double IGain)
{
    switch(MotorID)
    {
        case 0:
            Motors.Motor1->Config_kI(0, IGain, 30);
            break;
        case 1 :
            Motors.Motor2->Config_kI(0, IGain, 30);
            break;
        case 2 :
            Motors.Motor3->Config_kI(0, IGain, 30);
            break;
        case 3 :
            Motors.Motor4->Config_kI(0, IGain, 30);
            break;
    }
}

void Blitz::DriveTrain::TuneD(int MotorID, double DGain)
{
    switch(MotorID)
    {
        case 0:
            Motors.Motor1->Config_kD(0, DGain, 30);
            break;
        case 1 :
            Motors.Motor2->Config_kD(0, DGain, 30);
            break;
        case 2 :
            Motors.Motor3->Config_kD(0, DGain, 30);
            break;
        case 3 :
            Motors.Motor4->Config_kD(0, DGain, 30);
            break;
    }
}