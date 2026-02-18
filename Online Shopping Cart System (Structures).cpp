// Online Shopping Cart System (Structures).cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;

struct Product
{
    int product_id;
    char product_name[50];
    float product_price;
    int quantity;
};

int main()
{
    Product cart[5];
    float total_bill = 0.0;
    
    for (int index = 0; index < 5; index++)
    {
        cout << " ====== Enter Product Details ====== " << (index + 1) << endl;

        cout << " Enter Product ID: " << endl;
        cin >> cart[index].product_id;

        cin.ignore();

        cout << " Enter Product Name: " << endl;
        cin.getline(cart[index].product_name, 50);

        cout << " Enter Product Price: " << endl;
        cin >> cart[index].product_price;

        cout << " Quantity: " << endl;
        cin >> cart[index].quantity;
    }

    cout << " \n====== Shopping Cart Bill ======\n ";

    for (int index = 0; index < 5; index++)
    {
        float individual_cost = cart[index].product_price * cart[index].quantity;
        total_bill += individual_cost;

        cout << " Product: " << cart[index].product_name << endl;
        cout << " Cost: " << individual_cost << endl;
        cout << "-------------------------------------\n";

        cout << " Final Total Bill: " << total_bill << endl;
    } 

    return 0;
}

