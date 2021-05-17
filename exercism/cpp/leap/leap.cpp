#include "leap.h"

namespace leap {
  bool is_leap_year (int yr)
  {
    if (yr % 4 == 0)
    {
      if (yr % 100 == 0)
      {
        return (yr % 400 == 0) ? true : false;
      }
      else {
        return true;
      }
    }
    else 
    {
      return false;
    }

  }

}  // namespace leap
