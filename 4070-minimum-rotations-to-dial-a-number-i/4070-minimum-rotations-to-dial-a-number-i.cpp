class Solution {
public:
    int minRotations(string s) {
        int ptr = 0;
        int ans = 0;

        for(int i=0 ; i<s.size();i++){
            int curr = s[i]-'0';
            if(curr!=ptr){
                ans = ans + min(abs(curr-ptr),10 - abs(curr-ptr));
                ptr = curr;
            }
        }
        return ans; 
    }
};