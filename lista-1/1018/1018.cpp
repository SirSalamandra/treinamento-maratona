#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  int cedulas[7] = {100, 50, 20, 10, 5, 2, 1};
  int cedulasUsadas[7] = {0, 0, 0, 0, 0, 0, 0};
  int troco, valor, i;

  cin >> troco;

  valor = troco;
  i = 0;

  while (valor != 0)
  {
    if (valor - cedulas[i] >= 0)
    {
      valor -= cedulas[i];
      cedulasUsadas[i]++;
    }
    else
    {
      i++;
    }
  }

  cout << troco << endl;

  for (int i = 0; i < sizeof(cedulas) / sizeof(cedulas[0]); i++)
  {
    cout << cedulasUsadas[i] << " nota(s) de R$ " << cedulas[i] << ",00" << endl;
  }

  return 0;
}