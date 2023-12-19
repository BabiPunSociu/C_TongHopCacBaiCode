#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct date
{
	int ngay;
	int thang;
	int nam;
};
struct sv
{
	char hoten[30];
	int masinhvien;
	date ngaysinh;
	char lop[5];
	char gioitinh[3];
	float diem_mon_1, diem_mon_2, diem_mon_3;
	float diemTB;
	char hocluc[10];
};

// Nhap thong tin sinh vien
void NhapSinhVien(sv *sv1)
{
	printf("\n Ho va ten: "); fflush(stdin); gets(sv1->hoten);
	printf("\n Ma sinh vien: "); scanf("%d",&sv1->masinhvien);
	printf("\n Ngay sinh: "); scanf("%d %d %d",&sv1->ngaysinh.ngay,&sv1->ngaysinh.thang,&sv1->ngaysinh.nam);
	printf("\n Lop: "); fflush(stdin); gets(sv1->lop);
	printf("\n Gioi tinh: "); fflush(stdin); gets(sv1->gioitinh);
	printf("\n Diem mon thu 1 la: "); scanf("%f",&sv1->diem_mon_1);
	printf("\n Diem mon thu 2 la: "); scanf("%f",&sv1->diem_mon_2);
	printf("\n Diem mon thu 3 la: "); scanf("%f",&sv1->diem_mon_3);
}
// tinh diem trung binh
void DiemTrungBinh(sv *sv1)
{
	sv1->diemTB = (sv1->diem_mon_1+sv1->diem_mon_2+sv1->diem_mon_3)/((float)3);
}
// xet hoc luc
void XetHocLuc(sv *sv1)
{
	if(sv1->diemTB >= 9)
		strcpy(sv1->hocluc,"Xuat Sac");
	else if(sv1->diemTB >= 8)
		strcpy(sv1->hocluc,"Gioi");
	else if(sv1->diemTB >= 6.5)
		strcpy(sv1->hocluc,"kha");
	else if(sv1->diemTB >= 5)
		strcpy(sv1->hocluc,"Trung Binh");
	else
		strcpy(sv1->hocluc,"Yeu");
}
// Cap nhat sinh vien
void CapNhatSinhVien (sv *sv1)
{
	NhapSinhVien(sv1);
	DiemTrungBinh(sv1);
	XetHocLuc(sv1);
}
// insinhvien
void insinhvien(sv sv1)
{
	printf("\n%12s|%5d|%2d/%2d/%4d |%5s|%3s|%2.2f|%2.2f|%2.2f|%8.2f|%10s",sv1.hoten,sv1.masinhvien,sv1.ngaysinh.ngay,sv1.ngaysinh.thang,sv1.ngaysinh.nam,sv1.lop,sv1.gioitinh,sv1.diem_mon_1,sv1.diem_mon_2,sv1.diem_mon_3,sv1.diemTB,sv1.hocluc);
}
// cap nhat DANH SACH sinh vien
void CapNhatDanhSachSinhVien(sv ds[], int &n)
{
	do
	{
		printf("\n Nhap so luong sinh vien: ");
		scanf("%d",&n);
	}while(n<=0);
	for(int i=0;i<n;i++)
	{
		printf("\n Nhap sinh vien thu %d: ",i+1);
		CapNhatSinhVien(&ds[i]);
	}
}
// in DANH SACH sinh vien
void indanhsachsinhvien(sv ds[],int n)
{
	printf("\n\t ----- Danh sach sinh vien -----");
	printf("\n\tho ten\t| MSV |ngay sinh| lop | GT|mon 1|mon 2|mon 3|trung binh|xep loai");
	for(int i=0;i<n;i++)
	{
		insinhvien(ds[i]);
	}
}
float TimMax_DiemTrungBinh(sv ds[],int n)
{
	float max= ds[0].diemTB;
	for(int i=0;i<n;i++)
	{
		if(ds[i].diemTB>max)
			max= ds[i].diemTB;
	}
	return max;
}

void InDanhSachSinhVienXepLoaiXuatSac(sv ds[],int n)
{
	printf("\n\t ----- Danh sach sinh vien dat loai Xuat Sac -----");
	printf("\n\tho ten\t| MSV |ngay sinh| lop | GT|mon 1|mon 2|mon 3|trung binh|xep loai");
	for(int i=0;i<n;i++)
	{
		if(ds[i].diemTB>=9)
			insinhvien(ds[i]);
	}
}

void InDanhSachSinhVienTheoLop(sv ds[],int n,char nhap_lop[])
{
	printf("\n Nhap lop ma ban muon in danh sach: "); fflush(stdin); gets(nhap_lop);
	printf("\n\t ----- Danh sach sinh vien lop %s -----",nhap_lop);
	printf("\n\tho ten\t| MSV |ngay sinh| lop | GT|mon 1|mon 2|mon 3|trung binh|xep loai");
	for(int i=0;i<n;i++)
	{
		if(strcmp(nhap_lop,ds[i].lop)==0)
			insinhvien(ds[i]);
	}
}

void TimSinhVienTheoTen(sv ds[],int n,char nhap_ten[])
{
	printf("\n Nhap ho va ten sinh vien can tim: "); fflush(stdin); gets(nhap_ten);
	printf("\n\t ----- Danh sach sinh vien ten: %s -----",nhap_ten);
	printf("\n\tho ten\t| MSV |ngay sinh| lop | GT|mon 1|mon 2|mon 3|trung binh|xep loai");
	for(int i=0;i<n;i++)
	{
		if(strcmp(nhap_ten,ds[i].hoten)==0)
			insinhvien(ds[i]);
	}
}

void XoaSinhVienTheoMaSinhVien(sv ds[], int &n, int id)
{
	printf("\n Nhap ma sinh vien can xoa: ");
	scanf("%d",&id);
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(id==ds[i].masinhvien)
			{
				for(int j=i;j<n-1;j++)
				{
					ds[j] = ds[j+1];
				}
				
				n--;
				dem++;
			}
	}
	if(dem==0)
		printf("\n Khong tim thay sinh vien nao co ma sinh vien %d",id);
}

void SapXepGiamDanDiemTrungBinh(sv ds[],int n)
{
	sv tg;
	for(int i;i<n-1;i++)
		for(int j=i+1;j<n;j++)
		{
			if(ds[i].diemTB<ds[j].diemTB)
			{
				tg = ds[i];
				ds[i]= ds[j];
				ds[j]= tg;
			}
		}
}

void SapXepTheoHoVaTen(sv ds[], int n)
{
	sv tg;
	for(int i;i<n-1;i++)
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(ds[i].hoten, ds[j].hoten)>0)
			{
				tg = ds[i];
				ds[i]= ds[j];
				ds[j]= tg;
			}
		}
}

void GhiDanhSachSinhVienRaTep(sv ds[],int n,char tentep[])
{
	printf("\n Nhap duong dan cua file: "); fflush(stdin),gets(tentep);
	FILE *ptr;
	ptr = fopen(tentep,"wb");
	fwrite(&n,sizeof(int),1,ptr);
	for(int i=0;i<n;i++)
	{
		fwrite(&ds[i],sizeof(sv),1,ptr);
	}
	fclose(ptr);
}

void DocDanhSachSinhVienTuTep(sv ds[],int n,char tentep[])
{
	printf("\n Nhap duong dan cua file: "); fflush(stdin),gets(tentep);
	FILE *ptr;
	ptr = fopen(tentep,"rb");
	fread(&n,sizeof(int),1,ptr);
	for(int i=0;i<n;i++)
	{
		fread(&ds[i],sizeof(sv),1,ptr);
	}
	fclose(ptr);
}

int main()
{
	int luachon,luachon1;
	int n;
	sv ds[200];
	do
	{
		printf("\n 1. Cap nhat danh sach sinh vien");
		printf("\n 2. In danh sach sinh vien");
		printf("\n 3. Tim diem trung binh cao nhat");
		printf("\n 4. In danh sach cac sinh vien dat loai Xuat Sac");
		printf("\n 5. In danh sach sinh vien theo lop");
		printf("\n 6. Tim sinh vien theo hoten");
		printf("\n 7. Xoa sinh vien theo ma sinh vien");
		printf("\n 8. Sap xep danh sach sinh vien theo thu tu giam dan diem trung binh");
		printf("\n 9. Sap xep sinh vien theo ho ten");
		printf("\n 10. Ghi danh sach sinh vien ra tep");
		printf("\n 11. Doc danh sach sinh vien tu tep");
		printf("\n 0. Thoat.");
		scanf("%d",&luachon);
		if(luachon==1)
		{
			printf("\n ban chon 1. Cap nhat danh sach sinh vien: ");
			CapNhatDanhSachSinhVien(ds,n);
			printf("\n bam so bat ki de tiep tuc hoac ban 0 de thoat. ");
			scanf("%d",&luachon1);
		}
		else if(luachon==2)
		{
			printf("\n ban chon 2. In danh sach sinh vien: ");
			indanhsachsinhvien(ds,n);
			printf("\n bam so bat ki de tiep tuc hoac ban 0 de thoat. ");
			scanf("%d",&luachon1);
		}
		else if(luachon==3)
		{
			printf("\n ban chon 3. Tim diem trung binh cao nhat: ");
			printf("\n Diem trung binh cao nhat la: %f",TimMax_DiemTrungBinh(ds,n));
			printf("\n bam so bat ki de tiep tuc hoac ban 0 de thoat. ");
			scanf("%d",&luachon1);
		}
		else if(luachon==4)
		{
			printf("\n ban chon 4. In danh sach cac sinh vien dat loai Xuat Sac: ");
			InDanhSachSinhVienXepLoaiXuatSac(ds,n);
			printf("\n bam so bat ki de tiep tuc hoac ban 0 de thoat. ");
			scanf("%d",&luachon1);
		}
		else if(luachon==5)
		{
			printf("\n ban chon 5. In danh sach sinh vien theo lop: ");
			char nhap_lop[5];
			InDanhSachSinhVienTheoLop(ds,n,nhap_lop);
			printf("\n bam so bat ki de tiep tuc hoac ban 0 de thoat. ");
			scanf("%d",&luachon1);
		}
		else if(luachon==6)
		{
			printf("\n ban chon 6. Tim sinh vien theo hoten: ");
			char nhap_ten[30];
			TimSinhVienTheoTen(ds,n,nhap_ten);
			printf("\n bam so bat ki de tiep tuc hoac ban 0 de thoat. ");
			scanf("%d",&luachon1);
		}
		else if(luachon==7)
		{
			printf("\n ban chon 7. Xoa sinh vien theo ma sinh vien: ");
			int id;
			XoaSinhVienTheoMaSinhVien(ds,n,id);
			printf("\n bam so bat ki de tiep tuc hoac ban 0 de thoat. ");
			scanf("%d",&luachon1);
		}
		else if(luachon==8)
		{
			printf("\n ban chon 8. Sap xep danh sach sinh vien theo thu tu giam dan diem trung binh: ");
			SapXepGiamDanDiemTrungBinh(ds,n);
			indanhsachsinhvien(ds,n);
			printf("\n bam so bat ki de tiep tuc hoac ban 0 de thoat. ");
			scanf("%d",&luachon1);
		}
		else if(luachon==9)
		{
			printf("\n ban chon 9. Sap xep sinh vien theo ho ten: ");
			SapXepTheoHoVaTen(ds,n);
			indanhsachsinhvien(ds,n);
			printf("\n bam so bat ki de tiep tuc hoac ban 0 de thoat. ");
			scanf("%d",&luachon1);
		}
		else if(luachon==10)
		{
			printf("\n ban chon 10. Ghi danh sach sinh vien ra tep: ");
			char tentep[50];
			GhiDanhSachSinhVienRaTep(ds,n,tentep);
			
			printf("\n bam so bat ki de tiep tuc hoac ban 0 de thoat. ");
			scanf("%d",&luachon1);
		}
		else if(luachon==11)
		{
			printf("\n ban chon 11. Doc danh sach sinh vien tu tep: ");
			char tentep[50];
			DocDanhSachSinhVienTuTep(ds,n,tentep);
			indanhsachsinhvien(ds,n);
			printf("\n bam so bat ki de tiep tuc hoac ban 0 de thoat. ");
			scanf("%d",&luachon1);
		}
		else
			break;
	}while(luachon1!=0);
}
