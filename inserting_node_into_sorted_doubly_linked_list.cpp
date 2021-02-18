DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    DoublyLinkedListNode* newNode = new DoublyLinkedListNode(data);
    //empty list
    if(head==NULL){
        
        return newNode;
        
    }
    //insert at head
    if(newNode->data<=head->data){
        newNode->next=head;
        head->prev=newNode;
        
        //newNode->prev=NULL;
        return newNode;
    }
    else{
        DoublyLinkedListNode* pointer =head;
        while(pointer->data<newNode->data){
            //last of list
            if(pointer->next==NULL){
                pointer->next=newNode;
                newNode->prev=pointer;
                newNode->next=NULL;
                return head;
            }
            else{
                pointer=pointer->next;
            }
            
        }
        
        //in the middle while(false)
        pointer->prev->next=newNode;
        newNode->prev=pointer->prev;
        pointer->prev=newNode;
        newNode->next=pointer;
        return head;
        
        
        
    }


}
