#include<stdio.h>
#include<string.h>
int main()
{
    char s[104];
    int i,l,cnt=0;
    scanf("%s",s);
    l = strlen(s);
    for(i=1; i<l; i++) {
            if(s[i]==s[i-1]) {
                    cnt++;
                    if(cnt==6) {
                            printf("YES\n");
                            return 0;
                    }
            }
            else if(s[i]!=s[i-1] && cnt<6)
                cnt = 0;
    }
        printf("NO\n");
    
    return 0;
}