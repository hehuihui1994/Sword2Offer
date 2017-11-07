// 旋转数组的最小数字

// 结束条件：两指针相邻，且p2指的为最小元素
// 特殊情况：left,mid,high三个位置的元素相同时，采用顺序查找的方法

// 模拟指针移动



#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        int low = 0;
        int high = rotateArray.size() - 1;
        int mid = 0;

        while(rotateArray[low] >= rotateArray[high]){

            if(low + 1 == high){
                mid = high;
                break;
            }

            mid = (low + high)/2;

            if((rotateArray[mid] == rotateArray[low]) && (rotateArray[mid] == rotateArray[high]))
                return findInOrder(rotateArray, low, high);

            if(rotateArray[mid] >= rotateArray[low]){
                low = mid;
            }

            if(rotateArray[mid] <= rotateArray[high]){
                high = mid;
            }
        }

        return rotateArray[mid];

        
    }

    int findInOrder(vector<int> rotateArray, int low, int high){
        int result = rotateArray[low];
        for(int i=low+1; i<=high; i++){
            if(rotateArray[i] < result){
                result = rotateArray[i];
            }
        }
        return result;
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

int main(){
    // int a[] = {3,4,5,1,2};
    int a[] = {1,0,1,1,1};
    vector<int> b(&a[0], &a[4]);
    // vector<int> num = {2,2,2,2,1,2};
    Solution s;
    cout<< s.minNumberInRotateArray(b)<<endl;

    return 0;
}