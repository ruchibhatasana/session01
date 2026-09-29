#include <iostream>
#include <fstream>
using namespace std;

class Playlist
{
    string playlistName;

public:
    Playlist(string name)
    {
        playlistName = name;
        cout << "Playlist created: " << playlistName;
    }

    ~Playlist()
    {
        ofstream file("autosave.txt");

        file << playlistName;

        file.close();

        cout << "Playlist auto-saved!";
    }
};

int main()
{
    string name;

    cout << "Enter Playlist Name: ";
    getline(cin, name);

    Playlist p1(name);

    cout << "Playlist is active.";
}