// tim kiem trong mang hai chieu
// Nhap - xuat mang hai chieu ( ma tran )
#include<stdio.h>
float a[50][50];
int x,y;

void nhapmang( float k[50][50],int &x,int &y)
	{
		do
		{
			printf(" Nhap so hang va so cot cua mang hai chieu: ");
			scanf("%d %d",&x,&y);
		}
		while(x<0||y<0);
		printf("\n Nhap cac gia tri: \n");
		for(int i=0;i<x;i++)
			{
				for(int j=0;j<y;j++)
				{
					printf(" a%d%d = ",i,j);
					scanf("%f",&k[i][j]);
				}
				printf("\n");
			}			
	}
	
void xuatmang (float a[50][50],int x,int y)
	{
		printf("\n ma tran vua nhap la: \n");
		for(int i=0;i<x;i++)
			{
				for(int j=0;j<y;j++)
					{
						printf(" %.2f\t",a[i][j]);
					}
				printf("\n");
			}
	}
	
int timkiem(float a[50][50],int x,int y,float socantim)
	{
		int dem=0;
		for(int i=0;i<x;i++)
			{
				for(int j=0;j<y;j++)
					{
						if(a[i][j]==socantim)
							dem++;
					}
			}
		return dem;
	}
	
void thuchientimkiem(float a[50][50],int x,int y)
	{
		int luachon;
		do
			{
				int kq;
				float socantim;
				printf("\n Nhap so can tim: ");
				scanf("%f",&socantim);
				kq = timkiem(a,x,y,socantim);
				if(kq==0)
					printf("\n KHONG tim thay gia tri %.2f trong ma tran",socantim);
				else
					printf("\n Co %d gia tri %.2f trong ma tran",kq,socantim);
				printf("\n Nhap so bat ki de tiep tuc....hoac nhap 0 de thoat!     ");
				scanf("%d",&luachon);
			}
		while(luachon!=0);
	}
int main()
{
	nhapmang(a,x,y);
	xuatmang(a,x,y);
	thuchientimkiem(a,x,y);
}
