#include<cstdio>
using namespace std;

int main()
{
    int t,x,y,a,b;
    
    scanf("%d", &t);
    
    while(t--) {
        scanf("%d %d %d %d",&x,&y,&a,&b);
        
        int n = y - x;
        if(n % (a+b) == 0)
            printf("%d\n", n/(a+b));
        else
            printf("-1\n");
    }
    
    return 0;
    
}
