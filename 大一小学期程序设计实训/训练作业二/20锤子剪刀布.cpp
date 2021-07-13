#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int win = 0,tie = 0,lose = 0;
	int win1[3],win2[3];
	for (int i = 0; i < 3; i++)
		win1[i] = 0,win2[i] = 0;
	char a,b;
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b;
		if (a == 'C')
		{
			if (b == 'C')
			{
				tie++;
			}
			if (b == 'J')
			{
				win++;
				win1[0]++;
			}
			if (b == 'B')
			{
				lose++;
				win2[2]++;
			}
		}
		if (a == 'J')
		{
			if (b == 'C')
			{
				lose++;
				win2[0]++;
			}
			if (b == 'J')
			{
				tie++;
			}
			if (b == 'B')
			{
				win++;
				win1[1]++;
			}
		}
		if (a == 'B')
		{
			if (b == 'C')
			{
				win++;
				win1[2]++;
			}
			if (b == 'J')
			{
				lose++;
				win2[1]++;
			}
			if (b == 'B')
			{
				tie++;
			}
		}
	}
	cout << win << " " << tie << " " << lose << endl;
	cout << lose << " " << tie << " " << win << endl;
	if (win1[1] > win1[0] && win1[1] > win1[2])
		cout << "J ";
	else if (win1[0] > win1[2])
		cout << "C ";
	else
		cout << "B ";
	if (win2[1] > win2[0] && win2[1] > win2[2])
		cout << "J ";
	else if (win2[0] > win2[2])
		cout << "C ";
	else
		cout << "B ";
	return 0;
}
