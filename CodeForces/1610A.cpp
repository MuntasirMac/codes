#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >>t;
    
    while (t--)
    {
        int n,m;
        cin >> n >> m;
        
        if(n==1 && m==1) {
            printf("0\n");
            continue;
        }

        if(n==1 || m==1) {
            printf("1\n");
            continue;
        }
        
        printf("2\n");
    }
    
    return 0;
}