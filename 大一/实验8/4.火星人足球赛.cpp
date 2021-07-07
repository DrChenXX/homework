#include<iostream>
#include<algorithm>
using namespace std;
struct pp
{
	int time,num;
	char type,team;
};
bool cmp(pp a,pp b)
{
	if (a.time < b.time)
	{
		return 1;
	}
	else if (a.time == b.time)
	{
		if (a.team > b.team)
		{
			return 1;
		}
		else if (a.team == b.team)
		{
			if (a.num > b.num)
			{
				return 1;
			}
			else return 0;
		}
		else return 0;
	}
	else return 0;
}
int main()
{
	string guest,host;
	cin >> host >> guest;
	int n;
	int Guest[100] = {0},Host[100] = {0};
	cin >> n;
	pp a[n];
	for (int i = 0 ; i < n; i++)
	{
		cin >> a[i].time >> a[i].team >> a[i].num >> a[i].type;
	}
	sort(a,a+n,cmp);
	bool flag = 1;
	for (int i = 0; i < n; i++)
	{
		if (a[i].team == 'a')
		{
			if (a[i].type == 'y')
			{
				Guest[a[i].num] += 1;
			}
			else
			{
				Guest[a[i].num] += 2;
			}
			if (Guest[a[i].num] >= 2)
			{
				cout << guest << " " 
					 << a[i].num << " " 
					 << a[i].time << endl;
				flag = 0;
			}
		}
		else
		{
			if (a[i].type == 'y')
			{
				Host[a[i].num] += 1;
			}
			else
			{
				Host[a[i].num] += 2;
			}
			if (Host[a[i].num] >= 2)
			{
				cout << host << " " 
					 << a[i].num << " " 
					 << a[i].time << endl;
				flag = 0;
			}
		}
	}
	if (flag)
	{
		cout << "No Red Card";
	}
	return 0;
}
