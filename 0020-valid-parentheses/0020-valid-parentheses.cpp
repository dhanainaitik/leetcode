class Solution {
public:
    bool isValid(string s) {
        // first ham stack mai push krnege open brackets then ham char jo ki string mai hai closing wle usne st.top ko match krvayenge agr same aajaye to pop and stack mepty rhe jaye toh true hai 

        stack<char>st;

        for(int i = 0 ; i<s.size() ; i++){
            char ch = s[i];
            if(ch == '(' || ch == '[' || ch == '{'){
                st.push(ch);
            }
            else{
                if(!st.empty()){

                    if(ch == ')' && st.top() == '(' || ch == ']' && st.top() == '[' || ch == '}' && st.top() == '{'){

                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        
        return st.empty();
    }
};