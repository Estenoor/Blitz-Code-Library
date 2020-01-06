#include "DriveTrain.hpp"

Blitz::DriveTrain::DriveTrain() :
    LeftFrontMotor(0),
    LeftBackMotor(1),
    RightFrontMotor(2),
    RightBackMotor(3),
    Motors(&LeftFrontMotor, &LeftBackMotor, &RightFrontMotor, &RightBackMotor)
{

}

void Blitz::DriveTrain::SetMotorDirection(int Motor, int dir)
{
    MotorDirs[Motor] = dir;
}

double Blitz::DriveTrain::GetMotorSetPoint(int MotorID)
{
    return motorValues[MotorID];
}

double Blitz::DriveTrain::GetMotorOutput(int MotorID)
{
    switch(MotorID)
    {
        case 0:
            return Motors.Motor0->GetSelectedSensorVelocity(0);
        case 1 :
            return Motors.Motor1->GetSelectedSensorVelocity(0);
        case 2 :
            return Motors.Motor2->GetSelectedSensorVelocity(0);
        case 3 :
            return Motors.Motor3->GetSelectedSensorVelocity(0);
    }
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
            Motors.Motor0->Config_kF(0, FGain, 30);
            break;
        case 1 :
            Motors.Motor1->Config_kF(0, FGain, 30);
            break;
        case 2 :
            Motors.Motor2->Config_kF(0, FGain, 30);
            break;
        case 3 :
            Motors.Motor3->Config_kF(0, FGain, 30);
            break;
    }
}

void Blitz::DriveTrain::TuneP(int MotorID, double PGain)
{
    switch(MotorID)
    {
        case 0:
            Motors.Motor0->Config_kP(0, PGain, 30);
            break;
        case 1 :
            Motors.Motor1->Config_kP(0, PGain, 30);
            break;
        case 2 :
            Motors.Motor2->Config_kP(0, PGain, 30);
            break;
        case 3 :
            Motors.Motor3->Config_kP(0, PGain, 30);
            break;
    }
}

void Blitz::DriveTrain::TuneI(int MotorID, double IGain)
{
    switch(MotorID)
    {
        case 0:
            Motors.Motor0->Config_kI(0, IGain, 30);
            break;
        case 1 :
            Motors.Motor1->Config_kI(0, IGain, 30);
            break;
        case 2 :
            Motors.Motor2->Config_kI(0, IGain, 30);
            break;
        case 3 :
            Motors.Motor3->Config_kI(0, IGain, 30);
            break;
    }
}

void Blitz::DriveTrain::TuneD(int MotorID, double DGain)
{
    switch(MotorID)
    {
        case 0:
            Motors.Motor0->Config_kD(0, DGain, 30);
            break;
        case 1 :
            Motors.Motor1->Config_kD(0, DGain, 30);
            break;
        case 2 :
            Motors.Motor2->Config_kD(0, DGain, 30);
            break;
        case 3 :
            Motors.Motor3->Config_kD(0, DGain, 30);
            break;
    }
}

void Blitz::DriveTrain::Initialize()
{
    Motors.Motor0->ConfigSelectedFeedbackSensor(FeedbackDevice::QuadEncoder, Blitz::DriveReference::SENSOR_INDEX, Blitz::DriveReference::TIMEOUT);
	Motors.Motor0->SetSensorPhase(Blitz::DriveReference::MOTOR0_SENSOR_PHASE);
    Motors.Motor0->ConfigNominalOutputForward(0, Blitz::DriveReference::TIMEOUT);
    Motors.Motor0->ConfigNominalOutputReverse(0, Blitz::DriveReference::TIMEOUT);
    Motors.Motor0->ConfigPeakOutputForward(1, Blitz::DriveReference::TIMEOUT);
    Motors.Motor0->ConfigPeakOutputReverse(-1, Blitz::DriveReference::TIMEOUT);
    Motors.Motor0->Config_kF(Blitz::DriveReference::SENSOR_INDEX, Blitz::DriveReference::MOTOR0_kF, Blitz::DriveReference::TIMEOUT);
    Motors.Motor0->Config_kP(Blitz::DriveReference::SENSOR_INDEX, Blitz::DriveReference::MOTOR0_kP, Blitz::DriveReference::TIMEOUT);
    Motors.Motor0->Config_kI(Blitz::DriveReference::SENSOR_INDEX, Blitz::DriveReference::MOTOR0_kI, Blitz::DriveReference::TIMEOUT);
    Motors.Motor0->Config_kD(Blitz::DriveReference::SENSOR_INDEX, Blitz::DriveReference::MOTOR0_kD, Blitz::DriveReference::TIMEOUT);
    Motors.Motor0->ConfigOpenloopRamp(Blitz::DriveReference::RAMP_RATE);

    Motors.Motor1->ConfigSelectedFeedbackSensor(FeedbackDevice::QuadEncoder, Blitz::DriveReference::SENSOR_INDEX, Blitz::DriveReference::TIMEOUT);
	Motors.Motor1->SetSensorPhase(Blitz::DriveReference::MOTOR1_SENSOR_PHASE);
    Motors.Motor1->ConfigNominalOutputForward(0, Blitz::DriveReference::TIMEOUT);
    Motors.Motor1->ConfigNominalOutputReverse(0, Blitz::DriveReference::TIMEOUT);
    Motors.Motor1->ConfigPeakOutputForward(1, Blitz::DriveReference::TIMEOUT);
    Motors.Motor1->ConfigPeakOutputReverse(-1, Blitz::DriveReference::TIMEOUT);
    Motors.Motor1->Config_kF(Blitz::DriveReference::SENSOR_INDEX, Blitz::DriveReference::MOTOR1_kF, Blitz::DriveReference::TIMEOUT);
    Motors.Motor1->Config_kP(Blitz::DriveReference::SENSOR_INDEX, Blitz::DriveReference::MOTOR1_kP, Blitz::DriveReference::TIMEOUT);
    Motors.Motor1->Config_kI(Blitz::DriveReference::SENSOR_INDEX, Blitz::DriveReference::MOTOR1_kI, Blitz::DriveReference::TIMEOUT);
    Motors.Motor1->Config_kD(Blitz::DriveReference::SENSOR_INDEX, Blitz::DriveReference::MOTOR1_kD, Blitz::DriveReference::TIMEOUT);
    Motors.Motor1->ConfigOpenloopRamp(Blitz::DriveReference::RAMP_RATE);

    Motors.Motor2->ConfigSelectedFeedbackSensor(FeedbackDevice::QuadEncoder, Blitz::DriveReference::SENSOR_INDEX, Blitz::DriveReference::TIMEOUT);
	Motors.Motor2->SetSensorPhase(Blitz::DriveReference::MOTOR2_SENSOR_PHASE);
    Motors.Motor2->ConfigNominalOutputForward(0, Blitz::DriveReference::TIMEOUT);
    Motors.Motor2->ConfigNominalOutputReverse(0, Blitz::DriveReference::TIMEOUT);
    Motors.Motor2->ConfigPeakOutputForward(1, Blitz::DriveReference::TIMEOUT);
    Motors.Motor2->ConfigPeakOutputReverse(-1, Blitz::DriveReference::TIMEOUT);
    Motors.Motor2->Config_kF(Blitz::DriveReference::SENSOR_INDEX, Blitz::DriveReference::MOTOR2_kF, Blitz::DriveReference::TIMEOUT);
    Motors.Motor2->Config_kP(Blitz::DriveReference::SENSOR_INDEX, Blitz::DriveReference::MOTOR2_kP, Blitz::DriveReference::TIMEOUT);
    Motors.Motor2->Config_kI(Blitz::DriveReference::SENSOR_INDEX, Blitz::DriveReference::MOTOR2_kI, Blitz::DriveReference::TIMEOUT);
    Motors.Motor2->Config_kD(Blitz::DriveReference::SENSOR_INDEX, Blitz::DriveReference::MOTOR2_kD, Blitz::DriveReference::TIMEOUT);
    Motors.Motor2->ConfigOpenloopRamp(Blitz::DriveReference::RAMP_RATE);

    Motors.Motor3->ConfigSelectedFeedbackSensor(FeedbackDevice::QuadEncoder, Blitz::DriveReference::SENSOR_INDEX, Blitz::DriveReference::TIMEOUT);
	Motors.Motor3->SetSensorPhase(Blitz::DriveReference::MOTOR3_SENSOR_PHASE);
    Motors.Motor3->ConfigNominalOutputForward(0, Blitz::DriveReference::TIMEOUT);
    Motors.Motor3->ConfigNominalOutputReverse(0, Blitz::DriveReference::TIMEOUT);
    Motors.Motor3->ConfigPeakOutputForward(1, Blitz::DriveReference::TIMEOUT);
    Motors.Motor3->ConfigPeakOutputReverse(-1, Blitz::DriveReference::TIMEOUT);
    Motors.Motor3->Config_kF(Blitz::DriveReference::SENSOR_INDEX, Blitz::DriveReference::MOTOR3_kF, Blitz::DriveReference::TIMEOUT);
    Motors.Motor3->Config_kP(Blitz::DriveReference::SENSOR_INDEX, Blitz::DriveReference::MOTOR3_kP, Blitz::DriveReference::TIMEOUT);
    Motors.Motor3->Config_kI(Blitz::DriveReference::SENSOR_INDEX, Blitz::DriveReference::MOTOR3_kI, Blitz::DriveReference::TIMEOUT);
    Motors.Motor3->Config_kD(Blitz::DriveReference::SENSOR_INDEX, Blitz::DriveReference::MOTOR3_kD, Blitz::DriveReference::TIMEOUT);
    Motors.Motor3->ConfigOpenloopRamp(Blitz::DriveReference::RAMP_RATE);
    
    Motors.Motor0->Set(ControlMode::PercentOutput, 0);
    Motors.Motor1->Set(ControlMode::PercentOutput, 0);
    Motors.Motor2->Set(ControlMode::PercentOutput, 0);
    Motors.Motor3->Set(ControlMode::PercentOutput, 0);

}