#include <iostream>
#include "addnum.h"
#include <cmath>

using namespace std;

LargeInt::LargeInt() {
  base = 0;
}

LargeInt::LargeInt(string &s, int b) {
  for (size_t i = s.size(); i > 0; i--) {
    v.push_back(s[i-1]);
  }
  base = b;
}


LargeInt LargeInt::operator+(LargeInt &l) {
  vector<char> l1 = v;
  vector<char> l2 = l.v;
  vector<char> result;


  size_t i = 0;
  int carry = 0;
  while (i < l1.size() || i < l2.size() || (carry != 0)) {
    int l2num = 0;
    int l1num = 0;

    if (i < l2.size()) {
      if (((static_cast<int>(l2[i]) - '0') >= 0) && ((static_cast<int>(l2[i]) - '0') <= 9)) {
        l2num = static_cast<int>(l2[i]) - '0';
      } else {
        l2num = static_cast<int>(l2[i]) - 'A' + 10;
      }
    }

    if (i < l1.size()) {
      if (((static_cast<int>(l1[i]) - '0') >= 0) && ((static_cast<int>(l1[i]) - '0') <= 9)) {
        l1num = static_cast<int>(l1[i]) - '0';
      } else {
        l1num = static_cast<int>(l1[i]) - 'A' + 10;
      }
    }
    int num = l1num + l2num + carry;
    int digit = 0;
    if (num >= base) {
      digit = num - base;
      carry = 1;
    } else {
      digit = num;
      carry = 0;
    }

    if (digit <= 9) {
      result.push_back('0' + digit);
    } else {
      result.push_back('A' - 10 + digit);
    }
    i++;
  }
  LargeInt res;
  res.base = base;
  res.v = result;
  return res;
}

ostream& operator<<(ostream& os, const LargeInt &l) {
  string s = "";
  for (size_t i = 0; i < l.v.size(); i++) {
    s = l.v[i] + s;
  }
  os << s;
  return os;
}