#include  <iostream>
void  qsort(int  arr[],  int  low,  int  high);
void  Swap(int  *a,  int  *b);
void  arrange(int  a[],  int  n);
using  namespace  std;
int  main()
{
    int  n;
    cin>>n;
    int a[n]; 
	for(int  i=0;  i<n;  i++)
	{
		cin>>a[i];
	}
	arrange(a,n);
	for(int  i=0;  i<n;  i++)
		cout<<a[i]<<"  ";
    return  0;
}
void  arrange(int  a[],  int  n)
{
	int  *p=a,  *q=a+n-1;
	while(p<q)
	{
		while (*p % 2 != 0 && p < q && p <= a + n - 1)
		{
			p++;
		}
		while (*q % 2 == 0 && p < q && q >= a)
		{
			q--;
		}
		Swap(p,q);
	}
	int  m;
	if  (p==q)
		m=*p%2?(p-a):(p-a-1);
	else
		m=q-a;
	qsort(a,0,m);
	qsort(a,m+1,n-1);
}

void  qsort(int  *p,  int  low,  int  high)
{
    if  (high<=low)  return;
	int  key=p[low];
	int  i=low,  j=high+1;
	while(1)
	{
		while(p[++i]  <  key)
		{
			if  (i==high)  break;
		}
		while(p[--j]  >  key)
		{
			if  (j==low)  break;
		}
		if  (i>=j)  break;
			Swap(&p[i],  &p[j]);
	}
	Swap(&p[low],  &p[j]);
	qsort(p,  low,  j-1);
	qsort(p,  j+1,  high);
}

void  Swap(int  *a,  int  *b)
{
	int  temp=*a;
	*a=*b;
	*b=temp;
} 
