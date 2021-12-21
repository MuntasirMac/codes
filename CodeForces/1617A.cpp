#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,t;
    cin >> t;
    while (t--)
    {
        string s,t;
        cin >> s;
        cin >> t;
        int l = s.length();
        sort(s.begin(),s.end());
        for(i=2; i<l; i++) {
            if((s[i]==t[1] && s[i+1]==t[2])) {
                int x = i;
                while(s[x] == s[x-1])
                    x++;
                swap(s[i-1],s[x]);
            }
        }
        //printf("\n",);
        cout << s << endl;
    }
    
    return 0;
}