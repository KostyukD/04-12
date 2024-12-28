#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle 
{
protected:
    double petrol_amount;
    double tank_volume;

public:
    Vehicle(double petrol_amount, double tank_volume);
    double getTankVolume() const;
    double getPetrolAmount() const;
    virtual void arrive();
    virtual bool leave();
};

#endif
