// Chen mot so vao vi tri k bat ki
#include<stdio.h>
void nhap_mang (float x[], int n)
	{
		printf("\n Nhap cac giai tri cua mang: ");
		for(int i=0;i<n;i++)
			{
				printf("\n a%d = ",i);
				scanf("%f",&x[i]);
			}
	}
void xuat_mang (float x[], int n)
	{
		printf("\n Mang vua nhap la: ");
		for(int i=0;i<n;i++)
			{
				printf("%.2f  ",x[i]);
			}
	}
void hoandoi(float &a,float &b)
	{
		float tg;
		tg = a;
		a = b;
		b = tg;
	}
void chenphantu(float a[],int &n,float k,int vtri)
	{
		n++;
		a[n-1]= k;
		for(int i=n-1;i>vtri;i--)
			{
				hoandoi(a[i],a[i-1]);
			}
	}

int main()
{	
	int n;
	do
		{
			printf(" Nhap so phan tu n (0 < n < 100): n = ");
			scanf("%d",&n);
		}
	while(n<1||n>99);
	float a[n];
	nhap_mang(a,n);
	xuat_mang(a,n);
	float k;
	int vtri;
	printf("\n Nhap gia tri muon chen vao mang: ");
	scanf("%f",&k);
	printf("\n Nhap vi tri muon chen vao mang: ");
	scanf("%d",&vtri);
	chenphantu(a,n,k,vtri);
	xuat_mang(a,n);
}
