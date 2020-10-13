#include<bits/stdc++.h>
using namespace std;

int partition(int a[], int low, int high)
{
    int pivot = a[high];
    
    int i = low - 1; //index of smaller element
    
    for(int j = low; j < high; j++) {
        if(a[j] <= pivot) {
            i++;
            int temp = a[j];
            a[j] = a[i];
            a[i] = temp;
        }
    }
    
    int temp = a[i+1];
        a[i+1] = a[high];
        a[high] = temp;
        
    return (i+1);
}

void quicksort(int a[], int low, int high)
{
    if(low < high) {
        int p = partition(a,low,high);
        quicksort(a,low,p-1);
        quicksort(a,p+1,high);
    }
}

int main()
{
    int n,i;
    
    scanf("%d",&n);
    
    int a[n];
    
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    
    printf("\nBefore Sorting\n");
    
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
    
    quicksort(a,0,n);
    
    printf("\nAfter Sorting\n");
    
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
    
    return 0;
}

/*
#include <iostream>
using namespace std;

int partition(int arr[], int s, int e) {
  int i = s + 1,j = s + 1;
  int pivot = s;

  while (j <= e) {
    if (arr[j] < arr[pivot]) {
      swap(arr[j], arr[i]);
      i ++;
    }
    j ++;
  }
  swap(arr[pivot], arr[i-1]);
  return i - 1;
}

void quick_sort(int arr[], int s, int e) {
  if (s >= e)
    return;
  int p = partition(arr, s, e);

  quick_sort(arr, s, p - 1);
  quick_sort(arr, p + 1, e);
}

int main() {
  int N = 8;
  int arr[N] = {4, 7, 5, 2, 6, 1, 3, 8};

  quick_sort(arr, 0, N-1);

  for (int i = 0; i < N; i++)
    cout << arr[i] << " ";

  return 0;
}
*/