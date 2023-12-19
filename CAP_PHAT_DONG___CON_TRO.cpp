#include<stdio.h>
#include"stdlib.h"

float tinhtong(float *ptr,int n)
{
	float tong=0;
	for(int i=0;i<n;i++)
		{
			tong+=*(ptr+i);
		}
	return tong;
}

int main()
{
	int n;
	float *ptr;
	// NHAP MANG
	printf(" nhap so luong phan tu cua mang: n = ");
	scanf("%d",&n);
	ptr = (float*)malloc(n*sizeof(float));
	if( ptr==NULL)
		{
			printf("\n Khong the cap phat du bo nho !");
			return(0);
		}
	printf("\n nhap gia tri cho cac phan tu cua mang:");
	for(int i=0;i<n;i++)
		{
			printf("\n a%d = ",i+1);
			scanf("%f",ptr+i);
		}
	// XUAT MANG
	printf("\n mang da nhap la: ");
	for(int i=0;i<n;i++)
		{
			printf("%.2f\t",*(ptr+i));
		}
	// TINH TONG
	printf("\n Tong cac phan tu cua mang la: %.3f",tinhtong(ptr,n));
	free(ptr);
}
