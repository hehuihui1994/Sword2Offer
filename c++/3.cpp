// 二维数组中的查找

// 选取数组中右上角的数字
//  = x 结束
//  > x 去除所在列
//  < x 去除所在行

class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int row = array.size();
        int col = array[0].size();

        for(int i = 0, j = col-1; i< row && j>=0;){
            if(array[i][j] == target)
            {
                return true;
            }
            else if(array[i][j] > target)
            {
                j--;
            }
            else
            {
                i++;
            }

        }
        
        return false;
        
    }
};

