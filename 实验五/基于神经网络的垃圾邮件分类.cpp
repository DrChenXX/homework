//2020/11/30 实验五 基于神经网络的垃圾邮件分类
#include<iostream>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n,minX,maxX;
		int w,b;
		cin >> n >> minX >> maxX;
		int now1 = 1,now2 = 2;
		for (int i = 0; i < n; i++)
		{
			cin >> w >> b;
			now1 = now1 * w + b;
			now2 = now2 * w + b;
		}
		if (now1 % 2) now1 = 1;
		else now1 = 0;
		if (now2 % 2) now2 = 1;
		else now2 = 0;
		int ans;
		if ((maxX - minX + 1) % 2)
		{
			ans = (maxX - minX + 1) / 2 * (now1 + now2);
			if (maxX % 2)
			{
				ans += now1;
			}
			else
			{
				ans += now2;
			}
		}
		else
		{
			ans = (maxX - minX + 1) / 2 * (now1 + now2);
		}
		cout << (maxX - minX + 1) - ans << " " << ans << endl;
	}
	return 0;
}
