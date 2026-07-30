class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>answers;
        
        int rem = 0;
        int cnt = 0;
        for(int i=0 ; i<nums.size() ; i++){
            int n = nums[i];
            vector<int>temp;
            while(n>0){
                rem = n%10;
                temp.push_back(rem);
                n = n/10;

            }
            reverse(temp.begin(),temp.end());
            answers.insert(answers.end() , temp.begin() , temp.end());
        }

      

        return answers;
    }
};