#include <iostream>

using namespace std;

class employees {
  long eocode;
  int bsal;
  float hra, pf;

  public:
    void assign(long _eocode, int _bsal, float _hra, float _pf) {
      eocode = _eocode;
      bsal = _bsal;
      hra = _hra;
      pf = _pf;
    };

    float calc_netsalary()
    {
      float nsal = bsal + hra - pf;
      return nsal;
    };
};


int main() {
  employees eo1, eo2, eo3;
  eo1.assign(101, 10000, 1000.11, 900.99);
  eo2.assign(101, 10000, 1000.55, 900.11);
  eo3.assign(101, 10000, 1000, 9000);

  cout <<
  endl <<
  "NET SAL OF FIRST EMPLOYEE IS = " <<
  eo1.calc_netsalary() <<
  endl <<
  "NET SAL OF SECOND EMPLOYEE IS = " <<
  eo2.calc_netsalary() <<
  endl <<
  "NET SAL OF THIRD EMPLOYEE IS = " <<
  eo3.calc_netsalary() <<
  endl;
}
