#include<bits/stdc++.h>
using namespace std;
 
#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main()
{
    nfs;

    int n;
    string s;

    cin >> n >> s;

    int pos = n-1;

    for(int i=0; i<n-1; ++i) {
        if(s[i]>s[i+1]) {
            pos = i;
            break;
        }
    }

    cout << s.substr(0,pos) + s.substr(pos+1) << "\n";

    return 0;
}