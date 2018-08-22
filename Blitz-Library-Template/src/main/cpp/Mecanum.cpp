#include "Mecanum.hpp"

using namespace std;


void Blitz::Mecanum::Initialize(Blitz::Models::MecanumInput *Input)
{
    InputData = Input;
    
    Motors->Motor1->Set(0);
    Motors->Motor2->Set(0);
    Motors->Motor3->Set(0);
    Motors->Motor4->Set(0);
    
}

 void Blitz::Mecanum::Drive()
 {
    Motors->Motor1->Set(InputData->XValue + InputData->YValue + InputData->ZValue);
    Motors->Motor2->Set(-InputData->XValue + InputData->YValue + InputData->ZValue);
    Motors->Motor3->Set(-InputData->XValue + InputData->YValue - InputData->ZValue);
    Motors->Motor4->Set(InputData->XValue + InputData->YValue - InputData->ZValue);
 }

 void Blitz::Mecanum::Close()
 {

 }