class Solution {
public:
    long long Mod = 1e9+7;
    long long power(int base , long long exp){
        if(exp == 0){
            return 1;
        }
        long long half = power(base,exp/2);

        if(exp%2 == 0){
            return (half * half) % Mod;
        }
        else{
            return (((half*half)%Mod)*base)%Mod;
        }
    }
    int countGoodNumbers(long long n) {
        long long even = (n+1)/2;
        long long odd = n/2;

        long long evenWays = power(5,even);
        long long oddWays = power(4,odd);

        return (evenWays * oddWays) % Mod;
    }
};