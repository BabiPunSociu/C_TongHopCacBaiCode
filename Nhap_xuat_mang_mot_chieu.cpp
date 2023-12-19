// Nhap vao mang 1 chieu co n phan tu, in cac phan tu ra man hinh, tinh tong cac phan tu trong mang
#include"stdio.h"
int main()
{
	int n,i;
	do
		{
			printf("\n\n\n Nhap so phan tu cua mang: n= ");
			scanf("%d",&n);
		}
	while(n<1);
	
	float a[n],tong=0;
	
	// Nhap vao mang
	for(i=0;i<n;i++)
		{
			printf("\n Nhap gia tri a%d = ",i);
			scanf("%f",&a[i]);
		}
	
	// in mang va tinh tong
	printf("\n Mang vua nhap la: ");
	for(i=0;i<n;i++)
		{
			printf("%.3f   ",a[i]);
			tong+=a[i];
		}
	printf("\n Tong cac phan tu cua mang la: %.3f",tong);
}
