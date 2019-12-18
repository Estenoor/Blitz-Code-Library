#include "Robot.h"

Robot::Robot() :
  ThreeAxis(0),
  TwoAxis(1),
  Xbox(2)
{

}

void Robot::RobotInit() 
{

}

void Robot::Autonomous() 
{
  
}

void Robot::OperatorControl() 
{
  ThreeAxis.ReCenterXAxis();
  ThreeAxis.ReCenterYAxis();
  ThreeAxis.ReCenterZAxis();
  ThreeAxis.ReCenterDial();

  ThreeAxis.SetXAxisDeadband(.2);
  ThreeAxis.SetYAxisDeadband(.3);
  ThreeAxis.SetZAxisDeadband(.4);
  ThreeAxis.SetDialDeadband(.5);

  
  TwoAxis.ReCenterXAxis();
  TwoAxis.ReCenterYAxis();
  TwoAxis.ReCenterDial();

  TwoAxis.SetXAxisDeadband(.2);
  TwoAxis.SetYAxisDeadband(.3);
  TwoAxis.SetDialDeadband(.4);

  Xbox.ReCenterLeftX();
  Xbox.ReCenterLeftY();
  Xbox.ReCenterRightX();
  Xbox.ReCenterRightY();
  Xbox.ReCenterLeftTrigger();
  Xbox.ReCenterRightTrigger();

  Xbox.SetLeftXDeadband(.2);
  Xbox.SetLeftYDeadband(.3);
  Xbox.SetRightXDeadband(.4);
  Xbox.SetRightYDeadband(.5);
  Xbox.SetLeftTriggerDeadband(.6);
  Xbox.SetRightTriggerDeadband(.7);

  while (IsOperatorControl() && IsEnabled()) {

    ThreeAxis.update();
    TwoAxis.update();
    Xbox.update();

    SmartDashboard::PutBoolean("ThreeAxis Trigger", ThreeAxis.GetTrigger());
    SmartDashboard::PutBoolean("ThreeAxis Button2", ThreeAxis.GetButton2());
    SmartDashboard::PutBoolean("ThreeAxis Button3", ThreeAxis.GetButton3());
    SmartDashboard::PutBoolean("ThreeAxis Button4", ThreeAxis.GetButton4());
    SmartDashboard::PutBoolean("ThreeAxis Button5", ThreeAxis.GetButton5());
    SmartDashboard::PutBoolean("ThreeAxis Button6", ThreeAxis.GetButton6());
    SmartDashboard::PutBoolean("ThreeAxis Button7", ThreeAxis.GetButton7());
    SmartDashboard::PutBoolean("ThreeAxis Button8", ThreeAxis.GetButton8());
    SmartDashboard::PutBoolean("ThreeAxis Button9", ThreeAxis.GetButton9());
    SmartDashboard::PutBoolean("ThreeAxis Button10", ThreeAxis.GetButton10());
    SmartDashboard::PutBoolean("ThreeAxis Button11", ThreeAxis.GetButton11());
    SmartDashboard::PutBoolean("ThreeAxis Button12", ThreeAxis.GetButton12());

    SmartDashboard::PutNumber("ThreeAxis XAxis", ThreeAxis.GetXAxis());
    SmartDashboard::PutNumber("ThreeAxis YAxis", ThreeAxis.GetYAxis());
    SmartDashboard::PutNumber("ThreeAxis ZAxis", ThreeAxis.GetZAxis());
    SmartDashboard::PutNumber("ThreeAxis Dial", ThreeAxis.GetDial());

    SmartDashboard::PutBoolean("TwoAxis Trigger", TwoAxis.GetTrigger());
    SmartDashboard::PutBoolean("TwoAxis Button2", TwoAxis.GetButton2());
    SmartDashboard::PutBoolean("TwoAxis Button3", TwoAxis.GetButton3());
    SmartDashboard::PutBoolean("TwoAxis Button4", TwoAxis.GetButton4());
    SmartDashboard::PutBoolean("TwoAxis Button5", TwoAxis.GetButton5());
    SmartDashboard::PutBoolean("TwoAxis Button6", TwoAxis.GetButton6());
    SmartDashboard::PutBoolean("TwoAxis Button7", TwoAxis.GetButton7());
    SmartDashboard::PutBoolean("TwoAxis Button8", TwoAxis.GetButton8());
    
    SmartDashboard::PutNumber("TwoAxis XAxis", TwoAxis.GetXAxis());
    SmartDashboard::PutNumber("TwoAxis YAxis", TwoAxis.GetYAxis());
    SmartDashboard::PutNumber("TwoAxis Dial", TwoAxis.GetDial());

    SmartDashboard::PutBoolean("Xbox A Button", Xbox.GetAButton());
    SmartDashboard::PutBoolean("Xbox B Button", Xbox.GetBButton());
    SmartDashboard::PutBoolean("Xbox X Button", Xbox.GetXButton());
    SmartDashboard::PutBoolean("Xbox Y Button", Xbox.GetYButton());
    SmartDashboard::PutBoolean("Xbox Left Bumper", Xbox.GetLeftBumper());
    SmartDashboard::PutBoolean("Xbox Right Bumper", Xbox.GetRightBumper());
    SmartDashboard::PutBoolean("Xbox Select Button", Xbox.GetSelectButton());
    SmartDashboard::PutBoolean("Xbox Start Button", Xbox.GetStartButton());
    SmartDashboard::PutBoolean("Xbox Left Stick Button", Xbox.GetLeftStickButton());
    SmartDashboard::PutBoolean("Xbox Right Stick Button", Xbox.GetRightStickButton());

    SmartDashboard::PutNumber("Xbox Left X", Xbox.GetLeftX());
    SmartDashboard::PutNumber("Xbox Left Y", Xbox.GetLeftY());
    SmartDashboard::PutNumber("Xbox Right X", Xbox.GetRightX());
    SmartDashboard::PutNumber("Xbox Right Y", Xbox.GetRightY());
    SmartDashboard::PutNumber("Xbox Left Trigger", Xbox.GetLeftTrigger());
    SmartDashboard::PutNumber("Xbox Right Trigger", Xbox.GetRightTrigger());

    frc::Wait(0.005);
  }
}

void Robot::Test() 
{
  
}

#ifndef RUNNING_FRC_TESTS
START_ROBOT_CLASS(Robot)
#endif