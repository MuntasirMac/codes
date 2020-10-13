#include<bits/stdc++.h>
using namespace std;

int a[103];

int main()
{
	int i,x,n,m=0;
	scanf("%d", &n);

	for(i=1; i<=n; i++) {
		scanf("%d", &x);
		a[x]++;
		if(a[x] > m)
			m = a[x];
	}

	printf("%d\n", m);

	return 0;
}