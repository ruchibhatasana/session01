#include <iostream>
using namespace std;

class Product
{
public:
    virtual void upload() = 0;
};

class Electronics : public Product
{
public:
    void upload() override
    {
        cout << "Electronics product uploaded to Flipkart.";
    }
};

class Clothing : public Product
{
public:
    void upload() override
    {
        cout << "Clothing product uploaded to Flipkart.";
    }
};

int main()
{
    Electronics e;
    Clothing c;

    e.upload();
    c.upload();

}
