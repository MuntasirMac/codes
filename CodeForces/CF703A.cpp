#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,m=0,c=0,t;
	scanf("%d",&t);

	while(t--) {
		scanf("%d %d",&a,&b);
		if(a > b) m++;
		else if(b > a) c++;
	}
	
	if(m > c)
		printf("Mishka\n");
	else if(c > m)
		printf("Chris\n");
	else
		printf("Friendship is magic!^^\n");
	

	return 0;
}