#include "Tank.hpp"

void Blitz::Tank::Initialize()
{
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
	Motors.Motor2->SetSensorPhase(Blitz::DriveReference::MOTOR1_SENSOR_PHASE);
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
	Motors.Motor3->SetSensorPhase(Blitz::DriveReference::MOTOR1_SENSOR_PHASE);
    Motors.Motor3->ConfigNominalOutputForward(0, Blitz::DriveReference::TIMEOUT);
    Motors.Motor3->ConfigNominalOutputReverse(0, Blitz::DriveReference::TIMEOUT);
    Motors.Motor3->ConfigPeakOutputForward(1, Blitz::DriveReference::TIMEOUT);
    Motors.Motor3->ConfigPeakOutputReverse(-1, Blitz::DriveReference::TIMEOUT);
    Motors.Motor3->Config_kF(Blitz::DriveReference::SENSOR_INDEX, Blitz::DriveReference::MOTOR3_kF, Blitz::DriveReference::TIMEOUT);
    Motors.Motor3->Config_kP(Blitz::DriveReference::SENSOR_INDEX, Blitz::DriveReference::MOTOR3_kP, Blitz::DriveReference::TIMEOUT);
    Motors.Motor3->Config_kI(Blitz::DriveReference::SENSOR_INDEX, Blitz::DriveReference::MOTOR3_kI, Blitz::DriveReference::TIMEOUT);
    Motors.Motor3->Config_kD(Blitz::DriveReference::SENSOR_INDEX, Blitz::DriveReference::MOTOR3_kD, Blitz::DriveReference::TIMEOUT);
    Motors.Motor3->ConfigOpenloopRamp(Blitz::DriveReference::RAMP_RATE);

    Motors.Motor4->ConfigSelectedFeedbackSensor(FeedbackDevice::QuadEncoder, Blitz::DriveReference::SENSOR_INDEX, Blitz::DriveReference::TIMEOUT);
	Motors.Motor4->SetSensorPhase(Blitz::DriveReference::MOTOR1_SENSOR_PHASE);
    Motors.Motor4->ConfigNominalOutputForward(0, Blitz::DriveReference::TIMEOUT);
    Motors.Motor4->ConfigNominalOutputReverse(0, Blitz::DriveReference::TIMEOUT);
    Motors.Motor4->ConfigPeakOutputForward(1, Blitz::DriveReference::TIMEOUT);
    Motors.Motor4->ConfigPeakOutputReverse(-1, Blitz::DriveReference::TIMEOUT);
    Motors.Motor4->Config_kF(Blitz::DriveReference::SENSOR_INDEX, Blitz::DriveReference::MOTOR4_kF, Blitz::DriveReference::TIMEOUT);
    Motors.Motor4->Config_kP(Blitz::DriveReference::SENSOR_INDEX, Blitz::DriveReference::MOTOR4_kP, Blitz::DriveReference::TIMEOUT);
    Motors.Motor4->Config_kI(Blitz::DriveReference::SENSOR_INDEX, Blitz::DriveReference::MOTOR4_kI, Blitz::DriveReference::TIMEOUT);
    Motors.Motor4->Config_kD(Blitz::DriveReference::SENSOR_INDEX, Blitz::DriveReference::MOTOR4_kD, Blitz::DriveReference::TIMEOUT);
    Motors.Motor4->ConfigOpenloopRamp(Blitz::DriveReference::RAMP_RATE);
    
    Motors.Motor1->Set(ControlMode::PercentOutput, 0);
    Motors.Motor2->Set(ControlMode::PercentOutput, 0);
    Motors.Motor3->Set(ControlMode::PercentOutput, 0);
    Motors.Motor4->Set(ControlMode::PercentOutput, 0);

}

void Blitz::Tank::Drive()
{

    if(usePID)
    {
        motorValues[0] = (Input->LeftValue) * Blitz::DriveReference::ENCODER_UNITS_PER_METER / Blitz::DriveReference::SECOND_TO_HUNDERD_MILLISECOND_CONVERSION;
        motorValues[1] = (Input->LeftValue) * Blitz::DriveReference::ENCODER_UNITS_PER_METER / Blitz::DriveReference::SECOND_TO_HUNDERD_MILLISECOND_CONVERSION;
        motorValues[2] = (Input->RightValue) * Blitz::DriveReference::ENCODER_UNITS_PER_METER / Blitz::DriveReference::SECOND_TO_HUNDERD_MILLISECOND_CONVERSION;
        motorValues[3] = (Input->RightValue) * Blitz::DriveReference::ENCODER_UNITS_PER_METER / Blitz::DriveReference::SECOND_TO_HUNDERD_MILLISECOND_CONVERSION;

        double maxMagnitude = 0;

        for (double checkValue : motorValues)
	    {
            checkValue = std::fabs(checkValue);

            if (maxMagnitude < checkValue)
            {
                maxMagnitude = checkValue;
            }
        }

        if (maxMagnitude > Blitz::DriveReference::MAX_SPEED_COUNTS_PER_HUNDRED_MILLISECONDS)
        {
            for (double checkValue : motorValues)
            {
                checkValue = checkValue / maxMagnitude;
            }
        }

        Motors.Motor1->Set(ControlMode::Velocity, motorValues[0] * MotorDirs[0]);
        Motors.Motor2->Set(ControlMode::Velocity, motorValues[1] * MotorDirs[1]);
        Motors.Motor3->Set(ControlMode::Velocity, motorValues[2] * MotorDirs[2]);
        Motors.Motor4->Set(ControlMode::Velocity, motorValues[3] * MotorDirs[3]);
    }
    else
    {
        motorValues[0] = Input->LeftValue / Blitz::DriveReference::MAX_SPEED_METERS_PER_SECOND;
        motorValues[1] = Input->LeftValue / Blitz::DriveReference::MAX_SPEED_METERS_PER_SECOND;
        motorValues[2] = Input->RightValue / Blitz::DriveReference::MAX_SPEED_METERS_PER_SECOND;
        motorValues[3] = Input->RightValue / Blitz::DriveReference::MAX_SPEED_METERS_PER_SECOND;

        double maxMagnitude = 0;

        for (double checkValue : motorValues)
	    {
            checkValue = std::fabs(checkValue);

            if (maxMagnitude < checkValue)
            {
                maxMagnitude = checkValue;
            }
        }

        if (maxMagnitude > 1)
        {
            for (int i = 0; i < NumOfMotors; i++)
            {
                motorValues[i] = motorValues[i] / maxMagnitude;
            }
        }

        Motors.Motor1->Set(ControlMode::PercentOutput, motorValues[0] * MotorDirs[0]);
        Motors.Motor2->Set(ControlMode::PercentOutput, motorValues[1] * MotorDirs[1]);
        Motors.Motor3->Set(ControlMode::PercentOutput, motorValues[2] * MotorDirs[2]);
        Motors.Motor4->Set(ControlMode::PercentOutput, motorValues[3] * MotorDirs[3]);
 
    }
}

void Blitz::Tank::Close()
{
    Motors.Motor1->Set(ControlMode::PercentOutput, 0);
    Motors.Motor2->Set(ControlMode::PercentOutput, 0);
    Motors.Motor3->Set(ControlMode::PercentOutput, 0);
    Motors.Motor4->Set(ControlMode::PercentOutput, 0);
}