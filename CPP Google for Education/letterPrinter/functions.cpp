#include "functions.h"


using std::cout;
using std::cin;
using std::endl;
using std::vector;

vector<vector<int> > selector(char letter)
{
  vector<vector<int> > a{
    {0,0,1,0,0},
    {0,1,0,1,0},
    {0,1,0,1,0},
    {1,1,1,1,1},
    {1,0,0,0,1}
  };
  vector<vector<int> > b{
    {1,1,1,1,0},
    {1,0,0,0,1},
    {1,1,1,1,0},
    {1,0,0,0,1},
    {1,1,1,1,0}
  };
  vector<vector<int> > c{
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,0},
    {1,0,0,0,1},
    {0,1,1,1,0}
  };
  vector<vector<int> > d{
    {1,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,0}
  };
  vector<vector<int> > e{
    {1,1,1,1,1},
    {1,0,0,0,0},
    {1,1,1,1,0},
    {1,0,0,0,0},
    {1,1,1,1,1}
  };

  vector<vector<int> > f{
    {1,1,1,1,1},
    {1,0,0,0,0},
    {1,1,1,1,0},
    {1,0,0,0,0},
    {1,0,0,0,0}
  };
  vector<vector<int> > g{
    {0,1,1,1,1},
    {1,0,0,0,0},
    {1,0,1,1,1},
    {1,0,0,0,1},
    {0,1,1,1,0}
  };

  vector<vector<int> > h{
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,1},
    {1,0,0,0,1},
    {1,0,0,0,1}
  };

  vector<vector<int> > i{
    {1,1,1,1,1},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {1,1,1,1,1}  
  };

  vector<vector<int> > j{
    {1,1,1,1,1},
    {0,0,0,1,0},
    {0,0,0,1,0},
    {1,0,0,1,0},
    {0,1,1,0,0}  
  };
  vector<vector<int> > k{
    {1,0,0,0,1},
    {1,0,0,1,0},
    {1,1,1,0,0},
    {1,0,0,1,0},
    {1,0,0,0,1}
  };

  vector<vector<int> > l{
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,1,1,1,1}

  };

  vector<vector<int> > m{
    {1,0,0,0,1},
    {1,1,0,1,1},
    {1,0,1,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1}

  };
  
  vector<vector<int> > n{
    {1,0,0,0,1},
    {1,1,0,0,1},
    {1,0,1,0,1},
    {1,0,0,1,1},
    {1,0,0,0,1}
  };
  vector<vector<int> > o{
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0}
  };
  vector<vector<int> > p{
    {1,1,1,1,0},
    {1,0,0,0,1},
    {1,1,1,1,0},
    {1,0,0,0,0},
    {1,0,0,0,0}
  };
  vector<vector<int> > q{
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,1,0,1},
    {1,0,0,1,1},
    {0,1,1,1,1}
  };
  vector<vector<int> > r{
    {1,1,1,1,0},
    {1,0,0,0,1},
    {1,1,1,1,0},
    {1,0,0,1,0},
    {1,0,0,0,1}
  };
  vector<vector<int> > s{
    {0,1,1,1,1},
    {1,0,0,0,1},
    {0,1,1,1,0},
    {0,0,0,0,1},
    {1,1,1,1,0}
  };
  vector<vector<int> > t{
    {1,1,1,1,1},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0}  
  };
  vector<vector<int> > u{
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0}
  };
  vector<vector<int> > v{
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,0,1,0},
    {0,0,1,0,0}
  };
  vector<vector<int> > w{
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,1,0,1},
    {0,1,0,1,0}
  };
  vector<vector<int> > x{
    {1,0,0,0,1},
    {0,1,0,1,0},
    {0,0,1,0,0},
    {0,1,0,1,0},
    {1,0,0,0,1}
  };
  vector<vector<int> > y{
    {1,0,0,0,1},
    {0,1,0,1,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0}
  };
  vector<vector<int> > z{
    {1,1,1,1,1},
    {0,0,0,1,0},
    {0,0,1,0,0},
    {0,1,0,0,0},
    {1,1,1,1,1}
  };

  switch(letter){
    case 'A':
      return a;
    case 'B':
      return b;
    case 'C':
      return c;
    case 'D':
      return d;
    case 'E':
      return e;
    case 'F':
      return f;
    case 'G':
      return g;
    case 'H':
      return h;    
    case 'I':
      return i;
    case 'J':
      return j;
    case 'K':
      return k;
    case 'L':
      return l;
    case 'M':
      return m;
    case 'N':
      return n;
    case 'O':
      return o;
    case 'P':
      return p;
    case 'Q':
      return q;
    case 'R':
      return r;
    case 'S':
      return s;
    case 'T':
      return t;
    case 'U':
      return u;
    case 'V':
      return v;
    case 'W':
      return w;
    case 'X':
      return x;    
    case 'Y':
      return y;
    case 'Z':
      return z;
    default:
      return a;     
  }
}

void plotter(char letter, vector<vector<int> > coordinates)
{
  for(int i = 0 ; i < 5 ; i++)
  {
    for ( int j = 0 ; j < 5 ; j++)
    {
      char print = coordinates[i][j]==1 ? letter:' ';
      cout<<print;
    }
    cout<<"\n";
  }
}

std::string getString()
{
  std::string str_to_print;
  cout<<"Enter string to print: ";
  std::getline(cin,str_to_print);
  return str_to_print;
}