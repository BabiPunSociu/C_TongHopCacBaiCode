// Kieu du lieu STRUCT 
#include<stdio.h>

struct nhan_vien
	{
		char hoten[30];
		char sinh_nhat[11];
		float chieu_cao;
		float can_nang;
	};
void nhap_du_lieu(struct nhan_vien x[],int &n)
	{
		printf(" Nhap so luong nhan vien: ");
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			{
				fflush(stdin);
				printf("\n Nhap ho va ten cua nhan vien thu %d: ",i+1);
				gets(x[i].hoten);
				fflush(stdin);
				printf("\n Nhap sinh nhat cua %s: ",x[i].hoten);
				gets(x[i].sinh_nhat);
				printf("\n Nhap so do chieu cao cua %s (m): ",x[i].hoten);
				scanf("%f",&x[i].chieu_cao);
				printf("\n Nhap so do can nang cua %s (m): ",x[i].hoten);
				scanf("%f",&x[i].can_nang);
			}
	}
void xuat_du_lieu(struct nhan_vien x[],int n)
	{
		printf("\n\n\n");
		printf("\thoten\t|sinh  nhat|chieu cao(m)|can nang(kg)");
		for(int i=0;i<n;i++)
			{
				printf("\n\n%16s|%10s|%12.2f|%12.2f",x[i].hoten,x[i].sinh_nhat,x[i].chieu_cao,x[i].can_nang);
			}
	}
int main()
{
	int n;
	nhan_vien nv[100];
	nhap_du_lieu(nv,n);
	xuat_du_lieu(nv,n);
}
