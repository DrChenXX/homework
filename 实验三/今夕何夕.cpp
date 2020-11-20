#include<iostream>
using namespace std;
int n;
inline bool judge(int x)
{
    return x % 100 ? x % 4 == 0 : x % 400 == 0;
}
int main()
{
	cin >> n;
	int y,m,d;
	char c;
    while(n--)
	{
		int count = 0;
		cin >> y >> c >> m >> c >> d;
        if(m == 2 && d == 29)
		{
            y += 1;
			judge(y) ? count += 2 : count += 1;
            while( !judge(y) || count % 7 != 0)
			{
				y += 1;
				judge(y) ? count += 2 : count += 1;
			} 
        }
        else if(m == 2 || m == 1)
		{
            judge(y) ? count += 2 : count += 1;
			y += 1;
            while(count % 7 != 0)
			{
				judge(y) ? count += 2 : count += 1;
				y += 1;
			}
        }
        else
		{
            y += 1;
			judge(y) ? count += 2 : count += 1;
            while(count % 7 != 0)
			{
				y += 1;
				judge(y) ? count += 2 : count += 1;
			}
        }
		cout << y << endl;
    }
    return 0;
}
