#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{
  int numeroFuncionario, totalHoras;
  double salarioPorHora;

  cin >> numeroFuncionario >> totalHoras >> salarioPorHora;

  cout << "NUMBER = " << numeroFuncionario << endl;

  cout << fixed << setprecision(2);

  cout << "SALARY = U$ " << totalHoras* salarioPorHora << endl;

  return 0;
}