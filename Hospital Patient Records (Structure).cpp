// Hospital Patient Records (Structure).cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;

struct Patient
{
    int patient_id;
    char name[50];
    float temperature;
};


    int main()
    {
        Patient patients[5];

        for (int index = 0; index < 5; index++)
        {
            cout << " ====== Patient Details ====== " << (index + 1) << endl;

            cout << " Enter Patient ID: " << endl;
            cin >> patients[index].patient_id;

            cin.ignore();

            cout << " Enter Patient Name: " << endl;
            cin.getline(patients[index].name, 50);

            cout << " Enter Body Temperature: " << endl;
            cin >> patients[index].temperature;

        }

        cout << " \n ==================== \n ";
        cout << "   Patient Records \n ";
        cout << " \n ==================== \n ";


        for (int index = 0; index < 5; index++)
        {
            cout << " Patient " << (index + 1) << ": ";
            cout << " ID: " << patients[index].patient_id << ", ";
            cout << " Name: " << patients[index].name << ", ";
            cout << " Temperature: " << patients[index].temperature << endl;
        }

        return 0;
    }




