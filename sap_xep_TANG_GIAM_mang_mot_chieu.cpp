// sap xeo theo thu tu tang dan - giam dan
#include<stdio.h>
void hoandoi(float &a,float &b)
	{
		float tg;
		tg = a;
		a = b;
		b = tg;
	}
void sapxeptang(float x[], int n)
	{
		for(int i=0;i<n-1;i++)
			for(int j=i+1;j<n;j++)
				if(x[i]>x[j])
					hoandoi(x[i],x[j]);
	}
void sapxepgiam(float x[], int n)
	{
		for(int i=0;i<n-1;i++)
			for(int j=i+1;j<n;j++)
				if(x[i]<x[j])
					hoandoi(x[i],x[j]);
	}
int main()
{
	int n;
	do
		{
			printf("\n Nhap so phan tu n cua mang: ( 0 < n < 100): n = ");
			scanf("%d",&n);	
		}
	while(n<1||n>99);
	float a[n];
	printf("\n Nhap cac gia tri cho cac phan tu cua mang: ");
	for(int i=0;i<n;i++)
		{
			printf("\n a%d= ",i);
			scanf("%f",&a[i]);
		}
	
	printf("\n\n Cac phan tu cua mang vua nhap la: ");
	for(int i=0;i<n;i++)
		{
			printf("%.2f  ",a[i]);
		}
		
	printf("\n\n Sap xep theo day tang la: ");
	sapxeptang(a,n);
	for(int i=0;i<n;i++)
		{
			printf("%.2f  ",a[i]);
		}
	
	printf("\n\n Sap xep theo day giam la: ");
	sapxepgiam(a,n);
	for(int i=0;i<n;i++)
		{
			printf("%.2f  ",a[i]);
		}
}
