#include<stdio.h>
#include<string.h>
void viethoa(char x[])
{
	for(int i=0;i<strlen(x);i++)
	{
		if(97<=x[i]<=122)
			x[i] = x[i] - 32;
	}
}
void vietthuong(char x[])
{
	for(int i=0;i<strlen(x);i++)
	{
		if(65<=x[i]<=90)
			x[i] = x[i] + 32;
	}
}
int main()
{
	int luachon;
	do
	{
		char a[1000];
		printf("\n nhap vao chuoi a: ");
		fflush(stdin);
		gets(a);
		printf("\n Chuoi a: %s",a);
		printf("\n\n Hay lua chon cac chuc nang sau:\n\n 1. Viet hoa toan bo bang ham strupr:\n\n 2.Viet thuong toan bo bang ham strlwr:\n\n 3. Viet hoa toan bo bang ham 'viethoa':\n\n 4.Viet thuong toan bo bang ham 'vietthuong':");
		printf("\\nn 0.Thoat!\n\n lua chon cua ban la: ");
		scanf("%d",&luachon);
		if(luachon==1)
		{
			printf("\n\n Ban da chon thuc hien chuc nang '1.viet hoa toan bo bang ham strupr':");
			printf("\n\n Chuoi a: %s",a);
			strupr(a);
			printf("\n\n chuoi a moi la: %s",a);
			printf("\n\n nhap tiep lua chon cua ban:\n bam '1' de tiep tuc\n bam '0' de ket thuc");
			printf("\n\n lua chon cua ban la: ");
			scanf("%d",&luachon);
			printf("\n---------------------------------------");
		}
		else if(luachon==2)
		{
			printf("\n\n Ban da chon thuc hien chuc nang '2.viet thuong toan bo bang ham strlwr':");
			printf("\n\n Chuoi a: %s",a);
			strlwr(a);
			printf("\n\n chuoi a moi la: %s",a);
			printf("\n\n nhap tiep lua chon cua ban:\n bam '1' de tiep tuc\n bam '0' de ket thuc");
			printf("\n\n lua chon cua ban la: ");
			scanf("%d",&luachon);
			printf("\n---------------------------------------");
		}
		else if(luachon==3)
		{
			printf("\n\n Ban da chon thuc hien chuc nang '3.viet hoa toan bo bang ham 'viethoa'':");
			printf("\n\n Chuoi a: %s",a);
			viethoa(a);
			printf("\n\n chuoi a moi la: %s",a);
			printf("\n\n nhap tiep lua chon cua ban:\n bam '1' de tiep tuc\n bam '0' de ket thuc");
			printf("\n\n lua chon cua ban la: ");
			scanf("%d",&luachon);
			printf("\n---------------------------------------");
		}
		else if(luachon==4)
		{
			printf("\n\n Ban da chon thuc hien chuc nang '4.viet thuong toan bo bang ham 'vietthuong':");
			printf("\n\n Chuoi a: %s",a);
			vietthuong(a);
			printf("\n\n chuoi a moi la: %s",a);
			printf("\n\n nhap tiep lua chon cua ban:\n bam '1' de tiep tuc\n bam '0' de ket thuc");
			printf("\n\n lua chon cua ban la: ");
			scanf("%d",&luachon);
			printf("\n---------------------------------------");
		}
		else
			break;
	}
	while(luachon==1||luachon==2||luachon==3||luachon==4);
}
