#include<cstdio>
using namespace std;

#define mod 1234567


int main()
{
    long long int t,n,i,a[104];
    long long int product;
    
    scanf("%lld",&t);
    
    while(t--) {
    
        product = 1;
        
        scanf("%lld",&n);
        
        //product = 1;
        
        for(i=0; i<n-1; i++) {
            scanf("%lld",&a[i]);
            
            product = ((product%mod)*(a[i]%mod))%mod;
        }
        
        printf("%lld\n", product);

    }
    
    return 0;
}
