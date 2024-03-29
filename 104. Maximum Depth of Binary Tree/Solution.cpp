/**
 * Given the root of a binary tree, return its maximum depth.
 * A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
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
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        return max(maxDept(root->left, 1), maxDept(root->right, 1));
    }

    int maxDept(TreeNode* root, int currentDepth) {
        if (root == nullptr) {
            return currentDepth;
        }
        return max(maxDept(root->left, currentDepth + 1), maxDept(root->right, currentDepth + 1));
    }
};