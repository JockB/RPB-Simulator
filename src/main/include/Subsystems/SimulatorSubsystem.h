//SimulatorSubsystem.h
#pragma once

//#include <frc/XboxController.h>
#include <frc/smartdashboard/SendableChooser.h>
//#include <frc2/command/Command.h>

#include "Constants.h"
//#include "commands/ComplexAuto.h"
//#include "commands/DefaultDrive.h"
//#include "commands/DriveDistance.h"
//#include "subsystems/DriveSubsystem.h"
//#include "subsystems/HatchSubsystem.h"
#include "subsystems/SimulatorSubsystem.h"

//double RobotInitMarker; //multiple declarations

class SimulatorSubsystem
{
    public:
        SimulatorSubsystem();
    // Subsystem methods go here.
    //double GetRobotInitMarker(); //doouble declaration
    int GetRobotInitMarker();

};
