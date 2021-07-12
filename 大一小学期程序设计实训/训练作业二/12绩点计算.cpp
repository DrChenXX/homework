#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	int all = 0;
	double GPA = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		all += a[i];
	}
	double now;
	for (int i = 0; i < n; i++)
	{
		cin >> now;
		if(now >= 90) GPA += a[i] * 4.0;
        else if(now >= 85) GPA += a[i] * 3.7;
        else if(now >= 82) GPA += a[i] * 3.3;
        else if(now >= 78) GPA += a[i] * 3.0;
        else if(now >= 75) GPA += a[i] * 2.7;
        else if(now >= 72) GPA += a[i] * 2.3;
        else if(now >= 68) GPA += a[i] * 2.0;
        else if(now >= 64) GPA += a[i] * 1.5;
        else if(now >= 60) GPA += a[i] * 1.0;
        else GPA += a[i] * 0.0;
	}
	double ans = (GPA/all) * 1.0; 
	printf("%.2lf",ans);
	return 0;
}
