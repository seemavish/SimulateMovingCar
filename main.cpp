#include "carSimulation.h"

#include <iostream>

using namespace std;

int main()
{
    Car *car1;
    car1 = new Car("Renault", "KWID");
    car1->maxCarSpeed = 135;

    cout << "\nCar : " << car1->brand << " --> " << car1->model << endl
         << endl;

    car1->startEngine();
    car1->accelerate();
    car1->accelerate();
    car1->shift(2);
    car1->accelerate();
    car1->accelerate();
    car1->shift(1);
    car1->brake();
    car1->brake();
    car1->brake();

    delete car1;
    return 0;
}