#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		long long a,b,k,pos = 0;
		cin >> a >> b >> k;
		if (k % 2)
		{
			pos = (k / 2) * (a - b);
			pos += a;
		}
		else
		{
			pos = (k / 2) * (a - b);
		}
		cout << pos << endl;
	}
	return 0;
}
