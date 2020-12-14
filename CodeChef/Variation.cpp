//ZCOPRAC ZCO 15002
//Variaton

#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    int i,j,k,n,count=0;
    
    scanf("%d %d", &n,&k);
    
    int a[n];
    
    for(i=0; i<n; i++) 
        scanf("%d",&a[i]);
    
    sort(a, a+n);
    
    /*for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            if((a[j]-a[i]) >= k)
                count++;
        }
    }*/
    
    i=0, j=1;
    
    while(i<n) {
        if(abs(a[j] - a[i]) >= k) {
            count+=n-j;
            i++;
        }
        
        else
            j++;
    }
    
    printf("%d\n", count);
    
    return 0;
}
