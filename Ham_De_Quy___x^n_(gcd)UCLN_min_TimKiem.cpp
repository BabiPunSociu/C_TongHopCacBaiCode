#include<iostream>
#include<cstring>
using namespace std;
/*	Tinh x^n
template<class T>
T luy_thua(T x, int n)
{
	if(n==0) return 1;
	if(n%2!=0)
	{
		T y=luy_thua(x,(n-1)/2);
		return x*y*y;
	}
	else
	{
		T y=luy_thua(x,n/2);
		return y*y;
	}
}
*/

/*	Tim UCLN
template<class T>
T gcd(T a,T b)	
{
	if(a==b) return a;
	else
	{
		if(a>b)
			return gcd(a-b,b);
		else
			return gcd(a,b-a);
	}
}
*/

/*	Tim min
template <class T>
T min(T a[],int n)
{
	if(n==1) return a[0];
	else
	{
		if(a[n-1]<min(a,n-1))
			return a[n-1];
		else
			return min(a,n-1);
	}
}
*/

/*	Tim ky tu
int tim_kiem (char s[], int n, char a)
{	
	if(n==1) return(s[0]==a?1:0);
	else
	{
		if(s[n-1]==a) return 1;
		else return tim_kiem(s,n-1,a);
	}
}
*/

int main()
{
	/*	BAI 1. Tinh Gia Tri Da Thuc
	unsigned long long bac;
	double x,tong=0.0;
	cout<<"Nhap bac cua da thuc: n = "; cin>>bac; bac++; double heso[bac];
	cout<<"Nhap gia tri x = "; cin>>x;
	cout<<"Nhap he so cua da thuc, tu bac 0 den bac n:"<<endl;
	for(unsigned long long i=0;i<bac;i++)
	{
		cin>>heso[i];
		tong += heso[i]*luy_thua(x,i);
	}
	cout<<tong;
	*/
	
	// BAI 2. Tim UCLN
	//	unsigned long long a,b; cin>>a>>b; cout<<"UCLN("<<a<<","<<b<<") = "<<gcd(a,b);
	
	
	/*	BAI 3.Tim min cua 1 day so
	unsigned long long n; cin>>n; double a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<min(a,n);
	*/
	
	/*	BAI 4. Tim kiem 1 ky tu trong xau
	char a; cin>>a;
	char s[10000]; fflush(stdin); gets(s); long long n=strlen(s);
	if(tim_kiem(s,n,a)==1) cout<<"YES";
	else cout<<"NO";
	*/
}
