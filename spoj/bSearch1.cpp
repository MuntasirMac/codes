#include<bits/stdc++.h>
using namespace std;

int n,nq, a[100005], q;

int binarySearch(int x)
{
    int left=0,right=n-1,mid,result=-1;
    
    while(left <= right) {
        mid = (left + right)/2;
        
        if(a[mid] == x) {
            result = mid;
            right = mid - 1;
        }
        
        else if(a[mid] > x)
            right = mid - 1;
        
        else
            left = mid + 1;
    }
    
    return result;
}

int main()
{
    int i;
    
    scanf("%d %d",&n,&nq);
    
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    
    for(i=0; i<nq; i++){
        scanf("%d", &q);
        
        printf("%d\n",binarySearch(q));
    }
    
    return 0;
}
