#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n + 1][n + 1];
	int now = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			a[i - j + 1][j] = now++;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i + 1; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
