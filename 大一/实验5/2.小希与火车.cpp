#include<iostream>
using namespace std;
int main()
{
	int T;
	cin >> T;
	int L, v, l, r, see;
	while (T--)
	{   //这里我们用T--来进行计数，当T变为0时，
		//相当于false，从而结束
		//这里就是循环T次的意思 
		cin >> L >> v >> l >> r;//这里他每组相互没有关联
								//因此我们不必用数组 
		see = 0;//重新计数 
		for (int i = v; i <= L; i = i + v) 
		{//这里的i就是判断这个位置是否有人 
			if (i < l || i > r)//判断i这个位置是否有火车 
			{
				see++;//计数加1 
			}
		}
		cout << see << endl;
	}
	return 0;
}
