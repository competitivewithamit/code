class Solution {
public:
    void parse(vector<vector<char>>& board, int i, int j) {
        board[i][j] = '1';
        
        cout << "Parse " << i << j << endl;
        
        // left
        if (i - 1 >= 0 && board[i - 1][j] == 'O')
            parse(board, i - 1, j);
        
        cout << "Left done" << endl;
        
        //right
        if (i + 1 < board.size() && board[i + 1][j] == 'O')
            parse(board, i + 1, j);
        
        cout << "Right done" << endl;
        
        //top
        if (j - 1 >= 0 && board[i][j - 1] == 'O')
            parse(board, i, j - 1);
        
        cout << "Top done" << endl;
        
        //bottom
        if (j + 1 < board[0].size() && board[i][j + 1] == 'O')
            parse(board, i, j + 1);
        
        cout << "Bottom done" << endl;
    }
    
    void solve(vector<vector<char>>& board) {
       
        if (board.size() == 0)
            return;
        
        for (int i = 0; i < board[0].size(); i++)
            if (board[0][i] == 'O')
               parse(board, 0, i);
        
        for (int i = 0; i < board[board.size() - 1].size(); i++)
            if (board[board.size() - 1][i] == 'O')
               parse(board, board.size() - 1, i);
        
        for (int i = 0; i < board.size(); i++)
            if (board[i][0] == 'O')
                parse(board, i, 0);
        
        for (int i = 0; i < board.size(); i++)
            if (board[i][board[0].size() - 1] == 'O')
                parse(board, i, board[0].size() - 1);

        for (int i = 0; i < board.size(); i++)
            for (int j = 0; j < board[i].size(); j++)
                if (board[i][j] == '1')
                    board[i][j] = 'O';
                else if (board[i][j] == 'O')
                    board[i][j] = 'X';
        
    }
};
