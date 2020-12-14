#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
	if(n==1 || n==2)
		return 1;
	return (fib(n-2)+fib(n-1));
}

int main(int argc, char const *argv[])
{
	int n,count=1;
	scanf("%d", &n);

	for(int i=1; i<=n; i++) {
		if(i == fib(count)) {
			count++;
			printf("O");
		}
		else
			printf("o");

		printf("%d\n", fib(count));
	}

	return 0;
}