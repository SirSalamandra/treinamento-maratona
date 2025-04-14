#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{
  string nome;
  double salarioFixo, totalVendas, salarioFinal;

  cin >> nome >> salarioFixo >> totalVendas;

  salarioFinal = salarioFixo + (totalVendas * 0.15);

  cout << fixed << setprecision(2);

  cout << "TOTAL = R$ " << salarioFinal << endl;

  return 0;
}