class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxa = INT_MIN;
        int l = 0;
        int r = heights.size() - 1;
        while(l < r){
            int ar = abs(l - r) * min(heights[l], heights[r]);
            maxa = max(ar, maxa);
            if(heights[l] <= heights[r]){
                l++;
            }
            else{
                r--;
            }
        }

        return maxa;
    }
};
