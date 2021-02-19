/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeKLists(struct ListNode** lists, int listsSize){
    int hastTable[20001]={0};//用来保存出现的值的次数
    int nums=0;//保存元素个数
    for(int i=0;i<listsSize;i++)
    {
        struct ListNode* p=lists[i];
        while(p)
        {
            hastTable[p->val+10000]++;//题目说了范围在-10^4~10^4
            p=p->next;
            nums++;
        }
    }
    if(nums==0)
        return NULL;
    struct ListNode* cur=(struct ListNode*)malloc(sizeof(struct ListNode));
    cur->next=NULL;
    struct ListNode* head=cur;
    for(int i=0;i<20001;i++)//遍历hash表
    {
        while(hastTable[i])//如果元素在表中则把它加入到链表末尾
        {
            struct ListNode* p=(struct ListNode*)malloc(sizeof(struct ListNode));
            p->val=i-10000;
            p->next=NULL;
            cur->next=p;
            cur=cur->next;
            hastTable[i]--;//更新表中元素数量
        }
    }
    return head->next;
}