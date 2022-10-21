#ifndef LARGEINT_H
#define LARGEINT_H
#include <string>
#include <vector>

class LargeInt {
public:
    LargeInt(std::string s, int base=10); // convert string to LargeInt
    std::string to_string() const; // get string representation
    void add(LargeInt); // add another LargeInt to this one
private:
    int base;
    std::vector<char> v;
};

#endif