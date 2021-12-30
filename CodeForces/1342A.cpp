#include<bits/stdc++.h>
using namespace std;

#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()

int main()
{
    nfs;
    long long int a,b,x,y,t;

    cin >> t;

    while(t--) {
        cin >> x >> y;
        cin >> a >> b;

        int p = abs(x-y);
        long long int d = min((p*a) + (min(x,y)*b),(x+y)*a);
        cout << d << "\n";        
    }
    
    return 0;
}