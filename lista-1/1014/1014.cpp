#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  int distancia;
  double combustivelGasto;

  cin >> distancia >> combustivelGasto;

  cout << fixed << setprecision(3);

  cout << distancia / combustivelGasto << " km/l" << endl;

  return 0;
}