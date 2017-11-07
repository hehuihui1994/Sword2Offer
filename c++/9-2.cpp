// 变态跳台阶

// 每个台阶都有跳与不跳两种情况（除了最后一个台阶），
// 最后一个台阶必须跳。所以共用2^(n-1)中情况

class Solution {
public:
    int jumpFloorII(int number) {
        return 1<<(number-1);

    }
};