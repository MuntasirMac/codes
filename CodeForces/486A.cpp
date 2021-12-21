#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long int x, c;
    cin >> x;

    if(x%2==0)
        c=x/2;
    else
        c=-(x+1)/2;
 
    cout << c <<endl;
    
    return 0;
}