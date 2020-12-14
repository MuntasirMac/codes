#include <stdio.h>

int main(int argc, char const *argv[])
{
	long long int a[5], min=0,max=0, sum = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%lld", &a[i]);
		sum += a[i];
		min = a[0];
		max = a[0];
	}

	for (int i = 0; i < 5; i++)
	{
		if(a[i] > max)
			max = a[i];
		if(a[i] < min)
			min = a[i];
	}

	printf("%lld %lld\n", sum-max, sum-min);

	return 0;
}