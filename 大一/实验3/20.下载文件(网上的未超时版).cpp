#include<iostream> 
using namespace std; 
int main() 
{
	int t, n, k, ti, di;
	cin >> t; 
    int cha, time1 = 0, time2 = 0;
    for (register int i = 1; i <= t; i++)
	{ 
    	cin >> n >> k; 
    	cha = 0, time1 = 0, time2 = 0;
    	for (register int x = 1; x <= n; x++)
		{
			cin >> ti >> di;
			time1 = time1 + ti;
			if (time1 <= k) cha = 0;
			else
			{
				if (time1 > k && time2 <= k)
					cha = cha + (time1 - k) * di;
				else cha = cha + ti * di; 
            }
			time2 = time2 + ti;
		}
		cout << cha << endl;
	}
	return 0; 
}

