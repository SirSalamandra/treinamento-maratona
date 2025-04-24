#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

vector<int> compute(int n1, int n2, int d1, int d2, char operation)
{
  switch (operation)
  {
  case '-':
    return {(n1 * d2 - n2 * d1), (d1 * d2)};
    break;

  case '+':
    return {(n1 * d2 + n2 * d1), (d1 * d2)};
    break;

  case '*':
    return {(n1 * n2), (d1 * d2)};
    break;

  case '/':
    return {(n1 * d2), (n2 * d1)};
    break;

  default:
    break;
  }
}

int getMdc(int a, int b)
{
  while (b != 0)
  {
    int r = a % b;
    a = b;
    b = r;
  }

  return abs(a);
}

int main()
{
  int numberOperations;

  cin >> numberOperations;
  cin.ignore();

  for (size_t i = 0; i < numberOperations; i++)
  {
    int n1, d1, n2, d2;
    char barra;
    char operation;

    cin >> n1 >> barra >> d1 >> operation >> n2 >> barra >> d2;

    auto result = compute(n1, n2, d1, d2, operation);

    int mdc = getMdc(result[0], result[1]);

    cout << result[0] << "/" << result[1] << " = " << result[0] / mdc << "/" << result[1] / mdc << endl;
  }

  return 0;
}