#include <iostream>

using namespace std;

int main()
{
    int number, factorial = 1;
    cout << "Enter number : ";
    cin >> number;

    if(number < 0) cout << "Enter grater or equal than 0\n";
    else
    {
        for(int i = 1;i<number;i++)
            factorial *= i;
        cout << number << "! = " << factorial;
    }
    return 0;
}
