#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

// H�m doi cho 2 so nguy�n
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
 
/////////////////////////////////////////////////////////////////////////////////////

// H�m selection sort
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    // Di chuyen ranh gioi cua mang da sap xep v� chua sap xep
    for (i = 0; i < n-1; i++)
    {
    // T�m phan tu nho nhat trong mang chua sap xep
    min_idx = i;
    for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
        min_idx = j;
 
    // swap phan tu nho nhat voi phan tu dau ti�n
        swap(arr[min_idx], arr[i]);
    }
}

/////////////////////////////////////////////////////////////////////////////////////

// H�m sap xep bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool haveSwap = false;
    for (i = 0; i < n-1; i++){
    // i phan tu cuoi c�ng d� duoc sap xep
        haveSwap = false;
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                haveSwap = true; // Kiem tra l�n loop n�y c� swap kh�ng
            }
        }
        // Neu kh�ng c� swap n�o duoc thuc hien => mang d� sap xep. Kh�ng can loop th�m
        if(haveSwap == false){
            break;
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////

/* H�m sap xep su dung thuat to�n sap xep ch�n */
void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
 
       /* Di chuyen c�c phan tu c� gi� tri lon hon gi� tri key
	   va
	   sau mot vi tr� so voi vi tr� ban dau cua n� */

       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}

/////////////////////////////////////////////////////////////////////////////////////

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int left = low;
    int right = high - 1;
    while(true){
        while(left <= right && arr[left] < pivot) left++; 		// T�m phan tu >= arr[pivot]
        while(right >= left && arr[right] > pivot) right--; 	// T�m phan tu <= arr[pivot]
        if (left >= right)
			break; 								// �� duyet xong th� tho�t v�ng loop
		swap(arr[left], arr[right]); 							// Neu chua xong, doi cho.
        left++; 												// V� left hien tai d� x�t, n�n can tang
        right--; 												// V� right hien tai d� x�t, n�n can giam
    }
    
    swap(arr[left], arr[high]);
    return left; 								// Tra ve chi so se d�ng de chia doi mang
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi l� chi so noi phan tu n�y d� d�ng vi tr� v� l� phan tu chia mang l�m 2 mang con tr�i & phai */
        int pi = partition(arr, low, high);
 
        // Goi de quy sap xep 2 mang con tr�i v� ph?i
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

/////////////////////////////////////////////////////////////////////////////////////

void tao_array_ngau_nhien(int arr[], int n)		// n = 200 000, arr[i] = (int) sinh ng�u nhi�n
{	
	for(int i=0;i<n;i++)
	{
		arr[i] = rand();
	}
}

void ghi_file()
{
	FILE *f;
	f=fopen("File001.txt","w");
	if(f==NULL)
	{
		printf("\n Loi. Khong mo duoc file!");
	}
	
	int arr[200000];
	
	tao_array_ngau_nhien(arr,200000);
	
	for(int i=0;i<200000;i++)
		fprintf(f,"%d\t",arr[i]);
	fclose(f);
}


/////////////////////////////////////////////////////////////////////////////////////

void tao_array_tu_file(int arr[])	// arr[200000]
{
	FILE *ptr;
	ptr = fopen("File001.txt","r");	// Tao-mo file
	if(ptr==NULL)
	{
		printf("\n Loi. Khong mo duoc file!");
	}
	// Doc file
	
	for(int i=0;i<200000;i++)
	{
		fscanf(ptr,"%d", &arr[i]);
	}
}

/////////////////////////////////////////////////////////////////////////////////////


int main()
{
	ghi_file();	// ghi mang ngau nhien int arr[200000] vao file File_001.txt
	
	
	int a[200000];
	tao_array_tu_file(a);
	clock_t start_1 = clock();
	selectionSort(a,200000);
	clock_t end_1 = clock();
	double time_use_selection = (double)(end_1 - start_1) / CLOCKS_PER_SEC;
	cout<<endl<<"Thoi gian chay selection sort la: "<<time_use_selection;
	
	
	tao_array_tu_file(a);
	clock_t start_2 = clock();
	bubbleSort(a,200000);
	clock_t end_2 = clock();
	double time_use_bubble = (double)(end_2 - start_2) / CLOCKS_PER_SEC;
	cout<<endl<<"Thoi gian chay bubble sort sort la: "<<time_use_bubble;
	
	
	tao_array_tu_file(a);
	clock_t start_3 = clock();
	insertionSort(a,200000);
	clock_t end_3 = clock();
	double time_use_insertion = (double)(end_3 - start_3) / CLOCKS_PER_SEC;
	cout<<endl<<"Thoi gian chay insertion sort la: "<<time_use_insertion;
	
	
	tao_array_tu_file(a);
	clock_t start_4 = clock();
	quickSort(a,0,200000-1);
	clock_t end_4 = clock();
	double time_use_quick = (double)(end_4 - start_4) / CLOCKS_PER_SEC;
	cout<<endl<<"Thoi gian chay quick sort la: "<<time_use_quick;
}
