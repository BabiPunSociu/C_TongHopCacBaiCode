//Bai Tap So FIBONACI --- dung DE QUY
#include<stdio.h>

int FIBONACI(int x)
{
	if(x==0)
		return 0;
	else if(x==1)
		return 1;
	else
		return FIBONACI(x-1)+FIBONACI(x-2);
}

int main()
{
	int n, kq;
	do
		{
			printf("\n\n\n Nhap so tu nhien n: n= ");
			scanf("%d",&n);
		}
	while(n<0);
	kq= FIBONACI(n);
	printf("\n F(%d)= %d",n,kq);
}
