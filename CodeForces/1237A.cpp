#include<bits/stdc++.h>
using namespace std;

#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()

int main()
{
    nfs;

    int n, flag=1;;
    cin >> n;

    while(n--) {
        int x;
        cin >> x;
        if(x%2==0)
            cout << x/2 << "\n";
        else {
            cout << (x+flag)/2 << "\n";
            flag *= -1;
        }
    }

    return 0;
}