class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        vector<vector<int>> flghtInfo(n, vector<int>(n));
        for (auto& v: flights) {
            int from = v[0], to = v[1], price = v[2];
            flghtInfo[from][to] = price;
        }
        int result = 1000000;
        vector<int> smallestPrice(n);
        queue<pair<int, int>> q;
        q.push({src, 0});
        int stop = 0;
        while ( stop <= K){
            int count = q.size();
            while (count > 0) {
                count--;
                auto node = q.front(); q.pop();
                int currSrc = node.first, currPrice = node.second;
                for (int i = 0; i < n; i++) {
                    if (i == currSrc || flghtInfo[currSrc][i] == 0) {
                        continue;
                    }
                    int nextPrice = currPrice + flghtInfo[currSrc][i];
                    if (smallestPrice[i] == 0 || smallestPrice[i] > nextPrice) {
                        smallestPrice[i] = nextPrice;
                        q.push({i, nextPrice});
                        if (i == dst) {
                            result =  min(result, nextPrice);
                        }
                    }
                }
            }
            stop++;
        }
        return result == 1000000 ? -1 : result;
    }
};
