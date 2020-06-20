class Solution {
public:
    string getPermutation(int n, int k) {
        string res;
        int factorial = 1, cnt;
        for (int i = n; i > 0; i--) factorial *= i;
        vector<bool> visited(n+1, false);    
        for (int i = n; i > 0; i--) {
            factorial /= i;
            
            for (cnt = 1; factorial < k; cnt++){
              k -= factorial;
            }      
            
            for (int j = 1, t = 0; j <= n; j++) {
                if (!visited[j]) t++;
                if (t == cnt) {
                    visited[j] = true;
                    res += to_string(j);
                    break;
                }
            }
        }
        return res;
    }
};
