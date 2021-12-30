#include<bits/stdc++.h>
using namespace std;

#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()

int main()
{
    nfs;
    long long x,y,a[5]={0},b[5]={0};
    cin >> x >> y;

    for(int i=1; i<=x; i++)
        a[i%5]++;
    for(int i=1; i<=y; i++)
        b[i%5]++;
    
    cout << (a[0]*b[0] + a[1]*b[4] + a[2]*b[3] + a[3]*b[2] + a[4]*b[1]) << "\n";

    return 0;
}