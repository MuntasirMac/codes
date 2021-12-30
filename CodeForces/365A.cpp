#include<bits/stdc++.h>
using namespace std;

#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()

int main()
{
    nfs;
    int n, k, cntr=0;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        string x;
        cin >> x;
        bool b=1;
        for(int j = 0; j <= k; j++){
            if(x.find(j+'0') == x.npos) b=0;
        }
        if(b) cntr++;
    }
    cout << cntr;

    return 0;
}