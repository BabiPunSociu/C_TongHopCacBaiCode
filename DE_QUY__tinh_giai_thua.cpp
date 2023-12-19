// tinh gia thua bang pp de qui
#include<stdio.h>
int giai_thua(int n)
	{
		if(n==0||n==1)
			return 1;
		else
			return n* giai_thua(n-1);
	}

int main()
{
	int n, giaithua;
	// Nhap so nguyen duong n
	do
		{
			printf(" Nhap nguyen duong n: n= ");
			scanf("%d",&n);
		}
	while(n<0);
	// Tinh gia thua bang "ham tinh giai thua"
	giaithua = giai_thua(n);
	printf("\n %d! = %d",n,giaithua);
}
