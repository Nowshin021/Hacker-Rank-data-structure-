SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    if(head==NULL || head->next==NULL){
        return head;
        
    }
    else{
        SinglyLinkedListNode* pointer=head;
        while(pointer->next!=NULL){
            if(pointer->data !=pointer->next->data){
                pointer=pointer->next;
            }
            else{
                pointer->next=pointer->next->next;
            }
            
        }
        
        return head;
                
        
    }

}
