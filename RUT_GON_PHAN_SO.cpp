/* RUT GON PHAN SO_____Dung:
	- STRUCT
	- CON TRO
 */
#include<stdio.h>
#include"math.h"

struct phanso
{
	int tuso;
	int mauso;
};

void nhapphanso(phanso *ps)
{
	do
	{
		printf("\n Nhap tu so: ");
		scanf("%d",&ps->tuso);
		printf("\n Nhap mau so: ");
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
	// cach 1:	DE QUY
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
	/* cach 2:
	if(a==b || a==0 || b==0)
		return a; 
	do
	{
		if(a>b)
			a = a - b; // a-=b;
		else
			b = b - a; // b-=a;
	}while(a!=b);
	return a;
	*/
}
void rutgon(phanso *ps)
{
	int ucln = tim_ucln(ps->tuso,ps->mauso);
	ps->tuso = (ps->tuso)/ucln;
	ps->mauso= (ps->mauso)/ucln;
}
void xuatphansorutgon(phanso ps)
{
	printf("\n phan so ban dau la: %d/%d",ps.tuso,ps.mauso);
	rutgon(&ps);
	printf("\n phan so da rut gon la: %d/%d",ps.tuso,ps.mauso);
}
int main()
{
	phanso ps;
	nhapphanso(&ps);
	xuatphansorutgon(ps);
}
