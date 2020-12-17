#include  <iostream>
#include  <cstdlib>
using  namespace  std;
class  matrix
{
private:
        int  rows,  cols;
        int  **p;
public:
        matrix();
        matrix(int  &M,  int  &N);
        matrix(matrix  &A,  int  &&m,  int  &n);
        ~matrix();

        matrix  multi(int  x);      //  ����
        int  det();                      //  ��������ʽ
        void  out();        //�������
        void  input();

        matrix  operator+(matrix  &another);  //���ؼӷ�����ʵ�־������
        matrix  operator*(matrix  &another);  //���س˷�����ʵ�־������
};
matrix::matrix(int  &M,  int  &N)
{
        rows=M,  cols=N;
        p=new  int*[rows];
        for(int  i=0;i<M;i++)
        {
                p[i]=new  int[cols];
        }
}

matrix::matrix(matrix  &A,  int  &&m,  int  &n)      //�Ӿ���A��ɾ����m�е�n�к�õ��µľ���
{
        rows = A.rows - 1;
		cols = A.cols - 1;
		p = new int*[rows];
		for (int i = 0; i < rows; i++)
		{
			p[i] = new int[cols];
		}
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				int x = i, y = j;
				if (x >= m) x++;
				if (y >= n) y++;
				p[i][j] = A.p[x][y];
			}
		}
}

matrix::~matrix()
{
        for(int  i=0;  i<rows;  i++)
                delete[]  p[i];

        delete[]  p;
}

matrix  matrix::multi(int  x)      //  ����
{
        matrix  tmp(rows,  cols);
        for (int i = 0; i < rows; i++)
        {
        	for (int j = 0; j < cols; j++)
        	{
        		tmp.p[i][j] = p[i][j] * x;
			}
		}
        return  tmp;
}

void  matrix::out()        //�������
{
          /*  ������������ݼ��ÿո�ָ�  */
        for (int i = 0; i < rows; i++)
        {
        	for (int j = 0; j < cols; j++)
        	{
        		cout << p[i][j] << " ";
			}
			cout << endl;
		}
}

void  matrix::input()
{
        for(int  i=0;  i<rows;  i++)
                for(int  j=0;  j<cols;  j++)
                        cin>>p[i][j];

}

matrix  matrix::operator+(matrix  &another)  //���ؼӷ�����ʵ�־������
{
        matrix  tmp(rows,  cols);
        /*  �����Ӧλ��Ԫ�����  */
        for (int i = 0; i < rows; i++)
        {
        	for (int j = 0; j < cols; j++)
        	{
        		tmp.p[i][j] = p[i][j] + another.p[i][j];
			}
		}
        return  tmp;
}

matrix  matrix::operator*(matrix  &another)    //���س˷�����ʵ�־������
{
        matrix  tmp(rows,  another.cols);
        for(int  i=0;  i<rows;  i++)
        {
                for(int  j=0;  j<another.cols;  j++)
                {
                      /*  ����A����ĵ�i����B����ĵ�j��Ԫ�ض�Ӧ��˺�֮�ͣ���Ϊ�¾���ĵ�i�е�j��Ԫ�ص�ֵ  */
                      tmp.p[i][j] = 0;
                      for (int k = 0; k < cols; k++)
                      {
                      	tmp.p[i][j] += p[i][k] * another.p[k][j];
					  }
                }
        }
        return  tmp;
}

int  matrix::det()
{
        if  (rows==1)
                return  p[0][0];
        else
        {
                int  result=0,  flag;
                for(int  i=0;  i<cols;  i++)
                {
                        flag=(i%2)?-1:1;
                        matrix  tmp(*this,  0,  i);
                        result=result+flag*p[0][i]*tmp.det();        //  ʹ�ô�������ʽ������ʽ��ֵ,  �ݹ�
                }
                return  result;
        }
}
int  main()
{
        int  M,N;

        //  A������к���
        cin>>M>>N;

        matrix  mA(M,  N);        //����A����

        //  �������ֵ

        mA.input();

        //  ��������ֵ

        int  x;
        cin>>x;

        matrix  mm1=mA.multi(x);

        mm1.out();

        //B������к���
        int  K,  L;
        cin>>K>>L;

        matrix  mB(K,  L);    //����B����
        mB.input();

        /*  �����A�;���B�ĺ�  */

        if  (M==K  &&  N==L)
        {
                matrix  mm2=mA+mB;
                mm2.out();
        }

      /*  �����A�;���B�ĳ˻�����  */
        if  (N==K)
        {
                matrix  mm3=mA*mB;
                mm3.out();
        }

        /*  ����A������ʽ��ֵ  */
        if  (M==N)
                cout<<mA.det()<<endl;

        if  (K==L)
                cout<<mB.det()<<endl;

        return  0;
}

