class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxarea = 0;
        int nse = 0;
        int pse = 0;
        int element = 0;
        stack<int>st;
        for(int i=0 ;  i<heights.size() ;  i++){
            while(!st.empty() && heights[st.top()] > heights[i]){
                 element = st.top();
                st.pop();
                nse = i;

                if(st.empty()){
                    pse = -1;
                }
                else{
                    pse = st.top();
                }

                maxarea = max(heights[element]*(nse-pse-1),maxarea);
            }
            st.push(i);
        }

        while(!st.empty()){
            nse = heights.size();
            element = st.top();
            st.pop();  
            if(st.empty()){
                pse = -1;
            }  
            else{
                pse = st.top();
                
            } 
            maxarea = max(heights[element]*(nse-pse-1) , maxarea);

             }

             return maxarea;
    }
};