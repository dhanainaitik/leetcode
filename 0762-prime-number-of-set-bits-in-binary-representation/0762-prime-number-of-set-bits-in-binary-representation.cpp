class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int ans = 0;

        for(int i = left ; i<= right ; i++){

            int cnt = 0;
            int n = i;
            while(n>0){

                if((n&1) == 1){

                    cnt++;
                   
                }

                 n = n>>1;

            }
             bool prime = true;
            if(cnt < 2) {
                prime = false;
                }

          

           for(int j = 2; j < cnt; j++) {

            if(cnt % j == 0) {

                prime = false;
                break;
                }

                }

                if(prime) {
                    ans++;
                    }
        
        }
        return ans;

    }

};