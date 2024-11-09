#include <iostream>
using namespace std;

int main()
{
    int size = 10;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter numbers in the array: ";
        cin >> array[i];
    }
    for (int i = 9; i >= 0; i--)
    {
        cout << array[i] << endl;
    }

    return 0;
}