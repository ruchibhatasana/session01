#include <iostream>
using namespace std;

class Product
{
    string productName;
    float price;
    float rating;

public:
   
    Product(string name, float p, float r)
    {
        productName = name;
        price = p;
        rating = r;
    }

    void displayInfo()
    {
        cout << "\n Product Details";
        cout << "\n Product Name: " << productName;
        cout << "\n Price: Rs. " << price;
        cout << "\n Rating: " << rating;
    }
};

int main()
{
    string name;
    float price, rating;

    cout << "Enter Product Name: ";
    getline(cin, name);

    cout << "Enter Price: ";
    cin >> price;

    cout << "Enter Rating: ";
    cin >> rating;

    Product p1(name, price, rating);

    p1.displayInfo();

}
