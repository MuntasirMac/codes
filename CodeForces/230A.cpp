#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s;
    pair<int, int> a[1004];
    scanf("%d %d", &s,&n);

    for(int i=0; i<n; i++) 
        scanf("%d %d", &a[i].first, &a[i].second);
    
    sort(a,a+n);

    for(int i=0; i<n; i++) {
        if(s > a[i].first) {
            s += a[i].second;
        }

        else {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");

    return 0;
}