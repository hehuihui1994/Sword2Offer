// 斐波那契数列
// 从下往上计算，避免重复计算

class Solution {
public:
    int Fibonacci(int n) {
        if(n<=1){
            return n;
        }
        
        int index1 = 0, index2=1;
        int result;
        for(int i = 2; i <= n; i++){
            result = index1 + index2;
            index1 = index2;
            index2 = result;
        }
        return result;

    }
};