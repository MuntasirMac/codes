#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,a,b,t;
    //string s;
    char c = 'a';
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d %d %d",&n,&a,&b);

        // for(int i=0; i<b; i++) {
        //     s[i] = c+i;
        // }
        // for(int i=b; i<a; i++) {
        //     s[i] = s[i%b];
        // }
        // for(int i=a; i<n; i++)
        //     s[i]=s[i%a];

        for(int i=0; i<n; i++) {
            printf("%c",c+(i%b));
        }
        printf("\n");
    }
    
    return 0;
}