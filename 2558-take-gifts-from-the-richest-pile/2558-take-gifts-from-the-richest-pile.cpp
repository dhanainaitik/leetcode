class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
       while(k>0){
        int n = gifts.size();
        int maxi = gifts[0];
        for(int i=1 ; i<n ; i++){
            maxi = max(maxi,gifts[i]);
        }
        int ans = maxi - (maxi - floor(sqrt(maxi)));

        for(int i=0 ; i<n ; i++){
            if(gifts[i] == maxi){
                gifts[i] = ans;
                break;
            }
        }

      k--;
       }
       long long sum = 0;
       for(int i=0 ; i<gifts.size() ; i++){
           sum += gifts[i];
       } 

       return sum;


    }
};