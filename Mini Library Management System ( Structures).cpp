// Mini Library Management System ( Structures).cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;

struct Book
{
    int book_id;
    char title[50];
    float price;
};

int main()
{
    Book book_1;

    cout << " Enter Book ID: " << endl;
    cin >> book_1.book_id;

    cin.ignore();

    cout << " Enter Book Title: " << endl;
    cin.getline(book_1.title, 50);


    cout << " Enter Book Price: " << endl;
    cin >> book_1.price;

    cout << " ====== Book Details ======= " << endl;
    cout << " Book ID: " << book_1.book_id <<  endl;
    cout << " Book Title: " << book_1.title << endl;
    cout << " Book Price: " << book_1.price << endl;

    return 0;
}
