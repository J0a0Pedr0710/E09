#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int x;

	cin >> x;


	if(x < 0 || x > 50)
	{
		return 1;
	}

	if(x == 0)
	{
		return -1;
	}

	else
	{
		for (int i = x - 1; i < x; i--)
		{
			cout << "Resto da divisao de " << x << " por " << i << ": " << (x % i) << endl;
		}
	}
	return 0;
}
