#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n],b[n];
	cin >> a[0];
	b[0] = a[0];
	for (int i = 1; i < n; i++)
	{
		cin >> a[i];
		b[i] = b[i - 1] + a[i];
	}
	int Max = -10000000;
	for (int i = 0; i < n; i++)
	{
		Max = max(Max , a[i]);
		for (int j = i + 1; j < n; j++)
		{
			Max = max(Max, b[j] - b[i]);
		}
	}
	cout << Max;
	return 0;
}

