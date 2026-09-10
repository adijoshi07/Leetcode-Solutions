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
    pair<int,int> helper(TreeNode* root, int& count){
            if(root == NULL) return {0,0};
            auto l = helper(root->left,count);
            auto r = helper(root->right,count);
            int sum = root->val + l.first + r.first;
            int cnt = 1 + l.second + r.second;
            if(root->val == sum/cnt) count++;
            return {sum,cnt};
    }
    int averageOfSubtree(TreeNode* root) {
        int count = 0;
        helper(root, count);
        return count;
    }
};