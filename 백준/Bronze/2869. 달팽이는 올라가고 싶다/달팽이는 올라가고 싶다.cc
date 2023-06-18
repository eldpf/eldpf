#include <iostream>
using namespace std;

int main()
{
	int a, b, v;
	cin >> a >> b >> v;
	int k = v - a;
	int l = a - b;
	if (k == 0)
	{
		cout << "1";
	}
	else if (k % l == 0)
	{
		cout << k / l + 1;
	}
	else
	{
		int o = k / l;
		cout << o+ 2;
	}
}