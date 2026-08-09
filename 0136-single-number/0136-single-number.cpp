class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int bit = 0^nums[0];
        for(int i=1 ; i<nums.size();i++){
            bit = bit^nums[i];
        }
        return bit;
    }
};