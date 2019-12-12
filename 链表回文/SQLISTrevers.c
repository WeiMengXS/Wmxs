/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
class PalindromeList {
public:
    typedef ListNode node;
    bool chkPalindrome(ListNode* A) {
        // write code here
        node *head=A;
      /*  if (!head || !head->next)
            return true;*/
        node *fast = head, *slow = head;
        while (fast->next != nullptr&&fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        node *pre = nullptr;
        node *move = slow->next;
        node *next = slow->next;
        slow->next = nullptr;
        while (move) {
            next = move->next;
            move->next = pre;
            pre = move;
            move = next;
        }
        bool result = true;
        node *move1 = head, *move2 = pre;
        while (move1 != nullptr&&move2 != nullptr) {
            if (move1->val != move2->val) {
                result = false;
                break;
            }
            move1 = move1->next;
            move2 = move2->next;
        }
        move = pre;
        next = pre;
        pre = nullptr;
        while (move != nullptr) {
            next = move->next;
            move->next = pre;
            pre = move;
            move = next;
        }
        slow->next = pre;
        return result;
    }
};