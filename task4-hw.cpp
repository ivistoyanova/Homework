#include <iostream>

using namespace std;

int main()
{
 int num1, num2, biggernum;
 cout << "Enter 2 numbers: ";
 cin >> num1 >> num2;
 num1 > num2 ? biggernum = num1 : biggernum = num2;
 biggernum *= -1;
 cout << biggernum;
  return 0;
}
