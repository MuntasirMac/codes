#include<bits/stdc++.h>
using namespace std;

#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()

int main()
{
    nfs;
    int n,x;
    cin >> n;

    if(n==0) {cout << 1 << "\n"; return 0;}

    x = n%4;

    if(x==0) cout << 6 << "\n";
    else if(x==1) cout << 8 << "\n";
    else if(x==2) cout << 4 << "\n";
    else if(x==3) cout << 2 << "\n";

    return 0;
}