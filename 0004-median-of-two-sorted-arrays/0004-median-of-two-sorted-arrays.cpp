class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> num3;

        for(int i = 0; i < nums1.size(); i++)
            num3.push_back(nums1[i]);

        for(int i = 0; i < nums2.size(); i++)
            num3.push_back(nums2[i]);

        sort(num3.begin(), num3.end());

        int n = num3.size();

        if(n % 2 == 0){
            return (num3[n/2] + num3[n/2 - 1]) / 2.0;
        }
        else{
            return num3[n/2];
        }
    }
};