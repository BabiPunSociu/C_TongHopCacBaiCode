#include"stdio.h"
#include"string.h"

void nhapchuoi(char x[],char y[])
{
	printf("\n Nhap vao chuoi a: ");
	fflush(stdin);
	gets(x);
	printf("\n Nhap vao chuoi b: ");
	fflush(stdin);
	gets(y);
}
void xuatchuoi(char x[],char y[])
{
	printf("\n\n chuoi a: %s",x);
	printf("\n\n chuoi b: %s",y);
}
int my_so_sanh(char x[],char y[])
{
	int m,n,min,ketqua;
	m=strlen(x);
	n=strlen(y);
	min=m-n>=0?n:m;
	for(int i=0;i<min;i++)
	{
		if(x[i]!=y[i])
			{
				ketqua= x[i]-y[i];
				break;
			}
	}
	return ketqua;
}
void ketqua(int i)
{
	if(i==0)
			printf("\n\n\n Chuoi a bang chuoi b.");
		else if(i<0)
			printf("\n\n\n chuoi a nho hon chuoi b.");
		else
			printf("\n\n\n chuoi a lon hon chuoi b.");
}
int main()
{
	int luachon;
	do
	{
		char a[1000],b[1000];
		nhapchuoi(a,b);
		xuatchuoi(a,b);
		printf("\n\n Hay chon mot trong cac chuc nang sau:");
		printf("\n\n Chon '1' de thuc hien so sanh chuoi bang ham strcmp ");
		printf("\n\n Chon '2' de thuc hien so sanh chuoi bang ham my_so_sanh");
		printf("\n\n Chon '0' de thoat khoi chuong trinh");
		printf("\n\n Lua chon cua ban la: ");
		scanf("%d",&luachon);
		if(luachon==1)
			{
				printf("\n\n Ban da chon chuc nang 1.Thuc hien so sanh chuoi bang ham strcmp: ");
				int i= strcmp(a,b);
				ketqua(i);
				printf("\n\n Bam '1' de tiep tuc hoac '0' de ket thuc: ");
				scanf("%d",&luachon);
				printf("\n--------------------------------");
			}
		else if(luachon==2)
			{
				printf("\n\n Ban da chon chuc nang 2.Thuc hien so sanh chuoi bang ham my_so_sanh: ");
				int i= my_so_sanh(a,b);
				ketqua(i);
				printf("\n\n Bam '1' de tiep tuc hoac '0' de ket thuc: ");
				scanf("%d",&luachon);
				printf("\n--------------------------------");
			}
		else if(luachon==0)
			break;
	}
	while(luachon==1||luachon==2);
}
