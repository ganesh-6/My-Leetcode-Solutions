class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int count = 0, sum = 0;
        for (auto i : costs){
            if ( (sum+i) <= coins ) {
                sum = sum + i;
                count++;
            }
        }
        return count;
    }
};