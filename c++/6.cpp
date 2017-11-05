// 用两个栈实现队列

#include<iostream>
#include<queue>
#include<stack>
#include<cstdlib>
using namespace std;

class Solution0
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        int x;

        if(stack2.empty()){
            while(!stack1.empty()){
                int temp = stack1.top();
                stack2.push(temp);
                stack1.pop();
            }  
        }

        x = stack2.top();
        stack2.pop();
        return x;
        
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};


// 用两个队列实现栈
class Solution1
{
public:
    void push(int node) {
        queue1.push(node);
        
    }

    int pop() {
        int x;
        if(queue1.empty() && !queue2.empty()){
            queue<int> tempQ = queue1;
            queue1 = queue2;
            queue2 = tempQ;
        }

        while(queue1.size() > 1){
            int temp = queue1.front();
            queue2.push(temp);
            queue1.pop();
        }

        x = queue1.front();
        queue1.pop();

        return x;  
    }

private:
    queue<int> queue1;
    queue<int> queue2;
};


int main(){
    Solution1 testQueue;
    testQueue.push(1);
    testQueue.push(2);
    testQueue.push(3);
    cout<<testQueue.pop()<<endl;
    testQueue.push(4);
    cout<<testQueue.pop()<<endl;
    cout<<testQueue.pop()<<endl;
    cout<<testQueue.pop()<<endl;
    
    return 0;
}
