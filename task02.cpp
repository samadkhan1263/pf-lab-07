#include <iostream>
using namespace std;

int main()
{
    int size = 10;
    int hours = 0;

    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter hours studied: ";
        cin >> array[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Total Hours Studied by student " << i + 1 << ": " << array[i] << endl;
    }
    for (int i = 0; i < size; i++)
    {
        if (array[i] > hours)
        {
            hours = array[i];
        }
    }
    cout << "Most hours studied by a student " << hours;

    return 0;
}