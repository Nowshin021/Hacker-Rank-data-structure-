void printLinkedList(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* p= head;
    if(head==NULL){
       return;
    }
    else{
        while(p!=NULL){
            cout<<p->data<<endl;
            p=p->next;
        }

        
    }



}
