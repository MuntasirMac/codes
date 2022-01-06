#include<bits/stdc++.h>
using namespace std;

#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()

int main()
{
    nfs;
    int a,b,n;

    cin >> n >> a >> b;

    cout << n-max(a+1,n-b)+1 << "\n";

    return 0;
}