#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>

class Passenger{
    private:
        int weight, start_floor, destination_floor;
        bool on_elevator;
    public:
        Passenger(int eight, int start, int destination);
        void callElevator(std::string direction);
        void enterElevator();
        void selectFloor();
        void exitElevator();
        void callForHelp();
};

#endif