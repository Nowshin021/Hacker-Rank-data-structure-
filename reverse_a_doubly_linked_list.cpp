DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
    //base case
    if(head==NULL){
        return head;
    }
    // 1->NULL (only one value in linked list)
    else if(head->next==NULL){
        head->next =head->prev;
        head->prev=NULL;
        return head;
    }
    //recurse
    DoublyLinkedListNode* temp1=head->prev;
    DoublyLinkedListNode* temp2=head->next;
    head->next=temp1;
    head->prev=temp2;
    return reverse(temp2);
    


}
