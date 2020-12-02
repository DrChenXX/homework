#include<iostream>
using namespace std;//这里注意，问题描述应该错了，有n超过24了 
int mon[36] = { 31,28,31,30,31,30,31,31,30,31,30,31,
				31,29,31,30,31,30,31,31,30,31,30,31,
				31,28,31,30,31,30,31,31,30,31,30,31};
int a[30];
int n;
bool judge(int now, int len)
{
	if (len == n)
	{
		return 1; 
	}
	if (mon[now] == a[len])
	{
		return judge((now + 1) % 36, len + 1);
	}
	return 0;
}
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < 35; i++)
	{
		if (judge(i,0))
		{
			cout << "Yes";
			return 0;
		}
	}
	cout << "No";
	return 0;
}
