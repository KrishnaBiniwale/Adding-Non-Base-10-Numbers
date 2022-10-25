#ifndef LARGEINT_H
#define LARGEINT_H
#include <string>
#include <vector>
#include <iostream>

class LargeInt {
public:
    LargeInt();
    LargeInt(std::string &s, int base=10); // convert string to LargeInt
    LargeInt operator+(LargeInt&); // adds LargeInts
    friend std::ostream& operator<<(std::ostream&, const LargeInt&); // prints LargeInt
private:
    int base;
    std::vector<char> v;
};

#endif