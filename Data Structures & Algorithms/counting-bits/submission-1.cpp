class Solution {
public:
    int brian_k(int n){
        int cnt = 0;
        int temp = n;
        while(temp > 0){
            temp = temp & (temp-1);
            cnt++;
        }   

        return cnt;

    }
    vector<int> countBits(int n) {
        vector<int> ans;

        for(int i = 0; i <= n; i++){
            ans.push_back(brian_k(i));
        }
        return ans;
    }
};
