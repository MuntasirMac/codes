#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    int n,t,ans;
    
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        string s = "";
        if(n>45) {printf("-1\n"); continue;}
        else {
            for(int i=9; i>0; i--) {
               if(n<=9 && n<=i) {
                   s += to_string(n);
                   n = 0;
                   break;
               }
               else {
                   s += to_string(i);
                   n-=i;
               }
            }
        }
        if(n) {printf("-1\n"); continue;}
        reverse(s.begin(),s.end());
        cout << s << endl;

    }
    
    return 0;
}