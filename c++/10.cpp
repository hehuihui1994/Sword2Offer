// 二进制中1的个数

// 位运算  &

class Solution {
public:
     int  NumberOf1(int n) {
         int result = 0;
         int flag = 1;
         while(flag){
             if(n&flag){
                 result++;
             }
             flag = flag<<1;
         }
         return result;
         
     }
};


// 最优解
// 把一个整数减去1，再和原整数做与运算，
// 会把该整数最右边一个1变成0.那么一个整数的二进制有多少个1，就可以进行多少次这样的操作
class Solution {
public:
     int  NumberOf1(int n) {
         int result = 0;
         while(n){
             n = n&(n-1);
             result++;
         }

         return result;    
     }
};