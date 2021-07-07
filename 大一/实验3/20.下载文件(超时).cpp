#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int t,n,k,time,speed,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		while(n--)
		{
			scanf("%d%d",&time,&speed);
			if (k - time < 0) break;
			k -= time;
		}
		ans = 0;
		ans += (time - k) * speed;
		while(n--)
		{
			scanf("%d%d",&time,&speed);
			ans += time * speed;
		}
		printf("%d\n",ans);
	}
	return 0;
}
