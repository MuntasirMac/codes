#include<bits/stdc++.h>
using namespace std;

#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()

int main()
{
    nfs;

    long long int l,r;
    cin >> l >> r;
    if(r-l+1<3) { cout << -1 << "\n"; return 0;}
    if(l%2==0)
        {cout << l << " " << l+1 << " " << l+2 << "\n"; return 0;}
    if(r-l+1>3)
        {cout << l+1 << " " << l+2 << " " << l+3 << "\n"; return 0;}
    cout << -1 << "\n";

    return 0;
}