
	// TONG HAI DA THUC DUNG CTDL VECTOR	//

#include<bits/stdc++.h>
using namespace std;

class DaThuc{
	vector<double> a;
	int n;
public:
	friend istream &operator>> (istream &input, DaThuc &A);
	friend ostream &operator<<(ostream &output, DaThuc &A);
	DaThuc operator+(DaThuc B);
};

istream &operator>>(istream &input, DaThuc &A)
{
	cout<<"Nhap bac cua da thuc: "; cin>>A.n;
	A.a.resize(A.n+1);
	for(auto &x: A.a) input>>x;
	return input;
}
ostream &operator<<(ostream &output, DaThuc &A)
{
	while(A.a.back()==0 and A.a.size()>1)
	{
		A.a.pop_back();
		A.n = A.a.size()-1;
	};
	cout<<A.a[0];
	for(int i=1;i<A.a.size();i++)
	{
		if(A.a[i]==0) continue;
		if(A.a[i]==1)
		{
			if(A.a[i]>0) cout<<"+ "<<A.a[i];
			else cout<<"- "<<A.a[i];
		}
		else
		{
			if(A.a[i]>0) cout<<"+ "<<A.a[i]<<"^"<<i<<" ";
			else cout<<"- "<<A.a[i]<<"^"<<i<<" ";
		}
	}
	return output;
}
DaThuc DaThuc::operator+(DaThuc B)
{
	DaThuc tong;
	tong.n = n>B.n? n:B.n;
	tong.a.resize(tong.n+1);
	for(int i=0;i<tong.a.size();i++)
		tong.a[i] = a[i] + B.a[i];
	return tong;
}
int main()
{
	DaThuc A,B,C;
	cin>>A; cout<<"Da thuc A = "<<A<<endl<<endl;
	cin>>B; cout<<"Da thuc B = "<<B<<"\n \n";
	C=A+B;
	cout<<"A+B = "<<C;
}
