class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even = 0;
        int odd = 0;
        int index = 0;

        while(n>0){
            if(n&1 == 1){
                if(index%2 == 0){
                    even++;
                }
                else{
                    odd++;
                }
            }
            index++;
            n = n>>1;
        }
        return {even,odd};
    }
};