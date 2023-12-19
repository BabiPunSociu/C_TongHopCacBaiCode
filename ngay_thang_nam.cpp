#include<stdio.h>
// Hàm tìm sô ngay trong thang
void so_ngay_trong_thang (int thang,int nam)
	{
		switch
			{case 1
			case thang==3:
			case thang==5:
			case thang==7:
			case thang==8:
			case thang==10:
			case thang==12:
				printf(" co 31 ngay");
			case thang==4:
			case thang==6:
			case thang==9:
			case thang==11:
				printf(" co 30 ngay");
			case thang==2:
				if(y%400==0||y%4==0&&y%100!=0) printf(" co 29 ngay");
				else printf(" co 28 ngay");
			defaut printf(" Loi !!!");
			}
	}
//Hàm tìm ngày thu bao nhieu trong nam 
void ngay_thu_n_cua_nam (int ngay,int thang, int nam)
{
	int tong=0;
	int a;
	for(int i=1;i<thang;i++)
		{
			switch()
			case 1;
			case 3;
			case 5;
			case 7;
			case 8;
			case 10;
			case 12;
				return a=31;
				break;
			case 4;
			case 6;
			case 9;
			case 11;
				return a =30;
				break;
			case 2;
				if(nam%400==0||nam%4==0&&nam%100!=0) return a=29;
				else return a=28;
				break;
			tong+=a;	
		}
	print("\n Ngay %d/%d/%d la ngay thu %d cua nam %d",ngay,thang,nam,tong+ngay,nam);
}

// Hàm tìm ngày hôm truoc
void ngay_hon_truoc (int ngay, int thang, int nam)
{
	if(ngay==1&&thang==1) printf(" \n Ngay hom truoc la: ngay 31/12/%d",nam-1);
	if(ngay==1&&(thang==2||thang==4||thang==6||thang==9||thang==11)) printf("\n Ngay hon truoc la: ngay 31/%d/%d",thang-1,nam);
	if(ngay==1&&(thang==5||thang==7||thang==10||thang==12)) printf("\n Ngay hon truoc la: ngay 30/%d/%d",thang-1,nam);
	if(ngay==1&&thang==3)
		{
			if(nam%400==0||(nam%4==0&&nam%100!=0)) printf("\n Ngay hom truoc la: ngay 29/2/%d",nam);
			else printf("\n Ngay hom truoc la: ngay 28/2/%d",nam);
		}
	if(1<ngay) printf("\n Ngay hom truoc la: ngay %d/%d/%d",ngay-1,thang,nam);
}

// Hàm tìm ngày hôm sau
void ngay_hom_sau (int ngay,int thang, int nam)
{
	if(ngay==31&&thang==12) printf(" \n Ngay hom sau la: ngay 1/1/%d",nam+1);
	if(ngay==31&&(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10)) printf("\n Ngay hon sau la: ngay 1/%d/%d",thang+1,nam);
	if(ngay==30&&(thang==4||thang==6||thang==9||thang==11)) printf("\n Ngay hon sau la: ngay 1/%d/%d",thang+1,nam);
	if(ngay==28&&thang==2)
		{
			if(nam%400==0||(nam%4==0&&nam%100!=0)) printf("\n Ngay hom sau la: ngay 29/2/%d",nam);
			else printf("\n Ngay hom sau la: ngay 1/3/%d",nam);
		}
	if(ngay==29&&thang==2&&(nam%400==0||(nam%4==0&&nam%100!=0))) printf("\n Ngay hom sau la: ngay 1/3/%d",nam);
	if(ngay<=30) printf("\n Ngay hom sau la: ngay %d/%d/%d",ngay+1,thang,nam);
}

int main()
{
	int ngay, thang, nam;
	printf(" Nhap ngay thang nam: ");
	scanf("%d %d %d",&ngay,&thang,&nam);
	
	//phan a
	printf("\n Phan a:");
	printf("\n Thang %d ",thang);
	so_ngay_trong_thang(thang,nam);
	//phan b
	printf("\n phan b:");
	ngay_thu_n_cua_nam(ngay,thang,nam);
	
	//phan c
	printf("\n phan c:");
	ngay_hon_truoc(ngay,thang,nam);
	//phan d
	printf("\n Phan d:");
	ngay_hom_sau(ngay,thang,nam);
		
}
