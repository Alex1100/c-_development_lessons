#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int var1 = 100, var2 = 1000;
  float c = 9.99;
  double d = 100.7654;
  int a = 123456, b = 345678;
  float var3 = 9.6543432393443345;

  //manipulator methods such as
  //setw (aka setWidth),
  //setfill, and
  //setprecision only work
  //on variables in the same stream
  //and on variables after the method
  //invocation

  cout << setw(25) << setfill('*') << var1;
  cout << endl << setprecision(2) << c << "\n" << endl;

  //example of formatting flags
  cout.unsetf(ios::dec);
  cout.setf(ios::oct);
  cout << "12345 in oct format is = " << a << "\n" << endl;
  cout.unsetf(ios::oct);
  cout.setf(ios::showpos);
  cout << b << endl;
  cout.unsetf(ios::showpos);
  cout.setf(ios::scientific);
  cout << "\n" << var3 << "\n" << endl;

  return 0;

}
