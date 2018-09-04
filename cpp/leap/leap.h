// -*- firestarter: (compile "(cd build/; make)") -*-

#if !defined(LEAP_H)
#define LEAP_H

#include <string>
using namespace std;

namespace leap {

  bool is_leap_year(int year) {
    bool is_leap = false;

    // Not a leap year if not a multiple of 4
    if (0 == year % 4) {
      if (0 == year % 100) {
        if(0 == year % 400) {
          is_leap = true;
        }
      } else {
        // If multiple of 4 but not in turn of a century it's always a leap year
        is_leap = true;
      }
    }

    return is_leap;
  };
}

#endif
