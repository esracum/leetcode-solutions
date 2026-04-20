/**
Linked List Nedir?
Bir değer (örneğin bir sayı)
Bir sonraki halkaya işaret (pointer/referans)

Yani [2] → [4] → [3] listesi şöyle tersten kurulur:
pythonnode3 = ListNode(3)       # [3] → None
node2 = ListNode(4, node3) # [4] → [3]
node1 = ListNode(2, node2) # [2] → [4] → [3]

Ters yazılmasının sebebi de aslında birler, onlar yüzler gibi basamakları temsil ettiğinden


 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* c1 = l1;
        ListNode* c2 = l2;

        ListNode* dummy = new ListNode(0);  // sonuc icin
        ListNode* tail = dummy;  

        int sum = 0;
        int carry =0;
        
        while (c1 != nullptr || c2 != nullptr){
            
            int v1 = c1 != nullptr ? c1->val: 0;
            int v2 = c2 != nullptr ? c2->val: 0;
            
            int sum = v1 + v2 + carry;
            carry = sum / 10;

            tail->next = new ListNode(sum % 10);
            tail = tail->next;           

            c1 != nullptr? c1=c1->next: nullptr;
            c2 != nullptr? c2=c2->next: nullptr;                        

        }
        if (carry > 0) {
            tail->next = new ListNode(carry);
        }
        return dummy->next;
        
    }
    
};
