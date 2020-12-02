#include<iostream>
#include<string>
using namespace std;
struct pp
{
	int time;
	string s;	
};
bool left(char a)
{
	if (a == 'q' || a == 'w' || a == 'e' || a == 'r' ||
		a == 't' || a == 'a' || a == 's' || a == 'd' ||
		a == 'f' || a == 'g' || a == 'z' || a == 'x' ||
		a == 'c' || a == 'v' || a == 'b' ||
		a == 'Q' || a == 'W' || a == 'E' || a == 'R' ||
		a == 'T' || a == 'A' || a == 'S' || a == 'D' ||
		a == 'F' || a == 'G' || a == 'Z' || a == 'X' ||
		a == 'C' || a == 'V' || a == 'B')
		{
			return 1;
		}
	return 0;
}
int main()
{
	int n;
	cin >> n;
	pp  a[n];
	int time;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].s;
		for (int j = 0; j < i; j++)
		{
			if (a[i].s == a[j].s)
			{
				a[i].time = a[j].time / 2;
				goto ha;
			}
		}
		time = 2;
		for (int j = 1; j < a[i].s.length(); j++)
		{
			if (left(a[i].s[j]) == left(a[i].s[j - 1]))
			{
				time += 4;
			}
			else
			{
				time += 2;
			}
		}
		a[i].time = time;
		ha: ;
	}
	time = 0;
	for (int i = 0; i < n; i++)
	{
		time += a[i].time;
	}
	cout << time;
	return 0;
}
