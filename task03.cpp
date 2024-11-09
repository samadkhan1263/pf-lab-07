#include <iostream>
using namespace std;

int main()
{
    int size = 7;
    int array[size];
    int integers = 0;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter integers: ";
        cin >> array[i];
        if (array[i] % 5 == 0)
        {
            integers++;
        }
    }
    cout << "The Numbers that are multiples of 5 are " << integers << endl;
    return 0;
}