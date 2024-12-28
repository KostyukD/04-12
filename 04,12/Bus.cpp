#include "Bus.h"
#include "Base.h"


Bus::Bus(int people, int max_people, double petrol_amount, double tank_volume) 
    : Vehicle(petrol_amount, tank_volume), people(people), max_people(max_people) {}

int Bus::getPeopleCount() const 
{
    return people;
}

int Bus::getMaxPeople() const
{
    return max_people;
}

void Bus::arrive() 
{
    Base::vehicles_on_base++;
    Base::people_on_base += (people + 1);
}

bool Bus::leave()
{
    if (Base::petrol_on_base >= (tank_volume - petrol_amount) && Base::people_on_base >= max_people) {
        Base::petrol_on_base -= (tank_volume - petrol_amount);
        petrol_amount = tank_volume;
        Base::vehicles_on_base--;
        Base::people_on_base -= (people + 1);
        return true;
    }
    return false;
}
