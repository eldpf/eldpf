#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int q = 0;
	for (int i = 1; i <= n; i++)
	{
		int l = i;
		q = 0;
		while (l != 0)
		{

			q = q+ l % 10;
			l = l/10;
		}
		if (n == i + q)
		{
			break;
		}
		if (i == n )
		{
			q = n;
		}
	}
	cout << n - q;
}