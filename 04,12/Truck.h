#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle 
{
private:
    double load;
    double max_load;

public:
    Truck(double load, double max_load, double petrol_amount, double tank_volume);
    double getCurrentLoad() const;
    double getMaxLoad() const;
    void arrive() override;
    bool leave() override;
};

#endif
