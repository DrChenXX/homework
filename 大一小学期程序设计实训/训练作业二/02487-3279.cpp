#include<bits/stdc++.h>
using namespace std;
struct pp{
	int num;
	int times;
};
int add(int nownum,pp all[],int sum)
{
	for (int i = 1; i <= sum; i++)
	{
		if (all[i].num == nownum)
		{
			all[i].times++;
			return sum;
		}
	}
	all[++sum].num = nownum;
	all[sum].times = 1;
	return sum;
}
bool cmp(pp a, pp b)
{
	if (a.num < b.num) return 1;
	return 0; 
}
int main()
{
	int n;
	cin >> n;
	pp all[n + 1];
	int sum = 0;
	string now;
	while (n--)
	{
		cin >> now;
		int flag = 0;
		int nownum = 0;
		for (int i = 0; i < now.length(); i++)
		{
			if (now[i] == '0')
			{
				nownum *= 10;
			}
			if (now[i] == '1')
			{
				nownum *= 10;
				nownum ++;
			}
			if (now[i] == '2' || now[i] == 'A' ||
				now[i] == 'B' || now[i] == 'C')
			{
				nownum *= 10;
				nownum += 2;
			}
			if (now[i] == '3' || now[i] == 'D' ||
				now[i] == 'E' || now[i] == 'F')
			{
				nownum *= 10;
				nownum += 3;
			}
			if (now[i] == '4' || now[i] == 'G' ||
				now[i] == 'H' || now[i] == 'I')
			{
				nownum *= 10;
				nownum += 4;
			}
			if (now[i] == '5' || now[i] == 'J' ||
				now[i] == 'K' || now[i] == 'L')
			{
				nownum *= 10;
				nownum += 5;
			}
			if (now[i] == '6' || now[i] == 'M' ||
				now[i] == 'N' || now[i] == 'O')
			{
				nownum *= 10;
				nownum += 6;
			}
			if (now[i] == '7' || now[i] == 'P' ||
				now[i] == 'R' || now[i] == 'S')
			{
				nownum *= 10;
				nownum += 7;
			}
			if (now[i] == '8' || now[i] == 'T' ||
				now[i] == 'U' || now[i] == 'V')
			{
				nownum *= 10;
				nownum += 8;
			}
			if (now[i] == '9' || now[i] == 'W' ||
				now[i] == 'X' || now[i] == 'Y')
			{
				nownum *= 10;
				nownum += 9;
			}
		}
		//cout << nownum << endl;
		sum = add(nownum,all,sum);
	}
	sort(all + 1, all + sum + 1, cmp);
	for (int i = 1; i <= sum; i++)
	{
		if (all[i].times >= 2)
			cout << all[i].num / 10000 << "-"
				 << all[i].num % 10000 << " "
				 << all[i].times << endl; 
	}
	return 0;
}
