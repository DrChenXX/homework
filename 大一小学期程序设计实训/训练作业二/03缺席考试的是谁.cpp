#include<bits/stdc++.h>
using namespace std;
struct pp{
	string name;
	int times;
};
int add(string nowname, pp now[], int sum)
{
	for (int i = 1; i <= sum; i++)
	{
		if (nowname == now[i].name)
		{
			now[i].times++;
			return sum;
		}
	}
	now[++sum].name = nowname;
	now[sum].times = 1;
	return sum;
}
void Do(int n)
{
	pp now[n + 1];
	string nowname;
	int sum = 0;
	for (int i = 1; i <= 2 * n - 1; i++)
	{
		cin >> nowname;
		sum = add(nowname,now,sum);
	}
	for (int i = 1; i <= sum; i++)
	{
		if (now[i].times%2 == 1)
		{
			cout << now[i].name << endl;
			return;
		}
	}
}
int main()
{
	int n;
	cin >> n;
	while(n)
	{
		Do(n);
		cin >> n;
	}
	return 0;
}
