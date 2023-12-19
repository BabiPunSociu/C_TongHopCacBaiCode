/* 
	Nhap vao mot mang co n phan tu (0 < n < 20)
	- in mang vua nhap ra man hinh
	- tinh tong cac phan tu cua mang
	- tinh tong cac phan tu duong trong mang
	- tinh tong cac phan tu âm trong mang
	- tinh trung binh cong cac phan tu trong mang
	- tinh trung binh cong cac phan tu duong trong mang
	- tinh trung binh cong cac phan tu am trong mang
*/
#include<stdio.h>

float tinh_tong (float x[],int n)
	{
		float tong=0;
		for(int i=0;i<n;i++)
			{
				tong+=x[i];
			}
		return tong;
	}

float tinh_tong_duong (float x[],int n)
	{
		float tong=0;
		for(int i=0;i<n;i++)
			{
				if(x[i]>0)
					tong+=x[i];
			}
		return tong;
	}

float tinh_tong_am (float x[],int n)
	{
		float tong=0;
		for(int i=0;i<n;i++)
			{
				if(x[i]<0)
					tong+=x[i];
			}
		return tong;
	}

float tbc (float x[],int n)
	{
		int dem=0;
		float tong=0;
		for(int i=0;i<n;i++)
			{
				tong+=x[i];
				dem+=1;
			}
		return tong/float(dem);
	}

float tbc_duong (float x[],int n)
	{
		int dem=0;
		float tong=0;
		for(int i=0;i<n;i++)
			{
				if(x[i]>0)
					{
						tong+=x[i];
						dem+=1;
					}
			}
		return tong/float(dem);
	}
	
float tbc_am (float x[],int n)
	{
		int dem=0;
		float tong=0;
		for(int i=0;i<n;i++)
			{
				if(x[i]<0)
					{
						tong+=x[i];
						dem+=1;
					}
			}
		return tong/float(dem);
	}
	
int main()
{
	int n,i;
	do
		{
			printf("\n Nhap so phan tu cua mang (0 < n < 20): n= ");
			scanf("%d",&n);
		}
	while(n<=0||n>=20);
	float a[n],tong,tongduong,tongam,tb,tbcduong,tbcam;
	// Nhap mang
	for(i=0;i<n;i++)
		{
			printf("\n Nhap gia tri a%d = ",i);
			scanf("%f",&a[i]);
		}
	// xuat mang
	printf("\n Mang vua nhap la: ");
	for(i=0;i<n;i++)
		{
			printf("%.2f  ",a[i]);
		}
	// tinh tong
	tong = tinh_tong(a, n);
	printf("\n Tong cac phan tu cua mang la: %.2f",tong);
	// tinh tong cac phan tu duong
	tongduong = tinh_tong_duong(a,n);
	printf("\n Tong cac phan tu duong cua mang la: %.2f",tongduong);
	// tinh tong cac phan tu am
	tongam = tinh_tong_am(a,n);
	printf("\n Tong cac phan tu am cua mang la: %.2f",tongam);
	// tinh trung binh cong cac phan tu cua mang
	tb = tbc(a,n);
	printf("\n Trung binh cong cac phan tu cua mang la: %.2f",tb);
	//tinh trung binh cong cac phan tu duong cua mang
	tbcduong = tbc_duong(a,n);
	printf("\n Trung binh cong cac phan tu duong cua mang la: %.2f",tbcduong);
	//tinh trung binh cong cac phan tu am cua mang
	tbcam = tbc_am(a,n);
	printf("\n Trung binh cong cac phan tu am cua mang la: %.2f",tbcam);
}
