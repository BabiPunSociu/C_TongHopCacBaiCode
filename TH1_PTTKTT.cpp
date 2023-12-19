#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

// Hàm doi cho 2 so nguyên
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
 
/////////////////////////////////////////////////////////////////////////////////////

// Hàm selection sort
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    // Di chuyen ranh gioi cua mang da sap xep và chua sap xep
    for (i = 0; i < n-1; i++)
    {
    // Tìm phan tu nho nhat trong mang chua sap xep
    min_idx = i;
    for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
        min_idx = j;
 
    // swap phan tu nho nhat voi phan tu dau tiên
        swap(arr[min_idx], arr[i]);
    }
}

/////////////////////////////////////////////////////////////////////////////////////

// Hàm sap xep bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool haveSwap = false;
    for (i = 0; i < n-1; i++){
    // i phan tu cuoi cùng dã duoc sap xep
        haveSwap = false;
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                haveSwap = true; // Kiem tra lân loop này có swap không
            }
        }
        // Neu không có swap nào duoc thuc hien => mang dã sap xep. Không can loop thêm
        if(haveSwap == false){
            break;
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////

/* Hàm sap xep su dung thuat toán sap xep chèn */
void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
 
       /* Di chuyen các phan tu có giá tri lon hon giá tri key
	   va
	   sau mot vi trí so voi vi trí ban dau cua nó */

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
        while(left <= right && arr[left] < pivot) left++; 		// Tìm phan tu >= arr[pivot]
        while(right >= left && arr[right] > pivot) right--; 	// Tìm phan tu <= arr[pivot]
        if (left >= right)
			break; 								// Ðã duyet xong thì thoát vòng loop
		swap(arr[left], arr[right]); 							// Neu chua xong, doi cho.
        left++; 												// Vì left hien tai dã xét, nên can tang
        right--; 												// Vì right hien tai dã xét, nên can giam
    }
    
    swap(arr[left], arr[high]);
    return left; 								// Tra ve chi so se dùng de chia doi mang
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi là chi so noi phan tu này dã dúng vi trí và là phan tu chia mang làm 2 mang con trái & phai */
        int pi = partition(arr, low, high);
 
        // Goi de quy sap xep 2 mang con trái và ph?i
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

/////////////////////////////////////////////////////////////////////////////////////

void tao_array_ngau_nhien(int arr[], int n)		// n = 200 000, arr[i] = (int) sinh ngâu nhiên
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
