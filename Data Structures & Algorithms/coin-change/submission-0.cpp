class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        const int INF = amount + 1;
        vector<int> dp(amount + 1, INF);

        dp[0] = 0;

        for (int current = 1; current <= amount; current++) {
            for (int coin : coins) {
                if (coin <= current) {
                    dp[current] = min(
                        dp[current],
                        dp[current - coin] + 1
                    );
                }
            }
        }

        return dp[amount] == INF ? -1 : dp[amount];
    }
};