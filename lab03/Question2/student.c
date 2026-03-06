// Question2/student.c
// ------------------------------------------------------------
// CS Lab03 - Swap Nodes in Pairs 
//
// TODO:
//   Implement swapPairs(head) to swap every two adjacent nodes.
//
// Rules:
// - Do not allocate new nodes.
// - Do not swap values; swap nodes (rewire pointers).
// - Return the new head pointer.
// ------------------------------------------------------------
#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};
struct ListNode* swapPairs(struct ListNode* head) {
      if (head == NULL || head->next == NULL)
            return head;
      struct ListNode* newHead = head->next;
      struct ListNode* prev = NULL;
      struct ListNode* curr = head;

      while (curr != NULL && curr->next != NULL) {
            struct ListNode* first = curr;
            struct ListNode* second = curr->next;
            struct ListNode* nextPair = second->next;

            second->next = first;
            first->next = nextPair;

            if (prev != NULL)
                  prev->next = second;
            prev = first;
            curr = nextPair;
      }
      return newHead;
}
int main(){
      return 0;
}