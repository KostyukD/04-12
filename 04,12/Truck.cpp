#include "Truck.h"
#include "Base.h"

Truck::Truck(double load, double max_load, double petrol_amount, double tank_volume)
    : Vehicle(petrol_amount, tank_volume), load(load), max_load(max_load) {}

double Truck::getCurrentLoad() const
{
    return load;
}

double Truck::getMaxLoad() const
{
    return max_load;
}

void Truck::arrive()
{
    Base::vehicles_on_base++;
    Base::people_on_base++;
    Base::goods_on_base += load;
}

bool Truck::leave() 
{
    if (Base::petrol_on_base >= (tank_volume - petrol_amount) && Base::goods_on_base >= load) 
    {
        Base::petrol_on_base -= (tank_volume - petrol_amount);
        petrol_amount = tank_volume;
        Base::vehicles_on_base--;
        Base::people_on_base--;
        Base::goods_on_base -= load;
        return true;
    }
    return false;
}
