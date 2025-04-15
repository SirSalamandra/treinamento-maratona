#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int calculaTempo(int totalSegundos, int totalSegundosTempo)
{
  if (totalSegundos / totalSegundosTempo)
  {
    return totalSegundos / totalSegundosTempo;
  }

  return 0;
}

int main()
{
  int secHoras = 3600;
  int secMinutos = 60;

  int totalSegundos;
  int horas, minutos, segundos;

  cin >> totalSegundos;

  horas = calculaTempo(totalSegundos, secHoras);
  totalSegundos = totalSegundos - (horas * secHoras);

  minutos = calculaTempo(totalSegundos, secMinutos);
  totalSegundos = totalSegundos - (minutos * secMinutos);

  segundos = totalSegundos;

  cout << horas << ":" << minutos << ":" << segundos << endl;

  return 0;
}