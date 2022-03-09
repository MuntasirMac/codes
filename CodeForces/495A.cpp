#include <bits/stdc++.h>
using namespace std;

#define nfs                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long

int main()
{
    nfs;
    int arr[10] = {2, 7, 2, 3, 3, 4, 2, 5, 1, 2};
    int n;
    cin >> n;
    cout << arr[n % 10] * arr[n / 10];

    return 0;
}