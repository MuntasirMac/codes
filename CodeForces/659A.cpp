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
    int n,x,y;
    cin >> n >> x >> y;

    cout << ((x-1+y)%n+n)%n + 1 << "\n";

    return 0;
}

/*
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
    int n,x,y,ans;
    cin >> n >> x >> y;
    if(y>0) {
        ans = (y % n) + x;
    }
    else if(y==0)
        ans = x;
    else
    {
        if(n+x > abs(y))
            ans = n + x - abs(y);
        else
            ans = n + x - (abs(y)%n);
    }

    cout << ans << "\n";

    return 0;
}
*/