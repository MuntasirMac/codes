#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[104],e=0,o=0, pos_e,pos_o;
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
        if(a[i]%2==0) {
            e++;
            pos_e = i;
        }
            
        else {
            o++;
            pos_o = i;
        }
    }

    if(e < o)
        printf("%d\n", pos_e+1);
    else
        printf("%d\n", pos_o+1);

    return 0;
}