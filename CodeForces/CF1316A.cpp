#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,i,ans,t,sum,m;
	scanf("%d", &t);

	while(t--) {
		scanf("%d %d", &n,&m);
		sum = 0;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a);
			sum += a;
		}
		if(sum <= m)
			ans = sum;
		else
			ans = m;

		printf("%d\n", ans);
	}

	return 0;
}