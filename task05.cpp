#include <iostream>
using namespace std;

int main()
{
    int size = 10;
    int numbers[size];
    int positive = 0;
    int negative = 0;
    int odd = 0;
    int even = 0;
    int zero = 0;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Numbers in the array: ";
        cin >> numbers[i];
        if (numbers[i] > 0)
        {
            positive++;
        }
        else if (numbers[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }

        if (numbers[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "The Positive numbers are " << positive << endl;
    cout << "The Negative numbers are " << negative << endl;
    cout << "The Odd numbers are " << odd << endl;
    cout << "The Even numbers are " << even << endl;
    cout << "The Zeros numbers are " << zero << endl;

    return 0;
}