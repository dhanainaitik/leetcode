class Solution {
public:
    string removeStars(string s) {
        // stack<char>st;
        // string result = "";
        // for(int i=0;i<s.size();i++){
        //     if(s[i] != '*'){
        //         st.push(s[i]);
        //     }
        //     else{
        //         st.pop();
        //     }
        // }
        // while(!st.empty()){
        //     result.push_back(st.top());
        //     st.pop();
        // }
        //  reverse(result.begin(),result.end());

        //  return result;

        string answer = "";

        for(int i=0;i<s.size();i++){
            if(s[i] !='*'){
                answer.push_back(s[i]);
            }
            else{
                answer.pop_back();
            }
        }

        return answer;
    }
};