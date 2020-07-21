class Solution {
private:
    int n,m;
    vector<vector<bool>> visited;
    bool dfs(vector<vector<char>>& board, string word, int i, int j, int index) {
        if(board[i][j]==word[index]) {
            visited[i][j] = true;
            
            if(index==word.length()-1) return true;
            if(i-1>=0 && visited[i-1][j]==false) {
                if(dfs(board, word, i-1, j, index+1)) return true;
            }
            if(i+1<n && visited[i+1][j]==false) {
                if(dfs(board, word, i+1, j, index+1)) return true;
            }
            if(j-1>=0 && visited[i][j-1]==false) {
                if(dfs(board, word, i, j-1, index+1)) return true;
            }
            if(j+1<m && visited[i][j+1]==false) {
                if(dfs(board, word, i, j+1, index+1)) return true;
            }
            
            visited[i][j] = false;
        }
        return false;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        n = board.size();
        m = board[0].size();
        visited = vector<vector<bool>>(n, vector<bool>(m, false));
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(dfs(board, word, i, j, 0)) return true;
            }
        }
        return false;
    }
};
