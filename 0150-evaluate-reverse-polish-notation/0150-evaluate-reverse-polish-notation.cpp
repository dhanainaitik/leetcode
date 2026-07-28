class Solution {
public:


    int operate(int a, int b, string op) {

    if (op == "+") {
        return b + a;
    }
    else if (op == "-") {
        return b - a;
    }
    else if (op == "*") {
        return b * a;
    }
    else if (op == "/") {
        return b / a;
    }

    return -1;
}
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int length_of_tokens = tokens.size();


        for(int traversal=0 ; traversal<length_of_tokens ; traversal++){
            if(tokens[traversal] != "+" && tokens[traversal] != "-" && tokens[traversal] != "*" && tokens[traversal] != "/"){
                st.push(stoi(tokens[traversal]));
            }
            else{
               
                
                    int a = st.top();
                    st.pop();

                    int b = st.top();
                    st.pop();

                    int ans = operate(a,b,tokens[traversal]);

                    st.push(ans);
            
            }
        }

        return st.top();
    }
};