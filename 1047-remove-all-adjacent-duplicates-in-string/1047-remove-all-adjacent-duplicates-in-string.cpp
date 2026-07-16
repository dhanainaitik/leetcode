class Solution {
public:
    string removeDuplicates(string s) {
    //    int i =0;
    //    while(i+1 <s.size()){
    //       if(s[i] == s[i+1]){
    //         s.erase(i,2);
    //         if(i>0) i--;
    //       }                       brute force
    //       else{
    //         i++;
    //       }
    //    }
    //    return s;
    string result = "";
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(st.empty() || st.top() != s[i] ){
            st.push(s[i]);
        }
        else{
            st.pop();
        }
    }

    while(!st.empty()){
        result.push_back(st.top());
        st.pop();
    }
   // reverse krna hoga result ko

   reverse(result.begin(),result.end());
   return result;
    }
};