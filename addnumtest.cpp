#include "addnum.h"
#include "addnum.cpp"
#include <iostream>
using namespace std;

int main() {
   char s = 'c';
   while (s != 'q') {
      string num1;
      cout << "Enter a number: ";
      cin >> num1;
      if (cin.fail()) {
         return 1;
      }
      int base1;
      cout << "Enter the base of the number: ";
      cin >> base1;
      if (cin.fail()) {
         return 1;
      }
      LargeInt a(num1, base1);

      string num2;
      cout << "Enter another number: ";
      cin >> num2;
      if (cin.fail()) {
         return 1;
      }
      LargeInt b(num2, base1);

      cout << "#1: " << a << endl;
      cout << "#2: " << b << endl;
      LargeInt c = a + b;
      cout << "#1 + #2: " << c << endl;


      cout << "\nPress c to continue or q to quit: ";
      cin >> s;
      cout << endl;
   }
   return 0;
}