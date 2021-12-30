#include<bits/stdc++.h>
using namespace std;

#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()

int main()
{
    nfs;
    int n;
    string s;
    set<char> di, oth;
 
    cin >> n;
 
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < n; j++) {
            if (i == j or i + j == n - 1) {
                di.insert(s[j]);
            }
            else {
                oth.insert(s[j]);
            }
        }
    }
 
    if (di.size() == 1 && oth.size() == 1 && *di.begin() != *oth.begin()) {
        cout << "YES\n" << endl;
    }
    else {
        cout << "NO\n" << endl;
    }

    return 0;
}