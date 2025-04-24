#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int calcula(int idadeEmDias, int diasBase) 
{
  if (idadeEmDias / diasBase) 
  {
    return idadeEmDias / diasBase;
  }

  return 0;
}

int main() 
{
  int diasAno = 365;
  int diasMes = 30;
  
  int idadeEmDias;

  cin >> idadeEmDias;

  int anos = calcula(idadeEmDias, diasAno);
  idadeEmDias = idadeEmDias - (anos * diasAno);

  int meses = calcula(idadeEmDias, diasMes);
  idadeEmDias = idadeEmDias - (meses * diasMes);

  int dias = calcula(idadeEmDias, 1);

  cout << anos << " ano(s)" << endl;
  cout << meses << " mes(es)" << endl;
  cout << dias << " dia(s)" << endl;
    
  return 0;
}