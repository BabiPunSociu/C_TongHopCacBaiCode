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
int main()
{
	nhapmang(a,x,y);
	xuatmang(a,x,y);
}
