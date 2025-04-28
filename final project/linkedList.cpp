linkedList::linkedList(){
    
    head = nullptr;
    count = 0;
}

linkedList::~linkedList(){
    
    for(Node* i = head; i!= nullptr;){
        Node* temp = i ->next;
        delete i;
        i = temp;
    }
}

int linkedList::size(){
    return count;
}

void linkedList::print(){
    for(Node* i = head; i!= nullptr;){
        cout<< i->data<<", ";
    }
    
}

void linkedList::push(int value){ // will insert value to the front
    
    Node* temp = new Node();
    temp->data = value;
    
    if(head == nullptr){
        temp->next = nullptr;
    }
    else{
        temp->next = head;
    }
    head = temp;
    count++;
}

int linkedList::pop(){
    
}