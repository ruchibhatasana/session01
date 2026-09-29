#include <iostream>
using namespace std;

class FoodOrder
{
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    void markDelivered()
    {
        isDelivered = true;
        cout << "Order Delivered Successfully!" << "\n";
    }
};

int main()
{
    FoodOrder order;

    order.orderId = 101;
    order.restaurantName = "Pizza House";
    order.isDelivered = false;

    order.markDelivered();

    cout << "Order ID: " << order.orderId << "\n";
    cout << "Restaurant: " << order.restaurantName << "\n";
    cout << "Delivered: " << order.isDelivered << "\n";

}
