//in tat ca cac so chinh phuong nho hon n, n nhap tu ban phim
#include<stdio.h>
#include<math.h>
int tim_so_chinh_phuong(int x)
	{
		if(x>=1)
			{
				for(int i=1;i<=floor((int)sqrt(x));i++)
					{
						if(pow(i,2)==x) return 1;
					}
				}	
	}
int main()
{
	float n;
	printf(" Nhap gia tri n=");
	scanf("%f",&n);
	printf("\n Gia tri n vua nhap la n= %f",n);
	printf("\n cac so chinh phuong nho hon n la: ");
	for(int i=1;i<=(int)n;i++)
		{
			int ktra = tim_so_chinh_phuong(i);
			if(ktra == 1) printf(" %d",i);
		}
}
