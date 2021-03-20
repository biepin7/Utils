#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

int main() {
    ListNode* p = new ListNode(1);
    ListNode* q = new ListNode(2);
    ListNode* o = new ListNode(3);

    p->next = q;
    q->next = o;

    ListNode* head = p; 


    // 头插法
    ListNode* u = new ListNode(4);
    u->next = head;
    head = u;

    // 链表的删除：遍历的时候遍历不到
    head->next = head->next->next;



    for(ListNode* i = head; i;i=i->next)
    {
        cout << i->val << endl;
    }
    return 0;
    
    // 遍历的另一种做法
    // while(head){
    //         res.insert(res.begin(),head->val);
    //         head=head->next;
    //     }
}