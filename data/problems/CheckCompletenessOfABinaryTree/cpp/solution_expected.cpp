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
 * 
 * std::ostream& operator<< (std::ostream& os, TreeNode node);
 */
class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        deque<TreeNode*> stack;
        stack.push_back(root);

        bool foundNull = false;
        while (!stack.empty()) {
            TreeNode* node = stack.front();
            stack.pop_front();

            if (node == nullptr) {
                foundNull = true;
                continue;
            } else {
                if (foundNull == true) {
                    return false;
                } else {
                    stack.push_back(node->left);
                    stack.push_back(node->right);
                }
            }
        }
        return true;
    }
};