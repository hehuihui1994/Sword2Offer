// 从尾到头打印列表


/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/

class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> result;

        while(head!= NULL){
            result.insert(result.begin(),head->val);
            head = head->next;
        }

        return result;
        
    }
};
