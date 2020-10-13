#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,ans=1,c;
	scanf("%d %d",&a,&b);

	c = min(a,b);

	for (int i = 1; i <= c; ++i)
	{
		ans = ans * i;
	}

	printf("%d\n", ans);

	return 0;
}