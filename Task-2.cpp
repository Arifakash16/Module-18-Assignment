class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return isBST(root, LONG_MIN, LONG_MAX);
    }
    
private:
    //Helper function that checks if a tree is a BST within a given range
    bool isBST(TreeNode* node, long minVal, long maxVal) {
        if (!node) return true; // Base case: empty tree is a valid BST
        
        //Check if the current node's value is within the bounds
        if (node->val <= minVal || node->val >= maxVal) return false;
        
        //Recursively check left and right subtrees with updated bounds
        return isBST(node->left, minVal, node->val) && 
               isBST(node->right, node->val, maxVal);
    }
};

//Time Complexity: O(n)
//Space Complexity: O(logn)