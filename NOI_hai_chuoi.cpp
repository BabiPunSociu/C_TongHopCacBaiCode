/* Noi hai chuoi bang 2 cach:
- dung ham strcat trong thu vien string.h
- tu xay dung ham		*/
#include<stdio.h>
#include<string.h>

void nhapdulieu(char a[], int &m,char b[],int &n)
{
	printf("\n nhap du lieu cho chuoi a: ");
	fflush(stdin);
	gets(a);
	m=strlen(a);
	printf("\n nhap du lieu cho chuoi b: ");
	fflush(stdin);
	gets(b);
	n=strlen(b);
}
void xuatdulieu(char a[],int m,char b[],int n,char c[],int l)
{
	printf("\n chuoi a: %s",a);
	printf("\n chuoi b: %s",b);
	printf("\n noi chuoi b vao chuoi a duoc chuoi c\n chuoi c: %s",c);
}
void noichuoi(char a[],int m,char b[],int n,char c[],int &l)
{
	l=m+n;
	for(int i=0;i<m;i++)
		{
			c[i]=a[i];
		}
	for(int j=m;j<l;j++)
		{
			c[j]=b[j-m];
		}
	c[l]='\0';	
}
int main()
{
	int m,n,l,luachon;
	char a[100],b[100],c[200];

	do
		{
			nhapdulieu(a,m,b,n);
			xuatdulieu(a,m,b,n,c,l);
			printf("\n Nhap cac lua chon sau de bat dau:");
			printf("\n Nhap 1 de chon 'noi bang ham strcat':");
			printf("\n Nhap 2 de chon 'noi bang ham noi chuoi tu xay dung':");
			printf("\n Nhap 0 de 'thoat'.");
			printf("\n lua chon cua ban la: ");
			scanf("%d",&luachon);
			if(luachon==1)
				{
					printf("\n Ban da chon chuc nang noi chuoi bang ham strcat: ");
					strcat(a,b);
					printf("\n chuoi a sau khi noi la: %s",a);
					printf("\n Nhap tiep lua chon cua ban:\n lua chon cua ban la: ");
					scanf("%d",&luachon);
				}
			if(luachon==2)
				{
					printf("\n Ban da chon chuc nang noi chuoi 'bang ham tu xay dung':");
					noichuoi(a,m,b,n,c,l);
					xuatdulieu(a,m,b,n,c,l);
					printf("\n Nhap tiep lua chon cua ban:\n lua chon cua ban la: ");
					scanf("%d",&luachon);
				}
			if(luachon==0)
				break;
		}
	while(luachon==1||luachon==2);
}
