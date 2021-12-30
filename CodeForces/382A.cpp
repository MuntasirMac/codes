#include<bits/stdc++.h>
using namespace std;

#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()

int main()
{
    nfs;

    string s,t,l,r;

    cin >> s;
    int p = s.find('|');
    l = s.substr(0,p);
    r = s.substr(p+1);

    cin >> t;

    for(auto c:t) {
        if(l.size() <= r.size()) l+=c;
        else r+=c;
    }

    if(l.size()==r.size()) cout << l << '|' << r <<"\n";
    else cout << "Impossible" << "\n";

    return 0;
}