#include<bits/stdc++.h>
using namespace std;

#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()

int main()
{
    nfs;
    int n,k;
    cin >> n >> k;
    while (n--)
    {
        int x,y;
        cin >> x >> y;
        if(x==k || x==7-k || y==k || y==7-k) {
            cout << "NO" << "\n";
            return 0;
        }
    }

    cout << "YES" << "\n";    

    return 0;
}