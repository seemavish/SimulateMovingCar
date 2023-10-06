
#include "carSimulation.h"

#include <iostream>

using namespace std;

int main()
{
    try
    {
        Car *car1;
        car1 = new Car("Renault", "KWID");
        car1->maxCarSpeed = 135;

        cout << "\nCar : " << car1->brand << " --> " << car1->model << endl
             << endl;

        // launch the car
        car1->startEngine();

        // accelerate the car
        car1->pedal();
        car1->pedal();

        // shift gear when speed limit for gear reached
        car1->shift(3);

        // accelerate 
        car1->pedal();
        car1->pedal();

        // shift to lower gear to slow down
        car1->shift(1);

        // press the brake multiple times to stop
        car1->brake();
        car1->brake();
        car1->brake();
        car1->brake();

        delete car1;
    }
    catch (exception &e)
    {
        cout << "Error: " << e.what() << " " << endl;
    }

return 0;
}