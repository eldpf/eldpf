#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int arr[100] = {};
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int p = 0;
	for (int i = 0; i < n-2; i++)
	{
		for (int k = i + 1; k < n-1; k++)
		{
			for (int j = k + 1; j < n;  j++)
			{
				int u = arr[i] + arr[k] + arr[j];
				if (u > p && u <= m)
				{
					p = u;
				}
			}
		}
	}
	cout << p;
}