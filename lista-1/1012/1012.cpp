#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double calculoTriangulo(double a, double b, double c)
{
  return (a * c) / 2;
}

double calculoCirculo(double a, double b, double c)
{
  return 3.14159 * pow(c, 2);
}

double calculoTrapezio(double a, double b, double c)
{
  return ((a + b) * c) / 2;
}

double calculoQuadrado(double a, double b, double c)
{
  return b * b;
}

double calculoRetangulo(double a, double b, double c)
{
  return a * b;
}

int main()
{
  double a, b, c;

  cin >> a >> b >> c;

  cout << fixed << setprecision(3);

  cout << "TRIANGULO: " << calculoTriangulo(a, b, c) << endl;
  cout << "CIRCULO: " << calculoCirculo(a, b, c) << endl;
  cout << "TRAPEZIO: " << calculoTrapezio(a, b, c) << endl;
  cout << "QUADRADO: " << calculoQuadrado(a, b, c) << endl;
  cout << "RETANGULO: " << calculoRetangulo(a, b, c) << endl;

  return 0;
}