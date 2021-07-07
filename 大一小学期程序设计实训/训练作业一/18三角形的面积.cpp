#include<bits/stdc++.h>
using namespace std;
int main()
{
	double x1,x2,x3,y1,y2,y3;
	while (1)
	{
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		if (x1 == 0 && x2 == 0 && x3 == 0 &&
			y1 == 0 && y2 == 0 && y3 == 0) break;
		//S=(1/2)*(x1y2+x2y3+x3y1-x1y3-x2y1-x3y2)
		double ans = abs(0.5 * (x1*y2+x2*y3+x3*y1-x1*y3-x2*y1-x3*y2));
		printf("%.6lf\n",ans);
	}
}
