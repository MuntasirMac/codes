#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, p, q, gameIndex, levels[105] = {};
    cin >> n >> p;
 
    while (p--)
    {
        cin >> gameIndex;
        levels[gameIndex] = 1;
    }
 
    cin >> q;
 
    while (q--)
    {
        cin >> gameIndex;
        levels[gameIndex] = 1;
    }
 
    for (int i = 1; i <= n; i++)
    {
        if (levels[i] != 1)
        {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
 
    cout << "I become the guy.";
    return 0;
}