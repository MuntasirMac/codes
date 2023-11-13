class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL)
            return false;

        ListNode *slow = head;
        ListNode *fast = head->next;

        while(fast){
            if(fast == slow)
                return true;

            slow = slow->next;
            fast = fast->next;

            if (fast)
                fast = fast->next;
        }

        return false;
    }
};
