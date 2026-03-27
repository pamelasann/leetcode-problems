// Last submission: 11/24/2023, 12:24:25 PM
class Solution {
public:
    int fib(int n) {
        if(n == 0 || n == 1)
            return n;
        // F(n) = F(n−1) + F(n−2) for n>1
        int f1 = 0, f2 = 1;
        int result;
        for(int i = 1; i < n; i++) {
            result = f1 + f2;
            f1 = f2;
            f2 = result;
        }
        return result;
    }
};