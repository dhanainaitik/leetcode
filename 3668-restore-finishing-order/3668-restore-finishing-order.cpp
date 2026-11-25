class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {

        unordered_map<int,int>mp;

        for(int i=0 ; i<friends.size() ; i++){
            mp[friends[i]]++;
        }

        vector<int>res;

        for(int i=0 ; i<order.size() ; i++){
            if(mp[order[i]] == 1){
                res.push_back(order[i]);
            }
        }

        return res;
    }
};