// Student Records Using Loop (Structures).cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;

struct Student
{
    int roll_number;
    char name[50];
    float marks;
};

int main()
{
    Student students[3];

    for (int index = 0; index < 3; index++)
    {
        cout << " ====== Student Details ====== " << endl;
        cout << " Enter Student Roll Number: " << endl;
        cin >> students[index].roll_number;

        cin.ignore();

        cout << " Enter Student Name: " << endl;
        cin.getline(students[index].name, 50);

        cout << " Enter Student Marks: " << endl;
        cin >> students[index].marks;

    }

    cout << " \n ==================== \n ";
    cout << "   Student Details: ";
    cout << " \n ==================== \n ";


    for (int index = 0; index < 3; index++)
    {
        cout << " Student Roll Number: " << students[index].roll_number << endl;
        cout << " Student Name: " << students[index].name << " , ";
        cout << " Student Marks: " << students[index].marks << endl;
    }

    return 0;
}

