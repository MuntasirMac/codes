#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t,x[3];

    cin >> t;

    while(t--) {
        cin >> x[0] >> x[1] >> x[2];
        if((x[1]+x[0]+x[2])%9==0) {
            int k = (x[0]+x[1]+x[2])/9;
            if(x[0]>=k && x[1]>=k && x[2]>=k) {
                cout << "YES" << "\n";
                continue;
            }
        }
        cout << "NO" << "\n";
    }
    
    return 0;
}