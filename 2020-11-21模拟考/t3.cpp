#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	bool a[210] = {0};
	int pos = 0,
		num = 0,
		rest = n;
	while(rest > 1)
	{
		++pos;
		if (pos > n)
		{
			pos = 1;
		}
		if (!a[pos])
		{
			num++;
		}
		if (num == 7)
		{
			a[pos] = 1;
			num = 0;
			rest--;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		if (!a[i])
		{
			cout << i;
		}
	}
	return 0;
}
