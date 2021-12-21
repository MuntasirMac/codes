#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y,w,m,x;
    scanf("%d %d", &y,&w);

    m = max(y,w);
    m--;
    x = ((6-m));

    if(x == 1)
        printf("1/6\n");
    else if(x == 2)
        printf("1/3\n");
    else if(x == 3)
        printf("1/2\n");
    else if(x == 4)
        printf("2/3\n");
    else if(x == 5)
        printf("5/6\n");
    else if(x == 6)
        printf("1/1\n");

    return 0;
}