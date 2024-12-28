#include <iostream>
#include "Base.h"
#include "Vehicle.h"
#include "Bus.h"
#include "Truck.h"

using namespace std;

int main() 
{
    cout << "Initial state of the base:\n";
    cout << "People on base: " << Base::people_on_base << "\n";
    cout << "Vehicles on base: " << Base::vehicles_on_base << "\n";
    cout << "Petrol on base: " << Base::petrol_on_base << " liters\n";
    cout << "Goods on base: " << Base::goods_on_base << " tons\n\n";

    Bus bus(50, 60, 100.0, 200.0);
    bus.arrive();
    cout << "Bus arrived:\n";
    cout << "People on base: " << Base::people_on_base << "\n";
    cout << "Vehicles on base: " << Base::vehicles_on_base << "\n";
    cout << "Petrol on base: " << Base::petrol_on_base << " liters\n\n";

    if (bus.leave()) 
    {
        cout << "Bus left the base:\n";
    }
    else 
    {
        cout << "Bus couldn't leave the base:\n";
    }

    cout << "People on base: " << Base::people_on_base << "\n";
    cout << "Vehicles on base: " << Base::vehicles_on_base << "\n";
    cout << "Petrol on base: " << Base::petrol_on_base << " liters\n\n";

    Truck truck(10.0, 20.0, 50.0, 150.0);
    truck.arrive();
    cout << "Truck arrived:\n";
    cout << "People on base: " << Base::people_on_base << "\n";
    cout << "Vehicles on base: " << Base::vehicles_on_base << "\n";
    cout << "Petrol on base: " << Base::petrol_on_base << " liters\n";
    cout << "Goods on base: " << Base::goods_on_base << " tons\n\n";

    if (truck.leave()) 
    {
        cout << "Truck left the base:\n";
    }
    else 
    {
        cout << "Truck couldn't leave the base:\n";
    }

    cout << "People on base: " << Base::people_on_base << "\n";
    cout << "Vehicles on base: " << Base::vehicles_on_base << "\n";
    cout << "Petrol on base: " << Base::petrol_on_base << " liters\n";
    cout << "Goods on base: " << Base::goods_on_base << " tons\n";
}
