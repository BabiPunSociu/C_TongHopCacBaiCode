// in ra tat ca cac so nguyen to nho hon n, n dduoc nhap tu ban phim
#include<stdio.h>
int kt_so_nguyen_to(int x)
	{
		if(x<=1)
			return 0;
		else
			{
				for(int i=2;i<x;i++)
					{
						if(x%i==0)
							return 0;
					}
				return 1;
			}
	}
int main()
	{
		float n;
		printf(" Nhap so nguyen duong n= ");
		scanf("%f",&n);
		printf("\n Gia tri n= %f",n);
		printf("\n cac so nguyen to nho hon n la: ");
		for(int i=1;i<n;i++)
			{
				int ktra = kt_so_nguyen_to(i);
				if(ktra==1) printf(" %d",i);
			}
	}
