/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {


       List<List<Integer>> ans = new ArrayList<>();

        if(root==null) {
            return ans;
        }

    int level=0;
    Queue<TreeNode> q = new LinkedList<>();
    q.offer(root);
    while(!q.isEmpty())
    {
        int size=q.size();
        List<Integer> res = new ArrayList<>();

        for(int i=0;i<size;i++){
            root=q.poll();
            res.add(root.val);

            if(root.left!=null){
                q.offer(root.left);
            }

            if(root.right!=null){
            q.offer(root.right);
            }
        }

        if(level%2==0){
            ans.add(new ArrayList(res));
        }
        else{
            Collections.reverse(res);
            ans.add(new ArrayList(res));
        }
        level++;
    }

    return ans;
    }
}
        
    