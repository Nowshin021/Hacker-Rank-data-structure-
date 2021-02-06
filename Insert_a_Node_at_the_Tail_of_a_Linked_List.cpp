SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* node= new SinglyLinkedListNode(data) ;
    if(head==NULL){
       node->next=head;
       head=node;
       return head;
        
    }
    SinglyLinkedListNode* p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next= node;
    return head;
    


   
}

