#include<bits/stdc++.h>
using namespace std;
int judge(int n)
{
	int ans = 0;
	while (n)
	{
		ans += n % 2;
		n /= 2;
	}
	return ans;
}
void Do()
{
	int i1,i2,i3,i4;
	char a;
	cin >> i1 >> a >> i2 >> a >> i3 >> a >> i4;
	int ans = judge(i1) + judge(i2) + judge(i3) + judge(i4);
	cout << ans << endl;
}
int main()
{
	int n;
	cin >> n;
	while (n--) Do();
	return 0;
}
