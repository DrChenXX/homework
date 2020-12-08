#include<iostream>
typedef long long ll;
using namespace std;
ll Do(ll a, ll b)
{
	ll c = a % b;
	if (c == 0)
	{
		return b;
	}
	else
	{
		return Do(b,c);
	}
}
int main()
{
	int T;
	cin >> T;
	string str;
	while (T--)
	{
		cin >> str;
		int lef = str.find('('),
			rig = str.find(')');
		if (lef > str.length())
		{
			ll up = 0,
			   down = 1;
			for (int i = 2; i < str.length(); i++)
			{
				up *= 10;
				up += str[i] - '0';
			}
			while (down < up)
			{
				down *= 10;
			}
			ll yue = Do(up,down);
			cout <<  up/yue << '/' << down/yue << endl;
		}
		else if(lef == 2)
		{
			ll up = 0,
			   down = 9;
			for (int i = lef + 1; i < rig; i++)
			{
				up *= 10;
				up += str[i] - '0';
			}
			while (down < up)
			{
				down *= 10;
				down += 9;
			}
			ll yue = Do(up,down);
			cout << up/yue << '/' << down/yue << endl;
		}
		else
		{
			ll up = 0,
			   down = 1,
			   up_ = 0,
			   down_ = 9;
			for (int i = 2; i < lef; i++)
			{
				up *= 10;
				up += str[i] - '0';
			}
			while (down < up)
			{
				down *= 10;
			}
			for (int i = lef + 1; i < rig; i++)
			{
				up_ *= 10;
				up_ += str[i] - '0';
			}
			while (down_ < up_)
			{
				down_ *= 10;
				down_ += 9;
			}
			for (int i = 1; i < lef - 1; i++)
			{
				down_ *= 10;
			}
			up = up * down_ + up_ * down;
			down *= down_;
			ll yue = Do(up,down);
			cout << up/yue << '/' << down/yue << endl;
		}
	}
	return 0;
}
