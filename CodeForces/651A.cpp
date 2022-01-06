#include <bits/stdc++.h>
using namespace std;

#define nfs                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define all(x) x.begin(), x.end()

int main()
{
    nfs;

    int x, y, cnt=0;
    cin >> x >> y;
    if(x==1 && y==1) {
        cout << 0 << "\n";
        return 0;
    }
    while(x>0 && y>0) {
        if(x>y) {
            x -= 2;
            y++;
        }
        else{
            x++;
            y -= 2;
        }
        cnt++;
    }

    cout << cnt << "\n";

    return 0;
}