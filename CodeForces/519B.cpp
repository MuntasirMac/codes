#include<bits/stdc++.h>
using namespace std;
 
#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main()
{
    nfs;
    int n,x=0,y=0,z=0,a,b,p,i;
    cin >> n;

    for(i=0; i<n; i++) {
        cin >> p;
        x += p;
    }
    for(i=0; i<n-1; i++) {
        cin >> p;
        y += p;
    }
    for(i=0; i<n-2; i++) {
        cin >> p;
        z += p;
    }

    a = x-y;
    b = y-z;

    cout << a << "\n";
    cout << b <<"\n";
    
    return 0;
}