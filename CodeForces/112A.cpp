#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a,b;
    int i,n=0;
    cin >> a >> b;
    for(i=0; i<a.size(); i++) {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }

    if(a > b)
        n = 1;
    if(a < b)
        n = -1;

    printf("%d\n",n);

    return 0;
}