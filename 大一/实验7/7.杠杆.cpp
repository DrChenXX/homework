#include<iostream>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		string a;
		cin >> a;
		int point;
		for (int i = 0; i < a.length(); i++)
		{
			if (a[i] == '^')
			{
				point = i;
				break;
			}
		}
		int left = 0,right = 0;
		for (int i = 1; i <= point; i++)
		{
			if (a[point - i] >= '1' && a[point - i] <= '9')
			{
				left += i * (a[point - i] - '0');
			}
		}
		for (int i = 1; i + point < a.length(); i++)
		{
			if (a[point + i] >= '1' && a[point + i] <= '9')
			{
				right += i * (a[point + i] - '0');
			}
		}
		if (left > right)
		{
			cout << "left" << endl;
		}
		else if (left == right)
		{
			cout << "balance" << endl;
		}
		else
		{
			cout << "right" << endl;
		}
	}
	return 0;
}
