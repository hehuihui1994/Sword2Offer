//矩形覆盖
// 与青蛙跳台阶代码相同

class Solution {
public:
    int rectCover(int number) {
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