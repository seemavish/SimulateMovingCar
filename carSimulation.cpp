#include "carSimulation.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int Vehicle::getGear()
{
    return gear;
}

double Vehicle::getSpeed() const
{
    return speed;
}

Vehicle::Vehicle(string brand) : speed(0), gear(0), brand(brand) {}

Vehicle::~Vehicle() {}

void Car::accelerate()
{
    int maxGearSpeed = 0;

    switch (gear)
    {
    case 1:
        maxGearSpeed = 10;
        break;
    case 2:
        maxGearSpeed = 20;
        break;
    case 3:
        maxGearSpeed = 30;
        break;
    case 4:
        maxGearSpeed = 40;
        break;
    case 5:
        maxGearSpeed = maxCarSpeed;
        break;
    default:
        maxGearSpeed = 0;
    }

    if (speed < maxGearSpeed)
    {
        speed += 10;
        cout << "Accelerate --> Car speed : " << getSpeed() << " Gear : " << getGear() << endl;
    }
    else
    {
        std::cout << "Accelerate --> Already at its maximum speed." << endl;
    }
}

Car::Car(string brand, string model) : Vehicle(brand), maxCarSpeed(200), model(model) {}

Car::~Car() {}

void Car::brake()
{
    if (speed > 0)
    {
        speed -= 10;
        cout << "Brake --> Car speed : " << getSpeed() << " Gear : " << getGear() << endl;
    }
    else
    {
        speed = 0;
        cout << "The car has stopped \n";
    }
}

void Car::startEngine(){
    gear = 1;
    cout << "Starting engine" << endl << "Gear set to " << gear << endl;
}

void Car::shift(int newGear)
{
    if (newGear >= 1 && newGear <= 5)
    {
        gear = newGear;

        cout << "Gear has shifted to " << gear << endl;
    }
    else
    {
        cout << "Invalid gear. Enter between 1 and 5." << endl;
    }
}
