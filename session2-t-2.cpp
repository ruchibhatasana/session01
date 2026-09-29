#include <iostream>
using namespace std;

class Playlist
{
public:
    string name;
    string createdOn;
    bool isPublic;

    void togglePublic()
    {
        isPublic = !isPublic;
    }
};

int main()
{
    Playlist p;

    p.name = "My Songs";
    p.createdOn = "19-09-2026";
    p.isPublic = false;

    cout << "Initial Public: " << p.isPublic << "\n";

    p.togglePublic();
    cout << "After First Toggle: " << p.isPublic << "\n";

    p.togglePublic();
    cout << "After Second Toggle: " << p.isPublic << "\n";

}