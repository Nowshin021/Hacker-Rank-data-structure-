SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* p= head;
    for(int i=1;i<position;i++){
        p=p->next;
    }
    SinglyLinkedListNode* node= new SinglyLinkedListNode(data);
    node->next=p->next;
    p->next=node;



    return head;




}
