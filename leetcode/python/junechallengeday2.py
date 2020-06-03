class Solution:
    def deleteNode(self, node):
        while node.next:
            node.val = node.next.val
            if node.next.next == None:
                node.next = None
                break
            node=node.next
        
