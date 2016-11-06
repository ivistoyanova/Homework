#include <iostream>

using namespace std;

int main()
{
int number;
cout << "Enter number: ";
cin >> number;
switch (number)
    {
    case 1:
    case 2:
    case 3: cout << number * 10 << endl;
        break;
    case 4:
    case 5:
    case 6: cout << number * 100 << endl;
        break;
    case 7:
    case 8:
    case 9: cout << number * 1000 << endl;
        break;
    default: cout << "Invaid input." << endl;
}
    return 0;
}
