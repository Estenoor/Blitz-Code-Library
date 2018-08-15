#include "Tank.hpp"

using namespace std;
using namespace Blitz;
using namespace Blitz::Models;

using Blitz::Tank;

void Initialize(TankInput *Input)
{
    DriveTrain.Motor1.Set(0);
    DriveTrain.Motor3.Set(0);
    DriveTrain.Motor2.Set(0);
    DriveTrain.Motor4.Set(0);
}

void Run()
{
    DriveTrain.Motor1.Set(Input.LeftValue);
    DriveTrain.Motor3.Set(Input.LeftValue);
    DriveTrain.Motor2.Set(Input.RightValue);
    DriveTrain.Motor4.Set(Input.RightValue);
}

void Close()
{
    // Wow Such Empty
}