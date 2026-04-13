class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = 0;

        // for(int i = 0; i < heights.size(); i++){
        //     for(int j = i+1; j < heights.size(); j++){
        //         int area = (j - i) * min(heights[i], heights[j]);
        //         ans = max(area, ans);
        //     }
        // }

        int left = 0;
        int right = heights.size()-1;
        
        while(left < right){
            int height = min(heights[left], heights[right]);
            int width = right - left;
            int area = width * height;
            ans = max(area, ans);

            if(heights[left] < heights[right])  left++;
            else right--;
        }

        return ans;
    }
};
