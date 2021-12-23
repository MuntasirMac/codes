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
    int ln=s.length(), sum[ln]={0},a=0;

    for(int i=0; i<ln-1; i++) {
        if(s[i]==s[i+1]) {
            a++;
            sum[i+1]=a;
        }
        else sum[i+1] = a;
        //cout << sum[i] << " ";
    }
    
    while (n--)
    {
        int cnt=0, i;
        cin >> l >> r;
        cnt = sum[r-1]-sum[l-1];
        if(cnt < 0) cnt=0;
        cout << cnt << "\n";
    }
    
    return 0;
}