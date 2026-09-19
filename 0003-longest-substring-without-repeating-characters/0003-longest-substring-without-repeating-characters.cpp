class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::vector<int> hash(256, -1);
        int n = s.size();
        int l = 0  , r = 0 ; 
        int max_length = 0;
        while(r<n){
            if(hash [s[r]] != -1){
                if(hash[s[r]] >= l){
                    l = hash[s[r]] + 1;
                }
            }

            int length = r-l+1;

             max_length = max(length,max_length);

            hash[s[r]] = r;
            r++;
        }

        return max_length;
    }
};