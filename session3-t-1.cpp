#include <iostream>
using namespace std;

class Playlist
{
public:
    string name;

    Playlist()
    {
        name = "My Favourites";
        cout << "Welcome to My Playlist!" << "\n";
    }
};

int main()
{
    Playlist p;

    cout << "Enter Playlist Name: ";
    cin >> p.name;

    cout << "Playlist Name: " << p.name << "\n";

}

