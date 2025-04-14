#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{
  int codigoPeca1, totalPecas1;
  double valorPeca1;

  int codigoPeca2, totalPecas2;
  double valorPeca2;

  cin >> codigoPeca1 >> totalPecas1 >> valorPeca1;
  cin >> codigoPeca2 >> totalPecas2 >> valorPeca2;

  cout << fixed << setprecision(2);

  cout << "VALOR A PAGAR: R$ " << totalPecas1 * valorPeca1 + totalPecas2 * valorPeca2 << endl;

  return 0;
}