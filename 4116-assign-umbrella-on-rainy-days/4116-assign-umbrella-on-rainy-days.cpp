class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        
        int n = rain.size();
         vector<string>answer(n);
        int cnt1=0;
        int cnt2=0;

        for(int i=0 ; i<n-1; i++){
           
             if(rain[i] == 1 && rain[i+1] == 1 && cnt1 <= cnt2){
                answer[i] = "Alice";
                cnt1++;
            }
            else if(rain[i] == 1 && rain[i+1] == 1 && cnt1 > cnt2){
                answer[i] = "Bob";
                cnt2++;
            }
            else if(rain[i]==1){
                answer[i] = "Bob";
                cnt2++;
            }
            else{
                answer[i] = "None";
            }
        }

        if(rain[n-1] == 1){
            answer[n-1] = "Bob";
        }
        else{
            answer[n-1] = "None";
        }
        return answer;
    }
};