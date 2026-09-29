#include <iostream>
using namespace std;

class Playlist
{
public:
    string songs[10];
    int count;

    Playlist()
    {
        count = 0;
    }

    void addSong(string songTitle)
    {
        songs[count] = songTitle;
        count++;
    }
};

int main()
{
    Playlist p;

    p.addSong("Kesariya");
    p.addSong("Apna Bana Le");
    p.addSong("Tum Hi Ho");

    cout << "Songs List:\n";

    for (int i = 0; i < p.count; i++)
    {
        cout << p.songs[i] << "\n";
    }

    
}