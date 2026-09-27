#include <iostream>

using namespace std;

class Task
{
public:
    string title;
    string status;

    void markDone()
    {
        status = "DONE";
    }

    void display()
    {
        cout << "Task: " << title;
        cout << "Status: " << status;
    }
};

int main()
{
    Task t;

    t.title = "Homework";
    t.status = "Pending";

    t.display();

    t.markDone();

    cout << "\nAfter Done:\n";
    t.display();

}