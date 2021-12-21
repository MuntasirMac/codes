#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n,x,d,l;
        cin >> n;
        x = n;

        while (n>=10)
        {
            d = n%10;
            l = n-d;
            x += l/10;
            n = d+l/10;
        }      

        printf("%d\n",x);
    }
 
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n,x,d,l;
        cin >> n;
        x = n;

        while (n>=10)
        {
            x += n/10;
            n = (n%10)+(n/10);
        }      

        printf("%d\n",x);
    }
 
    return 0;
}
*/