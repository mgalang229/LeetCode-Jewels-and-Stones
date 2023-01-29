class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt = 0;
        for (int i = 0; i < (int) stones.size(); i++) {
            bool found = false;
            for (int j = 0; j < (int) jewels.size(); j++) {
                if (stones[i] == jewels[j]) {
                    found = true;
                    break;
                }
            }
            cnt += found;
        }
        return cnt;
    }
};
