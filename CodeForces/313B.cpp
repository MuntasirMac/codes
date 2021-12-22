#include<bits/stdc++.h>
using namespace std;
 
#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main()
{
    nfs;
    string s;
    int n, l, r;
    cin >> s;
    cin >> n;
    int ln=s.length(), sum[ln]={0};

    for(int i=0; i<ln-1; i++)
    while (n--)
    {
        int cnt=0, i;
        cin >> l >> r;
        for(i=l-1; i<r-1; i++) {
            if(s[i]==s[i+1])
                cnt++;
        }
        cout << cnt << "\n";
    }
    
    return 0;
}