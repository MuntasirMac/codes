#include<bits/stdc++.h>
using namespace std;

#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()

int main()
{
    nfs;
    int c1,c2,c3,c4,c5;

    cin >> c1 >> c2 >> c3 >> c4 >> c5;

    int sum = c1+c2+c3+c4+c5;
    if(sum>0 && sum%5==0) cout << sum/5 << "\n";
    else cout << -1 << "\n";

    return 0;
}