#include <iostream>
using namespace std;

//Maximum Occupancy Program
int main() {
    int people;
    int maximumCapacity;
    cout << "\nThis is a program to determine if your room meets the fire code.\n"
         << "Enter the maximum occupancy for the room.\n";
    cin >> maximumCapacity;
    cout << "Enter the number of occupants of the room.\n";
    cin >> people;

    if(people <= maximumCapacity)
    {
        cout <<"\nThe number of occupants does not exceed the legal maximum.\n";
    }

    else
    {
        int diff = people - maximumCapacity;
        cout <<"\nATTENTION: MAXIMUM OCCUPANCY EXCEEDED. THE LAW REQUIRES "
             << diff
             << " PERSONS TO LEAVE THE ROOM IMMEDIATELY\n";
    }

    return 0;
}
