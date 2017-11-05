// 旋转数组的最小数字

// 结束条件：两指针相邻，且p2指的为最小元素
// 特殊情况：left,mid,high三个位置的元素相同时，必须采用顺序查找的方法

class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        int low = 0;
        int high = rotateArray.size() - 1;
        int mid = 0;

        
    }
};





// 二分查找
// 推荐使用非递归的方式，
// 因为递归每次调用递归时有用堆栈保存函数数据和结果。
// 能用循环的尽量不用递归。

//非递归查找  
int BinarySearch(int *array, int n, int key)  
{  
    if ( array == NULL || n == 0 )  
        return -1;  
    int low = 0;  
    int high = n - 1;  
    int mid = 0;  
  
    while ( low <= high )  
    {  
        mid = (low + high )/2; 
        
        if (array[mid] == key){
            return mid;
        }else if(array[mid] < key){
            low = mid + 1;
        }else{
            high = mid -1;
        }
          
    }  
    return -1;  
}  

//递归  
int BinarySearchRecursive(int *array, int low, int high, int key)  
{  
    if ( low > high )  
        return -1;  

    int mid = ( low + high )/2;  
      
    if ( array[mid] == key )  
        return mid;  
    else if ( array[mid] < key )  
        return BinarySearchRecursive(array, mid+1, high, key);  
    else  
        return BinarySearchRecursive(array, low, mid-1, key);  
}  
