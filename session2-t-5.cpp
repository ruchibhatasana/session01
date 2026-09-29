#include <iostream>
using namespace std;

class FoodOrder
{
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    FoodOrder(FoodOrder &order)
    {
        orderId = order.orderId;
        restaurantName = order.restaurantName;
        isDelivered = order.isDelivered;
    }

    FoodOrder()
    {
        orderId = 101;
        restaurantName = "Pizza House";
        isDelivered = false;
    }
};

int main()
{
    FoodOrder order1;

    FoodOrder order2(order1);

    cout << "Order ID: " << order2.orderId << "\n";
    cout << "Restaurant: " << order2.restaurantName << "\n";
    cout << "Delivered: " << order2.isDelivered << "\n";

}