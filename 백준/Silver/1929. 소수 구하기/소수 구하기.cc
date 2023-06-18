#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;
	if (m == 1)
		m++;
	for (int i = m; i <= n; i++)
	{
		int q;
		q = sqrt(i) + 2;
		for (int k = 2; k < q; k++)
		{
			if (i == k)
			{
				cout << i << "\n";
				break;
			}
			if (i % k == 0)
				break;
			else if (k == q - 1)
			{
				cout << i << "\n";
			}
		}
	}
}