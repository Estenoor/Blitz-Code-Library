#include "Arcade.hpp"

using namespace std;


void Blitz::Arcade::Initialize(Blitz::Models::ArcadeInput *Input)
{
    InputData = Input;
    
    Motors->Motor1->Set(ControlMode::Velocity, 0);
    Motors->Motor2->Set(ControlMode::Velocity, 0);
    Motors->Motor3->Set(ControlMode::Velocity, 0);
    Motors->Motor4->Set(ControlMode::Velocity, 0);

    Motors->Motor1->ConfigSelectedFeedbackSensor(FeedbackDevice::CTRE_MagEncoder_Relative, 0, 30);
	Motors->Motor1->SetSensorPhase(true);

    Motors->Motor2->ConfigSelectedFeedbackSensor(FeedbackDevice::CTRE_MagEncoder_Relative, 0, 30);
	Motors->Motor2->SetSensorPhase(true);

    Motors->Motor3->ConfigSelectedFeedbackSensor(FeedbackDevice::CTRE_MagEncoder_Relative, 0, 30);
	Motors->Motor3->SetSensorPhase(true);

    Motors->Motor4->ConfigSelectedFeedbackSensor(FeedbackDevice::CTRE_MagEncoder_Relative, 0, 30);
	Motors->Motor4->SetSensorPhase(true);
}

void Blitz::Arcade::Run()
{
    Motors->Motor1->Set(ControlMode::Velocity, (InputData->YValue + InputData->ZValue) * Blitz::DriveReference::ENCODER_UNITS_PER_METER / Blitz::DriveReference::CTRE_MILLISECOND_CONVERSION);
    Motors->Motor2->Set(ControlMode::Velocity, (InputData->YValue + InputData->ZValue) * Blitz::DriveReference::ENCODER_UNITS_PER_METER / Blitz::DriveReference::CTRE_MILLISECOND_CONVERSION);
    Motors->Motor3->Set(ControlMode::Velocity, (InputData->YValue - InputData->ZValue) * Blitz::DriveReference::ENCODER_UNITS_PER_METER / Blitz::DriveReference::CTRE_MILLISECOND_CONVERSION);
    Motors->Motor4->Set(ControlMode::Velocity, (InputData->YValue - InputData->ZValue) * Blitz::DriveReference::ENCODER_UNITS_PER_METER / Blitz::DriveReference::CTRE_MILLISECOND_CONVERSION);
}

void Blitz::Arcade::Close()
{

}

