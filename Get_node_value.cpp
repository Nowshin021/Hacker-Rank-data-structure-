int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    SinglyLinkedListNode* p=head;
    int counter=0;
    while(p!=NULL){
        p=p->next;
        counter++;
    }

    int answer=counter-(positionFromTail+1);
    SinglyLinkedListNode* p1=head;
    for(int i=0;i<answer;i++){
        p1=p1->next;
    }
    int data=p1->data;
     return data;
}

