// Dao nguoc mang mot chieu
#include"stdio.h"
int main()
{
	int n;
	do
		{
			printf(" Nhap so phan tu cua mang ( 0 < n < 50): n = ");
			scanf("%d",&n);
		}
	while(n<1||n>49);
	float a[n];
	for(int i=0;i<n;i++)
		{
			printf("\n a%d = ",i);
			scanf("%f",&a[i]);
		}
	printf("\n Mang vua nhap la:  ");
	for(int i=0;i<n;i++)
		{
			printf("%.2f  ",a[i]);
		}
	for(int i=0;i<=n/2;i++)
		{
			float tg;
			tg=a[i];
			a[i]=a[n-1-i];
			a[n-1-i]=tg;
		}
	printf("\n Mang dao nguoc la:  ");
	for(int i=0;i<n;i++)
		{
			printf("%.2f  ",a[i]);
		}
}
