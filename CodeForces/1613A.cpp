#include<bits/stdc++.h>
using namespace std;
 
#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main()
{
    nfs;
    int n;
    cin >> n;
    while(n--) {
        long long x1,x2;
        int p1,p2;
        cin >> x1 >> p1;
        cin >> x2 >> p2;

        int mn = min(p1,p2);
        p1 -= mn;
        p2 -= mn;

        if(p1 >= 7) cout << '>' << endl;
        else if(p2 >= 7) cout << '<' << endl;
        else {
            for(int i=0; i<p1; i++) x1 *= 10;
            for(int i=0; i<p2; i++) x2 *= 10;

            if(x1 > x2) cout << '>' << endl;
            else if(x2 > x1) cout << '<' << endl;
            else cout << '=' << endl;
        }
    }
    return 0;
}