#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
void NhapMaTran(int **ptr,int hang,int cot)
{
	for(int i=0;i<hang;i++)
	{
		for(int j=0;j<cot;j++)
		{
			cin>> ptr[i][j];
		}
	}
}
void NhanMaTran(int **p1, int **p2, int **tich,int hang,int cot,int a)
{
	for(int i=0;i<hang;i++)
	{
		for(int j=0;j<cot;j++)
		{
			{
				tich[i][j]=0;
				for(int k=0;k<a;k++)
				{
					tich[i][j]+=p1[i][k]*p2[k][j];
				}
			}
		}
	}
}
void XuatMaTran(int **a,int hang,int cot)
{
	cout<<endl<<endl;
	for(int i=0;i<hang;i++)
	{
		for(int j=0;j<cot;j++)
		{
			cout<<setw(10)<<a[i][j]<<" ";
		}
		cout<<endl<<endl;
	}
}
int main()
{
	int m,n,p; cin>>m>>n>>p;
	int **MaTran_1;
	MaTran_1 = (int**)malloc(m*sizeof(*MaTran_1));
	for(int i=0;i<m;i++)
	{
		MaTran_1[i]= (int*)malloc(n*sizeof(int));
	}
	int **MaTran_2;
	MaTran_2 = (int**)malloc(n*sizeof(*MaTran_2));
	for(int i=0;i<n;i++)
	{
		MaTran_2[i]= (int*)malloc(p*sizeof(int));
	}
	int **MaTran_3;
	MaTran_3 = (int**)calloc(m,sizeof(*MaTran_3));
	for(int i=0;i<m;i++)
	{
		MaTran_3[i]= (int*)calloc(p,sizeof(int));
	}
	NhapMaTran(MaTran_1,m,n);
	NhapMaTran(MaTran_2,n,p);
	NhanMaTran(MaTran_1,MaTran_2,MaTran_3,m,p,n);
	XuatMaTran(MaTran_3,m,p);
}
