#include<iostream>
using namespace std;
#ifndef __arrayvector__cpp
#define __arrayvector__cpp
template <class T>
class vector_reverse_iterator;
template <class T>
class vector{
	usigned int size, cap	//size: so phan tu hien tai, capacity: dung luong vector__So phan tu toi da
	T *a;
public:
	typedef T *iterator;
	typedef Vector_iterator<T> reverse_iterator;
	////////////////////////////////////////////////////
	// Ham tao
	vector(){
		size=0;cap=0;a=NULL;
	}
	vector(unsigned int n){
		cap=n; size=n; a=new T[n]
	}
	vector(unsigned int n, T x){	// Tao vector co n phan tu deu la x
		cap=n; size=n; a=new T[n];
		for(unsigned int i=0;i<n;i++) a[i]=x;
	}
	/////////////////////////////////////////////////////
	// Ham huy
	~vector(){
		if(a!=NULL) delete[] a;
	}
	///////////////////////////////////////////////////////
	void reserve(unsigned int newcap){ // Cap phat them dung luong cho vector
		if(size==cap)
		{
			// cap phat mang tam de luu tru du lieu cu:
			T *old_a; old_a = new T[cap];
			for(int i=0;i<cap;i++) old_a[i]=a[i];
			// xoa mang a cu va tao mang a moi:
			delete[] a;
			a=new T[newcap];
			// sao chep du lieu o mang old_a vao mang a moi co dung luong lon hon :))
			for(int i=0;i<cap;i++) a[i]=old_a[i];
			cap = newcap;
			delete[] old_a;
		}
	}
	//////////////////////////////////////////////////////////
	T get_back(){	//Lay phan tu cuoi cung cua vector
		return a[size-1];
	}
	//////////////////////////////////////////////////////////
	unsigned int get_size(){	// Lay so luong phan tu hien tai
		return size;
	}
	////////////////////////////////////////////////////////////
	bool empty(){	// Kiem tra vector co rong hay khong?
		return(cap==0);
	}
	void pop_back(){	// Xoa phan tu cuoi cung
		this->size --;
	}
	//////////////////////////////////////////////////////////
	void push_back(T x){	// Them gia tri x vao thanh phan tu cuoi cung cua vector
		reserve(cap+100);
		a[size]=x;
		size++;
	}
	///////////////////////////////////////////////////////////
	void push_back(T x, int index){	// them phan tu x vao vi tri a[k];
		push_back(x);
		for(int i=size-1;i>index;i--)
		{
			T tam = a[i]; a[i]=a[i-1]; a[i-1]=tam;
		}
	}
	///////////////////////////////////////////////////////////
	T &at[int k]{	// Truy cap, lay gia tri phan tu a[k];
		if(k>size-1 or k<0)
			return;
		else
			return a[k];
	}
	
};
int main()
{
	
}
