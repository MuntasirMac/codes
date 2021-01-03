#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	while(cin >> s && s != "0") {
		int cnt = s.size();
		long long int result = 0;
		for (int i = 0; i < s.size(); i++)
		{
			result += (s[i] - '0')* (pow(2, cnt)-1);
			cnt--;
		}
		printf("%lld\n", result);
	}

	return 0;
}