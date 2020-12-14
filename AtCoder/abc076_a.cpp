#include<stdio.h>

int main(int argc, char const *argv[])
{
	
	int n,k,cnt;
	scanf("%d %d", &n, &k);

	cnt = k*2 - n;

	printf("%d\n",cnt);
	return 0;
}