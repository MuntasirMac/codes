#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int charToInt(char x) {
    return (x - '0');
}

char intToChar(int x) {
    return (x + '0');
}

int main()
{
    char a[12], b[12];
    scanf("%s", a);
    int len,i;
    len = strlen(a);
    //printf("%c", a[8]);

    if(a[8] == 'A') {
        if(a[0] == '1' && a[1] == '2') {
            a[0] = '0';
            a[1] = '0';
        }
    }
    else if(a[8] == 'P') {
        int x = charToInt(a[0]);
        int y = charToInt(a[1]);
        int p = x*10 + y;
        //printf("%d\n",p);
        if(p < 12) {
            p += 12;
            a[0] = intToChar(p/10);
            a[1] = intToChar(p%10);
        }
    }

    for(i=0; i< len-2; i++) {
        b[i] = a[i];
    }

    printf("%s", b);
    return 0;
}
