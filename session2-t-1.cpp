#include <iostream>

using namespace std;

class Playlist
{
public:
    string name;
    string createdOn;
    bool isPublic;
};

int main()
{
    Playlist p;

    p.name = "My Songs";
    p.createdOn = "19-09-2026";
    p.isPublic = true;

    cout << "Playlist Name: " << p.name << "\n";
    cout << "Created On: " << p.createdOn << "\n";
    cout << "Public: " << p.isPublic << "\n";

}
