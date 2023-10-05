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

        car1->startEngine();
        car1->pedal();
        car1->pedal();
        car1->shift(3);
        car1->pedal();
        car1->pedal();
        car1->pedal();
        car1->shift(1);
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