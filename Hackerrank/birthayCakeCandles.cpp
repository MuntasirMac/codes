#include<stdio.h>

long long int a[10000002];

int main(int argc, char const *argv[])
{
	long long int i, n, m=0,b;
	scanf("%lld", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &b);
		a[b]++;
		if(b > m)
			m = b;
	}

	printf("%lld\n", a[m]);

	return 0;
}