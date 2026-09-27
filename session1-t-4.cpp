#include <iostream>
using namespace std;

class Task
{
public:
    string title;
    string status;
};

class TaskList
{
public:
    Task task[3];
    int count = 0;

    void addTask(string t)
    {
        task[count].title = t;
        task[count].status = "Pending";
        count++;
    }

    void markTaskDone(int i)
    {
        task[i].status = "DONE";
    }

    void showTasks()
    {
        for(int i = 0; i < count; i++)
        {
            cout << task[i].title;
            cout <<task[i].status;
        }
    }
};

int main()
{
    TaskList list;

    list.addTask("Homework");
    list.addTask("Study");
    list.addTask("Project");

    list.markTaskDone(1);

    list.showTasks();

    
}