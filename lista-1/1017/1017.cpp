#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() 
{
  double kmPorLitro = 12;
  double tempoHoras, velocidadeKm;

  cin >> tempoHoras >> velocidadeKm;

  cout << fixed << setprecision(3);

  cout << (tempoHoras * velocidadeKm) / kmPorLitro << endl;

  return 0;
}