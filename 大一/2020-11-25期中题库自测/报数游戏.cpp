#include<iostream>
using namespace std;
int main()
{
	int N;
	int a[4] = {0};
	int now = 0;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		if (i % 7 == 0 ||
			i % 10 == 7)
			{
				N++;
				a[now]++;
			}
		now = (now + 1) % 4;
	}
	for (int i = 0; i < 4; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
