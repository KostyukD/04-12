#ifndef BUS_H
#define BUS_H

#include "Vehicle.h"

class Bus : public Vehicle 
{
private:
    int people;
    int max_people;

public:
    Bus(int people, int max_people, double petrol_amount, double tank_volume);
    int getPeopleCount() const;
    int getMaxPeople() const;
    void arrive() override;
    bool leave() override;
};

#endif
