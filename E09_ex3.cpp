#include <iostream>
#include <iomanip>

using namespace std;

void analisarValores(int a, int b, int c, int d, int e)
{
	int valores[5] = {a, b, c, d, e};
	int pares = 0, impares = 0, positivos = 0, negativos = 0;

	for (int i = 0; i < 5; i++)
	{
		if (valores[i] % 2 == 0)
			pares++;
		else
			impares++;

		if (valores[i] > 0)
			positivos++;
		else if (valores[i] < 0)
			negativos++;
	}

	cout <<  " Quantidade de numeros pares: " << pares << endl;
	cout <<  " Quantidade de numeros impares: " << impares << endl;
	cout <<  " Quantidade de numeros positivos: " << positivos << endl;
	cout <<  " Quantidade de numeros negativos: " << negativos << endl;
}

int main()
{
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int a, b, c, d, e;
		cin >> a >> b >> c >> d >> e;

		analisarValores(a, b, c, d, e);
	}
	return 0;
}
