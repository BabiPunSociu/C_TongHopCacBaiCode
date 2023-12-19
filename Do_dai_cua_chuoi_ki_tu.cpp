#include<stdio.h>
#include<string.h>
char x[100];

void nhap_chuoi(char x[])
{
	printf("\n Nhap chuoi ki tu: ");
	gets(x);
	fflush(stdin);
}
void xuat_chuoi(char x[])
{
	printf("\n Chuoi vua nhap la: %s",x);
}
// Ham dem so ki tu: "strlen()"_co san trong thu vien string.h
// Hoac co the tu viet ham dem so ki tu
int my_strlen(char x[])
{
	int dem=0;
	do
		{
			dem++;
		}
	while(x[dem]!='\0');
	return dem;
}
int main()
{
	nhap_chuoi(x);
	xuat_chuoi(x);
	
	// dung ham "strlen()"
	printf("\n\n 1. Dung ham strlen()");
	printf("\n Do dai cua chuoi ki tu la: %d",strlen(x));
	// dung ham my_strlen
	printf("\n\n 2. Dung ham my_strlen() :");
	printf("\n Do dai cua chuoi ki tu la: %d\n\n",my_strlen(x));
}
