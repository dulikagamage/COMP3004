#ifndef ELEVATOR_H
#define ELEVATOR_H

#include "Passenger.h"
#include <list>
#include <string>

class Elevator {
    private:
        int current_floor, max_capacity, current_weight;
        std::list<int> destinations;
        std::list<Passenger> passengers;
        std::string direction, state;
        bool door_blocked;
    
    public:
        Elevator(int max_capacity);
        void addPassenger(Passenger passenger);
        void removePassenger(Passenger passenger);
        void moveUp();
        void moveDown();
        void openDoor();
        void closeDoor();
        void updateDisplay(std::string message);
        void ringBell();
        void audioWarning(std::string sound_type);
        void doorBlockedSignal();
        void overloadSignal();
        void helpSignal();
};

#endif