

// Complete the reverse function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
     if (head == NULL || 
      head->next == NULL) {
    return head;
   }

    SinglyLinkedListNode* p=head->next;
    SinglyLinkedListNode* newHead =head;
    newHead->next=NULL;
   
    while(p!=NULL){
        SinglyLinkedListNode* temp=p;
        p=p->next;
        temp->next=newHead;
        newHead=temp;
    }

    return newHead;
   

    


}

