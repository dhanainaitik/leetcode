class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans = 0;
        int n = nums.size();
        for(int i=0 ; i<n ; i++){
            int b = i;
            int cnt = 0;
            while(b>0){
                if((b&1)==1){
                    cnt++;
                }
                b = b>>1;
            }
            if(cnt==k){
                ans+=nums[i];
            }
        }

        return ans;
    }
};