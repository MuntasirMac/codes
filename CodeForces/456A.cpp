#include<bits/stdc++.h>
using namespace std;
 
#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

struct laptop {
    int price;
    int quality;
};

bool cmp(laptop a, laptop b) {
    return (a.price < b.price);
}
 
int main()
{
    nfs;
    int t, min_q, max_q, min_iter=0;
    cin >> t;
    laptop x[t+1];
    for(int i=0; i<t; i++) {
        cin >> x[i].price >> x[i].quality;
    }

    min_q=x[0].quality, max_q=x[0].quality;

    sort(x,x+t,cmp);

    for(int i=1; i<t; i++) {
        if(x[i].quality < x[i-1].quality) {  
            cout << "Happy Alex" << endl;
            return 0;
        }
    }

    cout << "Poor Alex" << endl;

    return 0;
}