#include <bits/stdc++.h>
using namespace std;

#define nfs                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define all(x) x.begin(), x.end()

int main()
{
    nfs;
    int len;
    cin >> len;
    int first = 0, last = 0;
    char arr[1001];
    cin >> arr;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] != '.')
        {
            first = i;
            break;
        }
    }
    for (int i = len - 1; i >= 0; i--)
    {
        if (arr[i] != '.')
        {
            last = i;
            break;
        }
    }
    if (arr[first] == 'R' && arr[last] == 'R')
        cout << first + 1 << " " << last + 1 + 1;
    else if (arr[first] == 'L' && arr[last] == 'L')
        /* We move backwards*/
        cout << last + 1 << " " << first;
    else if (arr[first] == 'R' && arr[last] == 'L')
    {
        for (int i = first; i < len; i++)
        {
            last = i;
            if (arr[i] == 'L')
            {
                break;
            }
        }
        cout << first + 1 << " " << last;
    }

    return 0;
}