#ifndef CARSIMULATION_H_
#define CARSIMULATION_H_

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Vehicle
{
protected:
    double speed;
    int gear;

public:
    string brand;

    Vehicle(string brand);
    virtual ~Vehicle();

    int getGear();
    double getSpeed() const;
};

class Car : public Vehicle
{
public:
    double maxCarSpeed;
    string model;

    Car(string brand, string model);
    virtual ~Car();
    
    void pedal();
    void brake();
    void startEngine();
    void shift(int newGear);
};

#endif