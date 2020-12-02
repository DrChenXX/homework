#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int now = 1,
		nowday = 0,
		sum = 0;
	for (int day = 1; day <= n; day++)
	{
		sum += now;
		nowday++;
		if (now == nowday)
		{
			now++;
			nowday = 0;
		}
	}
	cout << sum;
	return 0;
}
