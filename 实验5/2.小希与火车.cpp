#include<iostream>
using namespace std;
int main()
{
	int T;
	cin >> T;
	int L, v, l, r, see;
	while (T--)
	{   //����������T--�����м�������T��Ϊ0ʱ��
		//�൱��false���Ӷ�����
		//�������ѭ��T�ε���˼ 
		cin >> L >> v >> l >> r;//������ÿ���໥û�й���
								//������ǲ��������� 
		see = 0;//���¼��� 
		for (int i = v; i <= L; i = i + v) 
		{//�����i�����ж����λ���Ƿ����� 
			if (i < l || i > r)//�ж�i���λ���Ƿ��л� 
			{
				see++;//������1 
			}
		}
		cout << see << endl;
	}
	return 0;
}
