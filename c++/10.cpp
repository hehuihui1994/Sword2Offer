//青蛙跳台阶
//斐波那契数列(0，[1，2，3，5，...])
//从下往上计算，避免重复计算

class Solution {
public:
    int jumpFloor(int number) {
        if(number <= 2){
            return number;
        }
        
        int index1 = 1, index2=2;
        int result;
        for(int i = 3; i <= number; i++){
            result = index1 + index2;
            index1 = index2;
            index2 = result;
        }
        return result;

    }
        
    
};