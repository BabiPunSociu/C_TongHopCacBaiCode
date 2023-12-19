// struct bang diem sinh vien
#include<stdio.h>

struct sinh_vien
	{
		char hoten[30];
		char masinhvien[10];
		float diem_toan;
		float diem_van;
		float diem_anh;
		float diem_tin;
	};
	
void nhap_du_lieu( struct sinh_vien x[],int &n)
	{
		printf(" Nhap so sinh vien can nhap: ");
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			{
				fflush(stdin);
				printf("\n Nhap ho va ten sinh vien %d: ",i);
				gets(x[i].hoten);
				fflush(stdin);
				printf("\n Nhap ma so sinh vien: ");
				gets(x[i].masinhvien);
				fflush(stdin);
				printf("\n Nhap diem toan: ");
				scanf("%f",&x[i].diem_toan);
				printf("\n Nhap diem van: ");
				scanf("%f",&x[i].diem_van);
				printf("\n Nhap diem anh: ");
				scanf("%f",&x[i].diem_anh);
				printf("\n Nhap diem tin: ");
				scanf("%f",&x[i].diem_tin);
			}
	}
		
void xuat_du_lieu( struct sinh_vien x[],int n)
	{
		printf("\n\n\n\t Hoten\t|ma sinh vien|diem toan|diem van|diem anh|diem tin");
		for(int i=1;i<=n;i++)
			{
				printf("\n%16s|%12s|%9.2f|%8.2f|%8.2f|%8.2f",x[i].hoten,x[i].masinhvien,x[i].diem_toan,x[i].diem_van,x[i].diem_anh,x[i].diem_tin);
			}
	}
int main()
{
	int n;
	struct sinh_vien sv[100];
	nhap_du_lieu( sv,n);
	xuat_du_lieu( sv,n);
}
