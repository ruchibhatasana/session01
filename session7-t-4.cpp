#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream file("wishlist.txt");

    string product;
    float price;

    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter product " << i << " name: ";
        getline(cin, product);

        cout << "Enter price: ";
        cin >> price;
        cin.ignore();

        file << product << " - Rs. " << price;
    }

    file.close();

    ifstream readFile("wishlist.txt");

    cout << "\n--- My Wishlist ---\n";

    string line;
    while (getline(readFile, line))
    {
        cout << line;
    }

    readFile.close();

}
