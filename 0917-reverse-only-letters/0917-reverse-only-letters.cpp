class Solution {
public:
    bool check(char ch){

        if(ch>='a' && ch<='z'){
            return true;
        }
        else if (ch>='A' && ch <='Z'){
            return true;
        }
        else{
            return false;
        }
    }

    string reverseOnlyLetters(string s) {
        int i = 0 ;
        int j = s.size();

        while(i<j){
            if(check(s[i]) == true && check(s[j]) == true){
                swap(s[i] , s[j]);
                i++;
                j--;
            }
            else if(check(s[i]) == true && check(s[j]) == false){
                j--;
            }
            // else if(check(s[i]) == false && check(s[j]) == true){
            //     i++;
            // }
            else{
                i++;
                j--;
            }
        }
        return s;
    }
};