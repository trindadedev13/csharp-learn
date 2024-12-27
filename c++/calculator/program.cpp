#include <iostream>
#include <cmath>
using namespace std;

int main() {
  float num1, num2;
  cout << "First number: ";
  cin >> num1;
  cout << "Second number: ";
  cin >> num2;

  cout << "Sum         : " << num1 + num2 << endl;
  cout << "Subtraction : " << num1 - num2 << endl;
  cout << "Multiplication: " << num1 * num2 << endl;
  cout << "Division    : " << num1 / num2 << endl;
  cout << "Module      : " << fmod(num1, num2) << endl;
  cout << "Percentage  : " << 100.0 * (num1 / num2) << endl;
  cout << "Average     : " << (num1 + num2) / 2 << endl;

  return 0;
}