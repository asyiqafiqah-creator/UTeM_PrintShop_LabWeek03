//Name: ASYIQ AFIQAH BINTI MOHD ASRI   Matric: B032610261
/* Program : Lab 3 Task 1
Purpose : Find the floor area and tiling cost of a room */
#include <iostream>
using namespace std;

const double x=17.0;
int a=17, b=5;
int k, m;
  int main()
  {
      cout << "1." << a / b << endl;
      cout << "2." << a % b << endl;
      cout << "3." << x / b << endl;
      cout << "4." << a / 2 * 2 << endl;
      cout << "5." << 10 + a % b * 3 << endl;
      cout << "6." << (a + b) / 4 << endl;
      cout << "7." << (a + b) / 4.0 << endl;
      cout << "8." << (a > b) << endl;
      cout << "9." << ((a > b) && (b > 10)) << endl;   // note the extra ( )
      cout << "10." << ((a == 17) || (b == 0)) << endl;
      cout << "11." << !(a % 2 == 0) << endl;
      
     k = 5;  m = ++k + 10;
     cout << "12. m=" << m << " k=" << k << endl;
     k = 5;  m = k++ + 10;
     cout << "13. m=" << m << " k=" << k << endl;
     b *= 3 + 1;                                     // do item 14 last
     cout << "14. b=" << b << endl;
  }
