// Doc FILE VAN BAN --> Tinh tong cac phan tu cua mang ---> ghi ket qua vao file
#include"stdio.h"
#include<stdlib.h>
int main()
{
	FILE *ptr;
	ptr = fopen("Docghifile001.txt","r");	// Tao-mo file
	if(ptr==NULL)
	{
		printf("\n Loi. Khong mo duoc file!");
		return(0);
	}
	// Doc file
	int n;
	fscanf(ptr,"%d",&n);
	float a[n];
	for(int i=0;i<n;i++)
	{
		fscanf(ptr,"%f",&a[i]);
	}
	printf("\n n= %d",n);
	for(int i=0;i<n;i++)
	{
		printf("\n a[%d]= %.2f",i+1,a[i]);
	}
	fclose(ptr);// Dong file
	// Tinh tong cac phan tu cua mang
	float tong=0;
	for(int i=0;i<n;i++)
	{
		tong+= a[i];
	}
	
	
	FILE *f;
	f=fopen("Docghifile001.txt","w");
	if(f==NULL)
	{
		printf("\n Loi. Khong mo duoc file!");
		return(0);
	}
	printf("\n Da luu thanh cong !");
	fprintf(f,"%.2f",tong);
	fclose(f);
}
