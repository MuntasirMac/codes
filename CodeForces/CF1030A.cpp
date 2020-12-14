#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,m=0,t;
	scanf("%d",&t);

	while(t--) {
		scanf("%d",&a);
		m += a;
	}
	
	if(m)
		printf("HARD\n");
	
	else
		printf("EASY\n");
	

	return 0;
}