#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;
    bool isPositive = (num1 < 0 && num2 < 0 && num3 > 0) || (num1 > 0 && num2 < 0 && num3 < 0) || (num1 < 0 && num2 > 0 && num3 < 0);
    bool isNegative = (num1 < 0 && num2 > 0 && num3 > 0) || (num1 > 0 && num2 < 0 && num3 > 0) || (num1 > 0 && num2 > 0 && num3 < 0);
    if (isPositive || ((num1 > 0) && (num2 > 0) && (num3 > 0)))
    {
    cout << "+";
    }
    else if (((num1 <0) && (num2 < 0) && (num3 < 0)) || isNegative)
    {
    cout << "-";
    }
    else
    {
    cout << "0";
    }
    return 0;
}
