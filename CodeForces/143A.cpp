#include<bits/stdc++.h>
using namespace std;

#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()

int d1,d2,c1,c2,r1,r2,x,a,b,c;
bool check(int x, int a, int b, int c) {
    return ((x+a==r1) && (b+c==r2) && (x+b==c1) && (a+c==c2) && (x+c==d1) && (a+b==d2));
}

int main()
{
    nfs;

    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

    for(x=1; x<=9; x++) {
        for(a=1; a<=9; a++) {
            if(x==a) continue;
            for(b=1; b<=9; b++) {
                if(b==x || b==a) continue;
                for(c=1; c<=9; c++) {
                    if(c==x || c==a || c==b) continue;
                    if(check(x,a,b,c)) {
                        cout << x << " " << a << "\n" << b << " " << c << "\n";
                        return 0;
                    }
                }
            }
        }
    }

    cout << -1 << "\n";

    return 0;
}