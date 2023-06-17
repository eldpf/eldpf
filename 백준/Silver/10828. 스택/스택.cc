#include <iostream>
#include <string>
using namespace std;


int a[100001] = {};
int p = 0;
void in();
void push(int x);
void pop();
void size();
void empty();
void top();

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		in();
	}
}

void in()
{
	string a;
	cin >> a;
	if (a[0] == 'p' && a[1] == 'u')
	{
		int k;
		cin >> k;
		push(k);
	}
	else if (a[0] == 'p' && a[1] == 'o')
	{
		pop();
	}
	else if (a[0] == 't')
	{
		top();
	}
	else if (a[0] == 's')
	{
		size();
	}
	else
	{
		empty();
	}
}

void push(int x)
{
	a[p] = x;
	p++;
}
void pop()
{
	if (p == 0)
	{
		cout << -1 << "\n";
	}
	else
	{
		cout << a[p - 1] << "\n";
		a[p - 1] = 0;
		p--;
	}
}
void size()
{
	int l = 0;
	for (int g = 0; g < 100001; g++)
	{
		if (a[g] == 0)
		{
			l = g;
			break;
		}
	}
	cout << l << "\n";
}
void empty()
{
	if (a[0] != 0)
	{
		cout << 0 << "\n";
	}
	else
	{
		cout << 1 << "\n";
	}
}
void top()
{
	if (p == 0)
	{
		cout << -1 << "\n";
	}
	else
	{
		cout << a[p - 1] << "\n";
	}
}