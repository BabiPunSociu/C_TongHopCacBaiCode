// cong tru nhan chia 2 phan so
#include"stdio.h"
#include<math.h>

struct phanso
{
	int tuso;
	int mauso;
};

void nhap_phanso(phanso* ps,int i)
{
	printf("\n Nhap phan so thu %d:",i);
	printf("\n Nhap vao tu so: ");
	scanf("%d",&ps->tuso);
	do
	{
		printf("\n Nhap vao mau so (mau so khac 0): ");
		scanf("%d",&ps->mauso);
	}while(ps->mauso==0);
	if(ps->mauso<0)
	{
		ps->tuso*=-1;
		ps->mauso*=-1;
	}
}

int tim_ucln(int a,int b)
{
	a=abs(a);
	b=abs(b);
	if(a==b)
		return a;
	else
		{
			if(a>b)
				{
					a = a-b;
					tim_ucln(a,b);
				}
			else
				{
					b=b-a;
					tim_ucln(a,b);
				}
		}
}
void rutgon(phanso *ps)
{
	int ucln = tim_ucln(ps->tuso,ps->mauso);
	ps->tuso = (ps->tuso)/ucln;
	ps->mauso= (ps->mauso)/ucln;
}

void tinh_tong(phanso ps1,phanso ps2,phanso *tong)
{
	tong->mauso = ps1.mauso * ps2.mauso;
	tong->tuso = ps1.tuso*ps2.mauso + ps2.tuso*ps1.mauso;
	rutgon(tong);
}

void tinh_hieu(phanso ps1,phanso ps2,phanso *hieu)
{
	hieu->mauso = ps1.mauso * ps2.mauso;
	hieu->tuso = ps1.tuso*ps2.mauso - ps2.tuso*ps1.mauso;
	rutgon(hieu);
}

void tinh_tich(phanso ps1,phanso ps2, phanso *tich)
{
	tich->tuso = ps1.tuso * ps2.tuso;
	tich->mauso= ps1.mauso* ps2.mauso;
	rutgon(tich);
}

void tinh_thuong(phanso ps1,phanso ps2, phanso *thuong)
{
	thuong->tuso = ps1.tuso * ps2.mauso;
	thuong->mauso= ps1.mauso* ps2.tuso;
	rutgon(thuong);
}
int main()
{
	phanso ps1, ps2;
	phanso tong, hieu, tich, thuong;
	nhap_phanso(&ps1,1);
	nhap_phanso(&ps2,2);
	
	tinh_tong(ps1,ps2,&tong);
	tinh_hieu(ps1,ps2,&hieu);
	tinh_tich(ps1,ps2,&tich);
	tinh_thuong(ps1,ps2,&thuong);
	
	printf("\n phan so thu nhat la: %d/%d",ps1.tuso,ps1.mauso);
	printf("\n phan so thu hai la: %d/%d",ps2.tuso,ps2.mauso);
	printf("\n %d/%d + %d/%d = %d/%d",ps1.tuso,ps1.mauso,ps2.tuso,ps2.mauso,tong.tuso,tong.mauso);
	printf("\n %d/%d - %d/%d = %d/%d",ps1.tuso,ps1.mauso,ps2.tuso,ps2.mauso,hieu.tuso,hieu.mauso);
	printf("\n %d/%d x %d/%d = %d/%d",ps1.tuso,ps1.mauso,ps2.tuso,ps2.mauso,tich.tuso,tich.mauso);
	printf("\n %d/%d : %d/%d = %d/%d",ps1.tuso,ps1.mauso,ps2.tuso,ps2.mauso,thuong.tuso,thuong.mauso);
}
