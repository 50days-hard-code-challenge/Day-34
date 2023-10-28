class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>nodes;
        queue<pair<TreeNode*,pair<int,int>>>q;
        vector<vector<int>>result;
        if(root==NULL){
            return result;
        }
        q.push(make_pair(root,make_pair(0,0)));
        while(!q.empty()){
            auto temp=q.front();
            q.pop();
            TreeNode* fnode=temp.first;
            int hd=temp.second.first;
            int lv=temp.second.second;
            nodes[hd][lv].insert(fnode->val);
            if(fnode->left){
                q.push(make_pair(fnode->left,make_pair(hd-1,lv+1)));
            }
            if(fnode->right){
                q.push(make_pair(fnode->right,make_pair(hd+1,lv+1)));
            }

        }
        for(auto i:nodes){
            vector<int>ans;
            for(auto j:i.second)
            {   
               ans.insert(ans.end(),j.second.begin(),j.second.end());

            }
            result.push_back(ans);
        }
        return result;
    }
};
