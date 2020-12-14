#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long int n)
{
    if(n == 2) return true;
    
    else if(n < 2) return false;
    
    else if(n%2 == 0) return false;
    
    else {
        
        int divisor = 3;
        
        long long int upper_limit = sqrt(n)+1;
        
        while(divisor <= upper_limit) {
            if(n%divisor == 0)
                return false;
            
            divisor += 2;
        }
    }
    
    return true;
}

int main()
{    
    long long int n,i,t,m;
    scanf("%lld", &t);
    
    while(t--) {
        scanf("%lld %lld",&m,&n);
        for(i=m; i<=n; i++) {
            if(isPrime(i))
                printf("%lld\n",i);
        }
    }
    
    return 0;
}
