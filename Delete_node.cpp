SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    SinglyLinkedListNode* p=head;
    if(position==0){

        delete(head);
        return p->next;
        
    }
    for(int i=0;i<position-1;i++){
        p=p->next;
    }
    SinglyLinkedListNode* temp=p->next;
    p->next=p->next->next;
    delete(temp);


    return head;


}

