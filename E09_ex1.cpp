#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int x;
	float y;


	cin >> x;

	if(x >= 12)
	{
		y = x * 0.65;
		cout << setprecision(2);
		cout << "Preco da Unidade: R$0.65" << endl;
		cout << "Preco total: R$" << y << endl;
	}
	else
	{
		y = x * 0.80;

		cout << setprecision(2);
		cout << "Preco da Unidade: R$0.80" << endl;
		cout << "Preco total: R$" << y << endl;
	}


	return 0;
}
