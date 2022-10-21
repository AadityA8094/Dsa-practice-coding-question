//leetcode 222. Count Complete Tree Nodes
class Solution {
public:
    int countNodes(TreeNode* root) {
        if(!root){
            return 0;
        }
        int ans=1;
        int left=0;
        int right=0;
        TreeNode* l = root->left;
        TreeNode* r = root->right;
        while(l)
        {
            left++;
            l=l->left;
        }
        while(r)
        {
            right++;
            r=r->right;
        }
        
        if(left==right)
        {

            if(left){
                ans+=2*(pow(2,left)-1);
            }
            
            
        }
        else{
            ans+=(countNodes(root->left)+countNodes(root->right));
        }
        return ans;
    }
};
