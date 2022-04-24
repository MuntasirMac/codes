#include <bits/stdc++.h>
using namespace std;

#define nfs                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int main()
{
    int n;
    cin >> n;

    map<string, int> freq;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(freq[s])
            cout << s << freq[s] << "\n";
        else
            cout << "OK" << "\n";

        freq[s]++;
    }

    return 0;
}