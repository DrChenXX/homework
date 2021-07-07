#include  <iostream>
#include  <cstring>
using  namespace  std;
void  reverseStr(char  *s);
int main()
{
	char str[201];
	gets(str);
	reverseStr(str);
	puts(str);
	return 0;
}
void reverseStr(char  *s)
{
	char *p = s, 
		 *q = s;
	while (*q) q++;
	q--;
	while (p < q)
	{
		swap(*p,*q);
		p++;
		q--;
	}
}
