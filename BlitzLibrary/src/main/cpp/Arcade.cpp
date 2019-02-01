#include "Arcade.hpp"

using namespace std;


void Blitz::Arcade::Initialize(Blitz::Models::ArcadeInput *Input)
{
    InputData = Input;
    
    Motors->Motor1->Set(0);
    Motors->Motor2->Set(0);
    Motors->Motor3->Set(0);
    Motors->Motor4->Set(0);
}

void Blitz::Arcade::Run()
{
    Motors->Motor1->Set(InputData->YValue + InputData->ZValue);
    Motors->Motor2->Set(InputData->YValue + InputData->ZValue);
    Motors->Motor3->Set(InputData->YValue - InputData->ZValue);
    Motors->Motor4->Set(InputData->YValue - InputData->ZValue);
}

void Blitz::Arcade::Close()
{

}

