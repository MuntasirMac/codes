#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    string t = "hello";
    cin >> s;
    int len = s.length(),j=0;
    for(int i=0; i<len; i++) {
        if(s[i]==t[j]) {
            j++;
            if(j==5) {
                printf("YES\n");
                return 0;
            }
        }
    }

    printf("NO\n");
    
    return 0;
}