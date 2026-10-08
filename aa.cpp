class Solution {
public:
    vector<vector<string>> ans;

    bool safe(vector<string>& board, int r, int c, int n) {
        for (int i = 0; i < r; i++)
            if (board[i][c] == 'Q') return false;

        for (int i = r - 1, j = c - 1; i >= 0 && j >= 0; i--, j--)
            if (board[i][j] == 'Q') return false;

        for (int i = r - 1, j = c + 1; i >= 0 && j < n; i--, j++)
            if (board[i][j] == 'Q') return false;

        return true;
    }

    void solve(vector<string>& board, int r, int n) {
        if (r == n) {
            ans.push_back(board);
            return;
        }

        for (int c = 0; c < n; c++) {
            if (safe(board, r, c, n)) {
                board[r][c] = 'Q';
                solve(board, r + 1, n);
                board[r][c] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        solve(board, 0, n);
        return ans;
    }
};