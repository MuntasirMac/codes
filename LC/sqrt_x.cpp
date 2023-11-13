class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1)
            return x;

        long long int n = x/2, ans;
        for(long long int i=1; i<=n; i++) {
            if(i*i == x) {
                ans = i;
                break;
            }
            else if(i*i > x) {
                ans = i-1;
                break;
            }

        }

        return ans;
    }
};
