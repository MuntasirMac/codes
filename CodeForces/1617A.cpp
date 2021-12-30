#include<bits/stdc++.h>
using namespace std;

#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()

int main()
{
    nfs;
    int i,t;
    cin >> t;
    while (t--)
    {
        string s,t;
        cin >> s;
        cin >> t;
        int l = s.length();
        sort(s.begin(),s.end());
        vector<int> a(26);
        for(i=0; i<l; i++)
            a[s[i] - 'a']++;
        if (t != "abc" || a[0] == 0 || a[1] == 0 || a[2] == 0) {
			cout << s << '\n';
		} else {
			sort(all(s), [](auto x, auto y) {
				if (x == 'b' && y == 'c') return false;
				if (x == 'c' && y == 'b') return true;
				return x < y;
			});
			cout << s << '\n';
		}          
    }
    
    return 0;
}