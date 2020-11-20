#include<iostream>
using namespace std;
bool Check(int a)
{
	if (a % 7 == 0) return 1;
	while (a)
	{
		int b = a % 10;
		if (b == 7) return 1;
		a /= 10;
	}
	return 0;
}
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (Check(i)) cout << i << " ";
	}
	return 0;
}
