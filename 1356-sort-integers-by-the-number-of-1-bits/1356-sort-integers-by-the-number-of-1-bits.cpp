class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {

        int n = arr.size();

        vector<pair<int,int>>v;

        for(int i=0 ; i<n ; i++){

            int b = arr[i];
            int cnt = 0;

            while(b>0){
                
                if((b&1) == 1){
                    cnt++;
                }

                b = b>>1;
            }

            v.push_back({cnt,arr[i]});
        }

        sort(v.begin(),v.end());

        vector<int>ans;

        for(auto x : v) {
            ans.push_back(x.second);
        }

        return ans;
    }
};