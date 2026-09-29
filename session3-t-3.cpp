#include <iostream>
using namespace std;

class Movie
{
    string name;
    int year;
    float rating;

public:
    Movie(string n, int y, float r)
    {
        name = n;
        year = y;
        rating = r;
    }

    Movie(const Movie &m)
    {
        name = m.name;
        year = m.year;
        rating = m.rating;
    }

    void display()
    {
        cout << "Movie Name: " << name;
        cout << "Release Year: " << year;
        cout << "Rating: " << rating;
    }
};

int main()
{
    string name;
    int year;
    float rating;

    cout << "Enter Movie Name: ";
    getline(cin, name);

    cout << "Enter Release Year: ";
    cin >> year;

    cout << "Enter Rating: ";
    cin >> rating;

    Movie m1(name, year, rating);

    Movie m2(m1);

    cout << "\n Original Movie";
    m1.display();

    cout << "\n Copied Movie";
    m2.display();

}
