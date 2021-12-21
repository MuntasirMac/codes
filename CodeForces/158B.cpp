#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,x;
    int v[5]={ 0 };
    cin >> t;
    while (t--)
    {
        cin >> x;
        v[x]++;   
    }
    int sum = v[3]+v[4]+(v[2]/2);
    v[2] = (v[2]%2);
    v[1] = v[1] - v[3];
    v[1] = v[1]>0? v[1]:0;
    
    int c = (v[1]+(v[2]*2))/4;
    if((v[1]+(v[2]*2))%4 > 0) c++;
    
    printf("%d\n",sum+c);
    return 0;
}