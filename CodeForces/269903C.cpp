#include<cstdio>
using namespace std;

int main()
{
	int n,k,i,a[105],c=0;
	scanf("%d %d",&n, &k);
	
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	
	for(i=0; i<n-k; i++)
	{
		if(a[i] != a[k+i])
			c++;
	}
	
	if(c>0) c--;
	printf("%d\n",c);
	
	return 0;
}
