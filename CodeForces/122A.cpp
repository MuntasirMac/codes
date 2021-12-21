#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int arr[12]={4,7,47,74,447,474,744,777,444,774,747,477};
    int flag=0;
 
    for(int i=0;i<12;i++){
        if(n%arr[i]==0){
            flag=1;
            break;  
        }
    }
    if(flag==1) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}