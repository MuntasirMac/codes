#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char c[106];
    int i,j,len,f,count = 0,flag=0;
 
    scanf("%s",c);
    len = strlen(c);
 
    for(i=0; i<len; i++) {
        if(c[i] == '1') {
            f = i;
            flag = 1;
            break;
        }
    }
    if(!flag) {
        printf("no\n");
        return 0;
    }
    else {
        for(j=f; j<len; j++) {
            if(c[j] == '0') {
                count = count + 1;
                if(count >=6)
                    break;
            }
        }
    }
 
    if(count >= 6)
        printf("yes\n");
    else
        printf("no\n");
 
 
    return 0;
}