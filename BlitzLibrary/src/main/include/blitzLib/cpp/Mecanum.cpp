#include "Mecanum.hpp"

void Blitz::Mecanum::Drive()
{
    Drive(Blitz::Models::MecanumInput(0, 0, 0));
}

void Blitz::Mecanum::Drive(Blitz::Models::MecanumInput Input)
{

    if(usePID)
    {
        motorValues[0] = (Input.XValue + Input.YValue - Input.ZValue) * Blitz::DriveReference::ENCODER_UNITS_PER_METER / Blitz::DriveReference::SECOND_TO_HUNDERD_MILLISECOND_CONVERSION;
        motorValues[1] = (-Input.XValue + Input.YValue - Input.ZValue) * Blitz::DriveReference::ENCODER_UNITS_PER_METER / Blitz::DriveReference::SECOND_TO_HUNDERD_MILLISECOND_CONVERSION;
        motorValues[2] = (-Input.XValue + Input.YValue + Input.ZValue) * Blitz::DriveReference::ENCODER_UNITS_PER_METER / Blitz::DriveReference::SECOND_TO_HUNDERD_MILLISECOND_CONVERSION;
        motorValues[3] = (Input.XValue + Input.YValue + Input.ZValue) * Blitz::DriveReference::ENCODER_UNITS_PER_METER / Blitz::DriveReference::SECOND_TO_HUNDERD_MILLISECOND_CONVERSION;

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
            for (int i = 0; i < NumOfMotors; i++)
            {
                motorValues[i] = (motorValues[i] / maxMagnitude) * Blitz::DriveReference::MAX_SPEED_COUNTS_PER_HUNDRED_MILLISECONDS;
            }
        }

        Motors.Motor0->Set(ControlMode::Velocity, motorValues[0]);
        Motors.Motor1->Set(ControlMode::Velocity, motorValues[1]);
        Motors.Motor2->Set(ControlMode::Velocity, motorValues[2]);
        Motors.Motor3->Set(ControlMode::Velocity, motorValues[3]);
    }
    else
    {
        motorValues[0] = (Input.XValue + Input.YValue - Input.ZValue) / Blitz::DriveReference::MAX_SPEED_METERS_PER_SECOND;
        motorValues[1] = (-Input.XValue + Input.YValue - Input.ZValue) / Blitz::DriveReference::MAX_SPEED_METERS_PER_SECOND;
        motorValues[2] = (-Input.XValue + Input.YValue + Input.ZValue) / Blitz::DriveReference::MAX_SPEED_METERS_PER_SECOND;
        motorValues[3] = (Input.XValue + Input.YValue + Input.ZValue) / Blitz::DriveReference::MAX_SPEED_METERS_PER_SECOND;

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

        Motors.Motor0->Set(ControlMode::PercentOutput, motorValues[0]);
        Motors.Motor1->Set(ControlMode::PercentOutput, motorValues[1]);
        Motors.Motor2->Set(ControlMode::PercentOutput, motorValues[2]);
        Motors.Motor3->Set(ControlMode::PercentOutput, motorValues[3]);
    }
}

void Blitz::Mecanum::Close()
{
    Motors.Motor0->Set(ControlMode::PercentOutput, 0);
    Motors.Motor1->Set(ControlMode::PercentOutput, 0);
    Motors.Motor2->Set(ControlMode::PercentOutput, 0);
    Motors.Motor3->Set(ControlMode::PercentOutput, 0);
}