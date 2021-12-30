#include<bits/stdc++.h>
using namespace std;

#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()

int main()
{
    nfs;

    int one=0,two=0;
    string arr[4];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<3;i++)
    {
        one=0,two=0;
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==arr[i][j+1] || arr[i+1][j]==arr[i+1][j+1])
                one=1;
            if((one==1) && (arr[i][j]==arr[i+1][j] || arr[i][j+1]==arr[i+1][j+1]))
                {two=1;break;}
        }   
        if(two==1)
            break;
    }
    if(two==1)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}