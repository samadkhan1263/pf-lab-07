#include <iostream>
using namespace std;

int main()
{
    int size = 0;
    int array[size];
    cout << "Enter the Size of the array";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value to store";
        cin >> array[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}