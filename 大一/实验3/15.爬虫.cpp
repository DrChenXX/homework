#include<iostream>
using namespace std;
int main()
{
	int n,u,d;
	do
	{
		cin >> n >> u >> d;
		if (n == 0) break;
		int now = 0;
		int time = 0;
		while (now + u < n)
		{
			time += 2;
			now += (u - d);
		}
		time++;
		cout << time << endl;
	}while(true);
	return 0;
}
