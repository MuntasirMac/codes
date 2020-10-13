#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,c,count=0;
	scanf("%d %d", &n,&c);

	int a[n+1];
	scanf("%d", &a[0]);

	for(int i=1; i<n; i++) {
		scanf("%d", &a[i]);
		if (a[i] - a[i-1] <= c)
			count++;
		else
			count = 0;
	}

	printf("%d\n", ++count);
	return 0;
}