class Solution {
public:
    int bitwiseComplement(int n) {

        // approach -- 1 -->>

        // int count = 0;
        // int ans = 0;
        // if(n==0){
        //     return 1;
        // }
        // while(n!=0){
        //     int rem = n%2;
        //     ans = ans+ (!rem*pow(2,count));
        //     count++;
        //     n=n/2;
        // }
        // return ans;


        // approach -- 2 -->>

        if(n==0){
            return 1;
        }
        int bits = floor(log2(n)) + 1;
         int mask = (1<<bits) - 1;

        return n^mask;

    }

};