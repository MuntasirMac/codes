#include<cstdio>
using namespace std;

int main()
{
	long long int t,a,b,k,x,y;
	
	scanf("%lld",&t);
	
	while(t--) {
		scanf("%lld %lld %lld", &a, &b, &k);
		
		if(k%2==1) x = (k/2)+ 1;
		else x = k/2;
		y = k/2;
		
		long long int ans = (a*x)-(b*y);
		printf("%lld\n",ans);
	}
	
	return 0;
}
