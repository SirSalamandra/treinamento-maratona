#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int cedulas[6] = {10000, 5000, 2000, 1000, 500, 200}; // valores em centavos
    int moedas[6] = {100, 50, 25, 10, 5, 1};

    int cedulasUsadas[6] = {0};
    int moedasUsadas[6] = {0};

    double valorDouble;
    cin >> valorDouble;

    int valor = (int)(valorDouble * 100 + 0.5); // converter para centavos com arredondamento

    for (int i = 0; i < 6; i++)
    {
        cedulasUsadas[i] = valor / cedulas[i];
        valor %= cedulas[i];
    }

    for (int i = 0; i < 6; i++)
    {
        moedasUsadas[i] = valor / moedas[i];
        valor %= moedas[i];
    }

    cout << fixed << setprecision(2);

    cout << "NOTAS:" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << cedulasUsadas[i] << " nota(s) de R$ " << setprecision(2) << fixed << cedulas[i] / 100.0 << endl;
    }

    cout << "MOEDAS:" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << moedasUsadas[i] << " moeda(s) de R$ " << setprecision(2) << fixed << moedas[i] / 100.0 << endl;
    }

    return 0;
}

// Tried this code, but working with float values did'nt go well =/

// #include <iostream>
// #include <iomanip>
// #include <cmath>

// using namespace std;

// int main()
// {
//   double cedulas[6] = {100, 50, 20, 10, 5, 2};
//   double moedas[6] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

//   int cedulasUsadas[6] = {0, 0, 0, 0, 0, 0};
//   int moedasUsadas[6] = {0, 0, 0, 0, 0, 0};

//   double valor;

//   cin >> valor;

//   int lengthCedulas = sizeof(cedulas) / sizeof(cedulas[0]);
//   int lengthMoedas = sizeof(moedas) / sizeof(moedas[0]);

//   int i = 0;

//   while (valor >= cedulas[lengthCedulas - 1] && i < lengthCedulas)
//   {
//     if (valor - cedulas[i] >= 0)
//     {
//       valor -= cedulas[i];
//       cedulasUsadas[i]++;
//     }
//     else
//     {
//       i++;
//     }
//   }

//   i = 0;

//   while (valor >= moedas[lengthMoedas - 1] && i < lengthCedulas)
//   {
//     if (valor - moedas[i] >= 0)
//     {
//       valor -= moedas[i];
//       moedasUsadas[i]++;
//     }
//     else
//     {
//       i++;
//     }
//   }

//   cout << fixed << setprecision(2);
    
//   cout << "NOTAS:" << endl;

//   for (int i = 0; i < sizeof(cedulas) / sizeof(cedulas[0]); i++)
//   {
//     cout << cedulasUsadas[i] << " nota(s) de R$ " << cedulas[i] << endl;
//   }

//   cout << "MOEDAS:" << endl;

//   for (int i = 0; i < sizeof(moedas) / sizeof(moedas[0]); i++)
//   {
//     cout << moedasUsadas[i] << " moeda(s) de R$ " << moedas[i] << endl;
//   }
  
//   return 0;
// }