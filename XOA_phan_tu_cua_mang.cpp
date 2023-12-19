/*
 xoa phan tu trong mang: 
- theo vi tri cua phan tu trong mang
- theo dieu kien cho truoc ( xoa so chan - le ; xoa so a ; xoa so > a ; ... )
*/
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
		for(int i=0;i<n;i++)
			{
				printf("%.2f  ",x[i]);
			}
	}

void xoatheovitri(float x[], int &n, int vitri)
	{
		for(int i=vitri;i<n;i++)
			{
				x[i]=x[i+1];
			}
		n--;
	}

void xoatheodieukien(float x[],int &n, int k)
	{
		for(int i=0;i<n;i++)
			{
				if(x[i]==k)
					xoatheovitri(x,n,i);
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
	// xoa phan tu cua mang theo vi tri cua phan tu trong mang
	int vitri;
	printf("\n Nhap vi tri muon xoa trong mang: ");
	scanf("%d",&vitri);
	xoatheovitri(a,n,vitri);
	xuat_mang(a,n);
	// xoa phan tu cua mang theo dieu kien
	float k;
	printf("\n Nhap gia tri muon xoa: ");
	scanf("%f",&k);
	xoatheodieukien(a,n,k);
	xuat_mang(a,n);	
}
