#include"stdio.h"
#include"string.h"

void nhapchuoi(char a[])
{
	printf("\n nhap chuoi a: ");
	gets(a);
}

void xuatchuoi(char a1[],char a2[],int ala)
{
	printf("\n\n chuoi a: %s",a1);
	printf("\n\n chuoi copy_%d la: %s",ala,a2);
}
void ham_copy_1(char a[],char b[],int &n)
{
	n= strlen(a);
	for(int i=0;i<=n;i++)
	{
		b[i]=a[i];
	}
}
void ham_copy_2(char a[], char b[])
{
	int i=0;
	do
		{
			b[i]=a[i];
			i++;
		}
	while(a[i]!='\0');
	b[i]='\0';
}
int main()
{
	int n;
	char a[100],copy_a1[100],copy_a2[100],copy_a3[100];
	
	nhapchuoi(a);
	printf("\n\n 1. Dung ham strcpy:");
	strcpy(copy_a1,a);
	printf("\n\n chuoi copy_a1: %s",copy_a1);
	
	printf("\n\n 2. Dung ham copy_1 (tu xay dung):");
	ham_copy_1(a,copy_a2,n);
	xuatchuoi(a,copy_a2,2);
	
	printf("\n\n 3. Dung ham copy_2 (tu xay dung):");
	ham_copy_2(a,copy_a3);
	xuatchuoi(a,copy_a3,3);
}
