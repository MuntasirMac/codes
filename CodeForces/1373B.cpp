#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int z,o,t;
    cin >> t;

    while (t--)
    {
        cin >> s;
        z = count(s.begin(),s.end(),'0');
        o = count(s.begin(),s.end(),'1');

        int m = min(z,o);

        if(m%2==1)
            printf("DA\n");
        else
            printf("NET\n");
    }
    
    return 0;
}