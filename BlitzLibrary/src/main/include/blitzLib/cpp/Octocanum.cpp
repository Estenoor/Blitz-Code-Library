#include "Octocanum.hpp"

void Blitz::Octocanum::SetMotorDirection(int Motor, int dir)
{
    ArcadeDrive.SetMotorDirection(Motor, dir);
    MecanumDrive.SetMotorDirection(Motor, dir);
}

void Blitz::Octocanum::TuneF(int MotorID, double FGain)
{
    ArcadeDrive.TuneF(MotorID, FGain);
    MecanumDrive.TuneF(MotorID, FGain);
}

void Blitz::Octocanum::TuneP(int MotorID, double PGain)
{
    ArcadeDrive.TuneP(MotorID, PGain);
    MecanumDrive.TuneP(MotorID, PGain);
}

void Blitz::Octocanum::TuneI(int MotorID, double IGain)
{
    ArcadeDrive.TuneI(MotorID, IGain);
    MecanumDrive.TuneI(MotorID, IGain);
}

void Blitz::Octocanum::TuneD(int MotorID, double DGain)
{
    ArcadeDrive.TuneD(MotorID, DGain);
    MecanumDrive.TuneD(MotorID, DGain);
}

double Blitz::Octocanum::GetMotorOutput(int MotorID)
{
    return MecanumDrive.GetMotorOutput(MotorID);
}

void Blitz::Octocanum::Initialize()
{
    ArcadeDrive.Initialize();
    MecanumDrive.Initialize();
}

void Blitz::Octocanum::Drive(Blitz::Models::OctocanumInput Input)
{
    if(Input.DriveMode)
    {
        ArcadeDrive.Drive(Blitz::Models::ArcadeInput(Input.XValue, Input.YValue));
    }
    else
    {
        MecanumDrive.Drive(Blitz::Models::MecanumInput(Input.XValue, Input.YValue, Input.ZValue));
    }
}

void Blitz::Octocanum::Close()
{
    ArcadeDrive.Close();
    MecanumDrive.Close();
}