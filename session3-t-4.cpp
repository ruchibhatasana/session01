#include <iostream>
using namespace std;

class Ticket
{
public:
    Ticket()
    {
        cout << "Ticket booked successfully!";
    }

    ~Ticket()
    {
        cout << "Saving your ticket...";
    }
};

int main()
{
    Ticket *t1 = new Ticket();

    cout << "Ticket is active.";

    delete t1;

}
