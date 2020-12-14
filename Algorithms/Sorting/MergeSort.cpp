#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int left, int right)
{
    int mid = (left + right)/2;
    
    int lsize = mid - left + 1;
    int rsize = right - mid;
    
    int pos = left;
    
    int leftarr[lsize], rightarr[rsize];
    
    for(int i =0; i<lsize; i++)
        leftarr[i] = a[left+i];
    for(int i=0; i<rsize; i++)
        rightarr[i] = a[mid+1+i];
    
    int i=0, j=0;
    
    while(i<lsize && j<rsize) {
        if(leftarr[i] <= rightarr[j])
            a[pos++] = leftarr[i++];
        else
            a[pos++] = rightarr[j++];
    }
    
    while(i<lsize)
        a[pos++] = leftarr[i++];
    while(j<rsize)
        a[pos++] = rightarr[j++];
}

void merge_sort(int a[], int left, int right)
{
    if(left == right)
        return;
    
    int mid = (left + right)/2;
    
    merge_sort(a, left, mid);
    merge_sort(a, mid+1, right);
    
    merge(a, left, right);
}

int main()
{
    int n,i;
    
    scanf("%d", &n);
    
    int a[n];
    
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    
    printf("\nBefore Sorting\n");
    
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
    
    merge_sort(a, 0, n-1);
    
    printf("\n\nAfter Sorting\n");
    
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
    
    printf("\n");
    
    return 0;
}
