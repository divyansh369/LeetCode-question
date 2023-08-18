class BSTIterator {
public:
    stack<TreeNode*>mystack;

    BSTIterator(TreeNode* root) {
       pushall(root); 
    }
    
    int next() {
        TreeNode* temp=mystack.top();
        mystack.pop();
        pushall(temp->right);
        return temp->val;
    }
    
    bool hasNext() {
        if(!mystack.empty()) return true;
        return false;
    }
private:
    void pushall(TreeNode* node){
        for(;node!=NULL ;mystack.push(node),node=node->left);
    }

};
