#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    char c[104],i,l;
    scanf("%s",c);
    l = strlen(c);

    for(i=0; i<l; i++) {
        if(c[i] >= 'A' && c[i] <= 'Z')
            c[i] = c[i] + 32;
    }

    for(i=0; i<l; i++) {
        if(c[i] != 'a' && c[i] != 'e' && c[i] != 'i' && c[i] != 'o' && c[i] != 'u' && c[i] != 'y')
            printf(".%c",c[i]);
    }

    return 0;
}