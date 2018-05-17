#include <iostream>

using namespace std;

//cin is an object of the istreamclass
//cout is an object of the ostreamclass

int main()
{
  char country_name[50];
  cout << "Enter the country name: ";
  cin.getline(country_name, 50); // can read multi word string
  cout << "Name of the string = " << country_name << "\n" << endl;

  cout << "Hello!, This is A Hello Statement. `cout` is equivalant to console.log in js...\n" << endl;
  int a = 10, b = 100, c, d, num;
  long long fact = 1;
  c = a * b;
  cin >> d;
  cout << "Product = " << c << endl;
  c = a + b;
  cout << "Addition = " << c << endl;
  c = a % b;
  cout << "Remainder = " << c << "\n" << endl;
  cout << "INPUT WAS = " << d << "\n" << endl;

  cout << "What number's factorial should I find? ";
  cin >> num;

  while(num >= 2)
  {
    fact *= num;
    --num;
  }
  cout << endl << "The factorial is " << fact << "\n" << endl;

  return 0;
}
