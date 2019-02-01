#include "Tank.hpp"

using namespace std;

void Blitz::Tank::Initialize(Blitz::Models::TankInput *Input)
{
    InputData = Input;

    Motors->Motor1->Set(0);
    Motors->Motor3->Set(0);
    Motors->Motor2->Set(0);
    Motors->Motor4->Set(0);
}

void Blitz::Tank::Run()
{
    Motors->Motor1->Set(InputData->LeftValue);
    Motors->Motor3->Set(InputData->LeftValue);
    Motors->Motor2->Set(InputData->RightValue);
    Motors->Motor4->Set(InputData->RightValue);
}

void Blitz::Tank::Close()
{
    // Wow Such Empty
}