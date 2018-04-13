#include <iostream>
using namespace std;

void mostrar(int arr[], int x)
{
    for (int i=0;i<x;i++)
        cout<<arr[i]<<" ";
}

//--------------------Insertion Sort---------------------------------
void insertSort(int arr[], int n)
{
   int i, temp, j;
   for (i = 1; i < n; i++)
   {
       temp = arr[i];
       j = i-1;

       while (j >= 0 && arr[j] > temp)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = temp;
   }
}

//--------------------Merge Sort----------------------------------------

void merge(int arr[], int ini, int mid, int fin)
{
    int i, j, k;
    int n1 = mid - ini + 1;
    int n2 =  fin - mid;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[ini + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1+ j];
    i = 0;
    j = 0;
    k = ini;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int ini, int fin)
{
    if (ini < fin)
    {
        int mid = ini+(fin-ini)/2;
        mergeSort(arr, ini, mid);
        mergeSort(arr, mid+1, fin);
        merge(arr, ini, mid, fin);
    }
}

//-------------------------Quick Sort---------------------------------

void quickSort(int arr[], int izq, int der)
{
      int i = izq, j = der;
      int tmp;
      int pivot = arr[(izq + der) / 2];
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };
      if (izq < j)
            quickSort(arr, izq, j);
      if (i < der)
            quickSort(arr, i, der);
}
int main(){
    int arr1[] = {12, 11, 2, 13, 5, 6};
    int n = 6;
    mostrar(arr1, n);
    cout<<endl;
    insertSort(arr1, n);
    //mergeSort(arr1, 0, n - 1);
    //quickSort(arr1,0,n-1);
    mostrar(arr1, n);
    cout<<endl;
    return 0;
}
