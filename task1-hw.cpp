#include <iostream>

using namespace std;

int main()
{
 int num1, num2, num3, num4, num5;
    cout << "Enter 5 numbers: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    if ((num1 > num2) && (num1 > num3) && (num1 > num4) && (num1 > num5))
    {
    cout << "The biggest number is: " << num1;
    }
 else if ((num2 > num1) && (num2 > num3) && (num2 > num4) && (num2 > num5))
    {
    cout << "The biggest number is: " << num2;
    }
 else if ((num3 > num1) && (num3 > num2) && (num3 > num4) && (num3 > num5))
    {
    cout << "The biggest number is: " << num3;
    }
 else if ((num4 > num1) && (num4 > num2) && (num4 > num3) && (num4 > num5))
    {
    cout << "The biggest number is: " << num4;
    }
else
    {
    cout << "The biggest number is: " << num5;
    }
}
