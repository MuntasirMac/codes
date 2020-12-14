#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    long long int L, s1, s2, q, qi;
    
    scanf("%lld %lld %lld",&L, &s1, &s2);
    scanf("%lld", &q);
    
    double time,Lh;
    
    while(q--) {
        scanf("%lld", &qi);
        
        Lh = sqrt(qi);
        
        time = sqrt(2)*(L-Lh) / abs(s1-s2);
        
        printf("%0.04lf\n", time);
    }
    
    return 0;
}
