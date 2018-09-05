#include "Tank.hpp"

using namespace std;

void Blitz::Tank::Initialize(Blitz::Models::TankInput *Input)
{
    InputData = Input;

    Motors->Motor1->Set(ControlMode::Velocity, 0);
    Motors->Motor2->Set(ControlMode::Velocity, 0);
    Motors->Motor3->Set(ControlMode::Velocity, 0);
    Motors->Motor4->Set(ControlMode::Velocity, 0);
}

void Blitz::Tank::Run()
{
    Motors->Motor1->Set(ControlMode::Velocity, (InputData->LeftValue) * Blitz::DriveReference::ENCODER_UNITS_PER_METER / Blitz::DriveReference::CTRE_MILLISECOND_CONVERSION);
    Motors->Motor3->Set(ControlMode::Velocity, (InputData->LeftValue) * Blitz::DriveReference::ENCODER_UNITS_PER_METER / Blitz::DriveReference::CTRE_MILLISECOND_CONVERSION);
    Motors->Motor2->Set(ControlMode::Velocity, (InputData->RightValue) * Blitz::DriveReference::ENCODER_UNITS_PER_METER / Blitz::DriveReference::CTRE_MILLISECOND_CONVERSION);
    Motors->Motor4->Set(ControlMode::Velocity, (InputData->RightValue) * Blitz::DriveReference::ENCODER_UNITS_PER_METER / Blitz::DriveReference::CTRE_MILLISECOND_CONVERSION);
}

void Blitz::Tank::Close()
{
    // Wow Such Empty
}