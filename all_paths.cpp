class Solution {
    bool isLeaf(TreeNode* node) {
        return node->left == nullptr && node->right == nullptr;
    }
    
    void dfs(TreeNode* root, int sum, vector<vector<int>>& res, vector<int>& path) {
        if(root == nullptr) return;
        
        path.push_back(root->val);
        
        sum -= root->val;
        
        if(isLeaf(root) && sum == 0) res.push_back(path);
        
        dfs(root->left, sum, res, path);
        dfs(root->right, sum, res, path);
        
        path.pop_back();
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> res;
        vector<int> path;
        
        dfs(root, sum, res, path);
            
        return res;
    }
};
