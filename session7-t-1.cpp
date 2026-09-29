#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("my_fav_songs.txt");

    file << "1. Kesariya" << endl;
    file << "2. Apna Bana Le" << endl;
    file << "3. Tera Ban Jaunga" << endl;
    file << "4. Ilahi" << endl;
    file << "5. Yaaron" << endl;

    file.close();

    cout << "5 favorite songs written to file successfully.";

}