#include <iostream>
#include <string>
using std::cin;
using std::string;
using std::cout;

int main()
{
	int n;
	cin >> n;
	int k = 0;
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		int p;
		cin >> p;
		if (k < p)
		{
			k = p;
		}
		s += p;
	}
	printf("%.6lf", (double)s * 100 / (k*n));
}