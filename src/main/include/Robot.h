//Robot.h or RBP Simulator
// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <string>

#include <frc/TimedRobot.h>
#include <frc/smartdashboard/SendableChooser.h>
#include <frc/Joystick.h> //RPB Added 31/12
#include <frc2/Command.h>
#include "RobotContainer.h"

using namespace frc;

class Robot : public frc::TimedRobot {
 
 frc::Joystick m_stick{0}; //RPB Added 31/12
 public:
  void RobotInit() override;
  
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  double x = 3;
  //frc::SmartDashboard::PutString("Dashboard-name", value);
  void TeleopPeriodic() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void TestInit() override;
  void TestPeriodic() override;

  

 private:
  frc::SendableChooser<std::string> m_chooser;
  const std::string kAutoNameDefault = "Default";
  const std::string kAutoNameCustom = "My Auto";
  std::string m_autoSelected;
  
  // next 2 from Hatchbot
  frc2::Command* m_autonomousCommand = nullptr;
  RobotContainer m_container;
};
