class Solution {
public:
    bool hasAlternatingBits(int n) {
        while(n>0){

             int n1 = n&1;
             int n2 = (n>>1)&1;

             if(n1==n2){
                return false;
             }

             n=n>>1;
        }

        return true;

    }
};