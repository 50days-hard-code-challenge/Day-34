def length(head) :
    #Your code goes here
    
    count=1
    temp=head
    while(temp.next!=None):
        temp=temp.next
        count+=1
    return count
