#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
void NhapMaTran(int **a, int hang, int cot)
{
    int i, j;
    for (i = 0; i < hang; i++)
        for (j = 0; j < cot; j++)
        {
            cin>>a[i][j];
        }
}
void CongMaTran(int **x, int **y,int **z, int hang,int cot)
{
	int i, j;
    for (i = 0; i < hang; i++)
        for (j = 0; j < cot; j++)
        {
            z[i][j] = x[i][j] + y[i][j];
        }
}

void XuatMaTran(int **a, int hang, int cot)
{
    int i, j;
    cout<<endl<<endl;
    for (i = 0; i < hang; i++)
    {
        for (j = 0; j < cot; j++)
    	{	
			cout<<setw(7)<<a[i][j]<<" ";
    	}
    	cout<<endl<<endl;
    }
}
int main()
{
	int hang,cot; cin>>hang>>cot;
	int **a;
	a=(int**)malloc(hang*sizeof(int*));
	for(int i=0;i<hang;i++)
	{
		a[i] = (int *)malloc(cot * sizeof(int));
	}
	int **b;
	b=(int**)malloc(hang*sizeof(int*));
	for(int i=0;i<hang;i++)
	{
		b[i] = (int *)malloc(cot * sizeof(int));
	}
	int **c;
	c=(int**)malloc(hang*sizeof(int*));
	for(int i=0;i<hang;i++)
	{
		c[i] = (int *)malloc(cot * sizeof(int));
	}
	NhapMaTran(a,hang,cot);
	NhapMaTran(b,hang,cot);
	CongMaTran(a,b,c,hang,cot);
	for(int i=0;i<hang;i++)
	{
		free(a[i]);
		free(b[i]);
	}
	free(a); free(b);
	XuatMaTran(c,hang,cot);
}

