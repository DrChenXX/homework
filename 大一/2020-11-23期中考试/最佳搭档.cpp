#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int men[N],women[N];
	for (int i = 0; i < N; i++)
	{
		cin >> men[i];
	}
	for (int i = 0; i < N; i++)
	{
		cin >> women[i];
	}
	sort(men,men + N);
	sort(women,women + N);
	int ans = 0;
	for (int i = 0; i < N; i++)
	{
		ans += abs(men[i] - women[i]);
	}
	cout << ans;
	return 0;
}

