#ifndef ELEVATOR_CONTROL_SYSTEM_H
#define ELEVATOR_CONTROL_SYSTEM_H

#include "Elevator.h"
#include <list>

class ElevatorControlSystem {
    private: 
        std::list<Elevator> elevators;
        int num_floors, num_passengers;
        bool fire, power_outage;

    public:
        ElevatorControlSystem(int num_elevators, int floors, int passengers);
        void assignElevator(int floor, std::string direction);
        void handleFloorRequest(int floor, std::string direction);
        void fireSignal();
        void powerOutageSignal();
};

#endif