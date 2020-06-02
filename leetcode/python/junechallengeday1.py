class Solution:
    def invertTree(self, root: TreeNode) -> TreeNode:
        def bst(root):
            if root.left==None and root.right==None:
                return
            t=root.left
            root.left=root.right
            root.right=t
            if root.left!=None:
                bst(root.left)
            if root.right!=None:
                bst(root.right)
        if root!=None:
            bst(root)
        return  root   
