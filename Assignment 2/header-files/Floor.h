#ifndef FLOOR_H
#define FLOOR_H

class Floor {
    private:
        int floor_number;
        bool up_button_pressed, down_button_pressed;

    public:
        Floor(int number);
        void pressUpButton();
        void pressDownButton();
};

#endif
