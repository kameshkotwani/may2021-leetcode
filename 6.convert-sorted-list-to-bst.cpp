/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if(head==nullptr)
            return NULL;
        ListNode* p1=head;
        ListNode* p2=head;
        ListNode* leftend=nullptr;
        int length=0;
        while(p1!=nullptr)
        {
            length++;
            p1=p1->next;
        }
        if(length==1)
        {
            TreeNode* root=new TreeNode(head->val);
            return root;
        }
        for(int i=0;i<(length/2);++i)
        {
            if(i==length/2-1)
                leftend=p2;
            p2=p2->next;
        }
        leftend->next=nullptr;
        TreeNode* root=new TreeNode(p2->val);
        //TreeNode* output=&root;
        root->left=sortedListToBST(head);
        root->right=sortedListToBST(p2->next);
        
        return root;
        
    }
};
