#include<bits/stdc++.h>
using namespace std;
void Do(int n)
{
	int i = 0;
	while (n != 1)
	{
		if (n % 2)
		{
			n = n * 3 + 1;
			n /= 2;
		}
		else n /= 2;
		i++;
	}
	cout << i << endl;
}
int main()
{
	int n;
	cin >> n;
	while (n)
	{
		Do(n);
		cin >> n;
	}
	return 0;
}
