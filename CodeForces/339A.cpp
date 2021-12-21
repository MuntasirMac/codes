#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int len, i, j;
    char a[105],t;
    scanf("%s",a);
    len = strlen(a);
    for(i=0; i<len-2; i+=2) {
        for(j=i+2; j<len; j+=2) {
            if(a[i]>a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    for(i=0; i<len; i++)
        printf("%c",a[i]);
    return 0;
}