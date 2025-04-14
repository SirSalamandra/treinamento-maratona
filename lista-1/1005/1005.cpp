#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{
  double a, b;

  cin >> a >> b;

  float mediaFinal = (a * 3.5 + b * 7.5) / 11;

  cout << fixed << setprecision(5);

  cout << "MEDIA = " << mediaFinal << endl;

  return 0;
}