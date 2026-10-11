class Solution {
public:
    int bitwiseComplement(int n) {
        int count = 0;
        int ans = 0;
        if(n==0){
            return 1;
        }
        while(n!=0){
            int rem = n%2;
            ans = ans+ (!rem*pow(2,count));
            count++;
            n=n/2;
        }
        return ans;
    }

};