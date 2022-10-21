#include "addnum.h"
#include "addnum.cpp"
#include <iostream>
using namespace std;

int main() {

   LargeInt a("FF", 16);
   LargeInt b("FF", 16);
   cout << a.to_string() << endl;
   cout << b.to_string() << endl;
   b.add(a);    // increase b by a
   cout << b.to_string() << endl; // prints 55
   /*.add(a);    // increase b by a
   cout << b.to_string() << endl; // prints 68*/
   
   return 0;
}