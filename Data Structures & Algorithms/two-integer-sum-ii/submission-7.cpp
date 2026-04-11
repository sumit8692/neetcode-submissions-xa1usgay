class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int i = 0;
        int j = numbers.size() - 1;
        while(i < j){
            int currSum = numbers[i] + numbers[j];
            if(currSum == target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            else if(currSum > target)   j--;
            else i++;
        }
        return ans;
    }
};
