#ifndef GUI_H
#define GUI_H

#include <list>
#include <string>

class Simulation;  // Forward declaration

class GUI {
    private:
        std::string user_input, status;
        std::list<std::string> logs;
        int current_timestep;

    public:
        GUI();
        void updateLogs(const std::string log);
        void updateDisplay();
        void handleUserInput(const std::string input);
        void startSimulation();
        void stopSimulation();
        void pauseSimulation();
        void advanceTimeStep();
};

#endif
