#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, s;
    cin >> n >> s;
    int a,b;
    
    int t = s;
    for (int i = 1; i <= n; i++) {
        cin >> a >> b;
        t = max(t, a + b);
    }

    cout << t << "\n";
    return 0;
}