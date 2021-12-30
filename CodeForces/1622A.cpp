#include<bits/stdc++.h>
using namespace std;

#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()

int main()
{
    nfs;
    int n;
    cin >> n;
    while(n--) {
        int l[3];
        cin >> l[0] >> l[1] >> l[2];
        
        sort(l,l+3);

        long long int sum = (l[0]+l[1]+l[2]);

        if(sum%2!=0) cout << "No" << "\n";
        else {
            if(l[0]+l[1]==l[2]) cout << "Yes" << "\n";
            else if(l[0]==l[1] || l[1]==l[2]) cout << "Yes" << "\n";
            else cout << "No" << "\n";
        }
    }

    return 0;
}