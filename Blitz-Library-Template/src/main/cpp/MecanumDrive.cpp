#include "MecanumDrive.hpp"

using namespace std;

using namespace Blitz;
using namespace Blitz::Models;

using Blitz::Mecanum;

void Initialize(MecanumInput *input)
{
    InputData = input;
    
    DriveTrain.Motor1.Set(0);
    DriveTrain.Motor2.Set(0);
    DriveTrain.Motor3.Set(0);
    DriveTrain.Motor4.Set(0);
    
}

 void Drive()
 {
     DriveTrain.Motor1.Set(input.XValue + input.YValue + input.ZValue);
     DriveTrain.Motor2.Set(-input.XValue + input.YValue + input.ZValue);
     DriveTrain.Motor3.Set(-input.XValue + input.YValue - input.ZValue);
     DriveTrain.Motor4.Set(input.XValue + input.YValue - input.ZValue);
 }

 void Close()
 {
     // Wow Such Empty
 }