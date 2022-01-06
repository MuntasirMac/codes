#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    int n, x;
    cout << "enter array size = ";
    cin >> n;
    cout << "enter array elements " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    int j;
    for (int i = 1; i < n; i++) // marker position
    {
        j = i - 1;
        while (j >= 0 && v[j] > v[j + 1])
        {
            swap(v[j], v[j + 1]);
            j--;
        }
    }
    cout << "after sorting : ";
    for (int i : v)
        cout << i << " ";
    cout << endl;
}