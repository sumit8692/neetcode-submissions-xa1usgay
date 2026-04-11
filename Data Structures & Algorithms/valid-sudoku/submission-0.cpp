class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<int>> row(9);
        vector<set<int>> col(9);
        vector<set<int>> box(9);

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){

                int boxIndex = (i/3)*3 + (j/3);
                int num = board[i][j];

                if(board[i][j] == '.')  continue;
                if(row[i].count(num) || col[j].count(num) || box[boxIndex].count(num))  return false;

                row[i].insert(num);
                col[j].insert(num);
                box[boxIndex].insert(num);
            }
        }
        return true;
    }
};
