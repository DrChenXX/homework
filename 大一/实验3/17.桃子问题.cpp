#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	n--;
	long long ans = 1;
	while(n--)
	{
		ans++;
		ans *= 2;
	}
	cout << ans;
	return 0;
}
