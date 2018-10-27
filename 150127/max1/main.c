#include <stdio.h>
int max(int x ,int y,int z,)
{
int e,g;
if(x>y)
{
	e=x;
}
else
{
	e=y;
}
if(e>z)
{
	g=e;
}
else
{
	g=z;
}
return g;
}
int main()
{
	int a,b,c;
	scanf("%s,%s,%s",&a,&b,&c);
	h=max(a,b,c);
	printf("三者中的最大值为%d\n",h);
	return 0;
}
