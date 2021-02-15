
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    
    SinglyLinkedListNode* aPointer = head1;
    SinglyLinkedListNode* bPointer = head2;
    while(aPointer != bPointer){
        if(aPointer==NULL){
            //reached end of list 1, assign its last to list 2 head
            aPointer=head2; 
        }
        else{
            aPointer=aPointer->next;
        }
        if(bPointer==NULL){
            //reached end of list 2, assign its last to list 1 head
            bPointer=head1; 
        }
        else{
            bPointer=bPointer->next;
        }
    }
    //if aPointer== bPointer then merged point is found return merge nodes value
    return aPointer->data;
    
    


}
