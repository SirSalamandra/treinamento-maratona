#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int retornaMaior(int a, int b)
{
  return (a + b + abs(a - b)) / 2;
}

int main()
{
  int a, b, c;

  cin >> a >> b >> c;

  int maior = retornaMaior(a,b);

  maior = retornaMaior(maior, c);

  cout << maior << " eh o maior" << endl;

  return 0;
}