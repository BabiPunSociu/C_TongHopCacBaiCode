// DE QUY----chuyen so tu he thap phan sang he nhi phan
#include<stdio.h>

void he_thap_phan(int x)
	{
		if(x==0) return;
		else
			{
				int r=x%2;
				he_thap_phan(x/2);
				printf("%d",r);
			}
	}

int main()
{
	int n,a[20];
	do
		{
			printf(" Nhap so nguyen n (n>=0): n= ");
			scanf("%d",&n);
		}
	while(n<0);
	
	printf("\n So %d viet duoi dang nhi phan la:  ",n);
	he_thap_phan(n);
}
