#include<stdio.h>
int main()
{
	char a='A',b='B',c='C',d='D',e='E';
	int x;
	scanf("%d",&x);
	if(x>90&&x<=100)
	  printf("%c\n",a);
	else
	  if(x>=80&&x<90)
	    printf("%c\n",b);
	    else
	      if(x>=70&&x<80)
	        putchar(c);
	        else
	          if(x>=60&&x<70)
	            putchar(d);
	            else
	            if(x<60)
	              putchar(e);
	return 0;
}
