#include "Mecanum.hpp"

using namespace std;


void Blitz::Mecanum::Initialize(Blitz::Models::MecanumInput *Input)
{
    InputData = Input;
    
    Motors->Motor1->Set(ControlMode::Velocity, 0);
    Motors->Motor2->Set(ControlMode::Velocity, 0);
    Motors->Motor3->Set(ControlMode::Velocity, 0);
    Motors->Motor4->Set(ControlMode::Velocity, 0);
    
}

 void Blitz::Mecanum::Drive()
 {
    Motors->Motor1->Set(ControlMode::Velocity, (InputData->XValue + InputData->YValue + InputData->ZValue) * Blitz::DriveReference::ENCODER_UNITS_PER_METER / Blitz::DriveReference::CTRE_MILLISECOND_CONVERSION);
    Motors->Motor2->Set(ControlMode::Velocity, (-InputData->XValue + InputData->YValue + InputData->ZValue) * Blitz::DriveReference::ENCODER_UNITS_PER_METER / Blitz::DriveReference::CTRE_MILLISECOND_CONVERSION);
    Motors->Motor3->Set(ControlMode::Velocity, (-InputData->XValue + InputData->YValue - InputData->ZValue) * Blitz::DriveReference::ENCODER_UNITS_PER_METER / Blitz::DriveReference::CTRE_MILLISECOND_CONVERSION);
    Motors->Motor4->Set(ControlMode::Velocity, (InputData->XValue + InputData->YValue - InputData->ZValue) * Blitz::DriveReference::ENCODER_UNITS_PER_METER / Blitz::DriveReference::CTRE_MILLISECOND_CONVERSION);
 }

 void Blitz::Mecanum::Close()
 {

 }