#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin  >> n >> m;
	int ans = 0;
	for (int i = n; i <= m; i++)
	{
		if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
   			ans++;
		}
	}
	cout << ans;
	return 0;
}
