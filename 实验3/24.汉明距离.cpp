#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cin >> x >> y;
	int ans = 0;
	while (x != 0 || y != 0)
	{
		if (x % 2 != y % 2)
		{
			ans++;
		}
		x = x / 2;
		y = y / 2;
	}
	cout << ans;
	return 0;
}

