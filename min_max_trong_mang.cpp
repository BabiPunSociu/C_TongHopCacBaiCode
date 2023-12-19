// tim min, max cua mang mot chieu
#include<stdio.h>
int min (float x[],int n)
	{
		int i,a=0;
		float min=x[0];
		for(i=0;i<n;i++)
			{
				if(x[i]<min)
					{
						min= x[i];
						a=i;
					}
			}
		return (a);
	}

int max (float x[],int n)
	{
		int i,a=0;
		float max=x[0];
		for(i=0;i<n;i++)
			{
				if(x[i]>max)
					{
						max= x[i];
						a=i;
					}
			}
		return (a);
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
	printf("\n Phan tu co gia tri nho trong mang la: a%d = %f",min(a,n),a[min(a,n)]);
	printf("\n Phan tu co gia tri lon nhat trong mang la: a%d = %f",max(a,n),a[max(a,n)]);
}
