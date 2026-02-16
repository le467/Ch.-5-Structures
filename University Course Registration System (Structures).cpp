// University Course Registration System (Structures).cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;


struct Registeration
{
    int student_id;
    char name[50];
    char course_code[20];
    int credits;
};


int main()
{
    Registeration records[4];
    int total_credits = 0;

    for (int index = 0; index < 4; index++)
    {
        cout << " ====== Enter Student Details ====== " << (index + 1) << endl;

        cout << " Enter Student ID: ";
        cin >> records[index].student_id;

        cin.ignore();

        cout << " Enter Student Name: ";
        cin.getline(records[index].name, 50);

        cout << " Enter Course Code: ";
        cin.getline(records[index].course_code, 20);

        cout << " Enter Student Credits: ";
        cin >> records[index].credits;

        total_credits += records[index].credits;
    }

    cout << " \n =============================== \n ";
    cout << " Course Registeration Details \n ";
    cout << " \n =============================== \n ";


    for (int index = 0; index < 4; index++)
    {
        cout << " Patient " << (index + 1) << ": ";
        cout << " ID: " << records[index].student_id << ", ";
        cout << " Name: " << records[index].name << ", ";
        cout << " Course Code: " << records[index].course_code << ", ";
        cout << " Credits: " << records[index].credits << endl;
    }

    cout << " Total Credits Registered: " << total_credits << endl;

    return 0;
}

