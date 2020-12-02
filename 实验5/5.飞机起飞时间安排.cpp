#include<iostream>
using namespace std;
int main()
{
	int n, s;
	cin >> n >> s;
	int time[n],h,m;
	int ansh,ansm;
	for (int i = 0; i < n; i++)
	{
		cin >> h >> m;
		time[i] = 60 * h + m;
	}
	int nowtime;
	for (int i = 0; i < n - 1; i++)
	{
		nowtime = time[i] + s + 1;
		if (nowtime + 1 + s <= time[i + 1])
		{
			ansh = (nowtime / 60) % 24;
			ansm = nowtime % 60;
			break;
		}
	}
	time[n - 1] = time[n - 1] + s + 1;
	if(time[n - 1] + s + 1 <= time[0] + 24 * 60)
	{
		h = (time[n - 1] / 60) % 24;
		m = time[n - 1] % 60;
		if (h < ansh)
		{
			ansh = h;
			ansm = m;
		}
		else if(h == ansh && m < ansm)
		{
			ansh = h;
			ansm = m;
		}
	}
	cout << ansh << " " << ansm;
	return 0;
}
