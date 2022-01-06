#include<bits/stdc++.h>
using namespace std;

#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()

int main()
{
    nfs;

    int n;
    cin >> n;
    int a[1001]={0};
    bool b=true;

    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        a[x]++;
        if(a[x] > (n+1)/2) b = false;
    }

    if(b)cout << "YES\n";
    else cout << "NO\n";

    return 0;
}