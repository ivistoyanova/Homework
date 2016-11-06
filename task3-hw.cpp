#include <iostream>

using namespace std;

int main()
{
    int num1, num2, sum = 0;
    cout << "Enter 2 numbers: ";
    cin >> num1 >> num2;
    sum = num1 + num2;
    cout << (sum % 2 == 0 ? sum *= 2 : sum /= 2) << endl;
    return 0;
}
