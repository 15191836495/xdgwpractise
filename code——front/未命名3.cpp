#include<stdio.h>
int main()
{
	int c,I;
	float j;
	printf("Profit:");
	scanf("%d",&I);
	if(I>1000000) c=11;
	else c=I/100000;
	switch(c)
	{
		case 0: j=I*0.1;break;
		case 1: j=100000*0.1+(I-100000)*0.075;break;
		case 2:
		case 3: j=100000*(0.1+0.075)+(I-200000)*0.05;break;
		case 4:
		case 5: j=100000*0.175+200000*0.05+(I-400000)*0.03;break;
		case 6:
		case 7:
		case 8:
		case 9:
		case 10: j=100000*0.175+200000*0.08+(I-600000)*0.015;break;
		case 11: j=100000*0.175+200000*0.08+400000*0.015+(I-1000000)*0.01;break;
	}
	printf("jiangjin=%f\n",j);
	return 0;
}
