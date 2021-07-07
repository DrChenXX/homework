#include<iostream>
#include<algorithm>
using namespace std;
struct Do{
	int type,num,time;
};
bool cmp(Do a,Do b)
{
	if (a.time < b.time)
	{
		return 1;
	}
	else if (a.time == b.time)
	{
		if (a.type > b.type)
		{
			return 1;
		}
		else if (a.type == b.type)
		{
			if (a.num < b.num)
			{
				return 1;
			}
		}
	}
	return 0;
}
int main()
{
	int n,k;
	cin >> n >> k;
	int box[n + 1];
	for (int i = 1; i <= n; i++)
	{
		box[i] = i;
	}
	Do task[2 * k + 1];
	int need,time;
	for (int i = 1; i <= k; i++)
	{
		cin >> need >> time;
		task[2 * i - 1].num = need;
		task[2 * i - 1].type = 1;
		task[2 * i - 1].time = time;
		task[2 * i].time = time;
		cin >> time;
		task[2 * i].num = need;
		task[2 * i].type = 2;
		task[2 * i].time += time;
	}
	sort(task + 1, task + 2 * k + 1, cmp);
	for (int i = 1; i <= 2 * k; i++)
	{
		if (task[i].type == 2)
		{
			for (int j = 1; j <= n; j++)
			{
				if (box[j] == 0)
				{
					box[j] = task[i].num;
					break;
				}
			}
		}
		else
		{
			for (int j = 1; j <= n; j++)
			{
				if (box[j] == task[i].num)
				{
					box[j] = 0;
					break;
				}
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		cout << box[i] << " ";
	}
	return 0;
}
