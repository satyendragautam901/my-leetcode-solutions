class Node {
    public:
        int data;
        Node *next;

        Node(){// incase of only initialization
            data = 0;
            next = nullptr;
        }

        Node(int value){// node with the value initialization
            data = value;
            next = nullptr;
        }
        
};

class MyLinkedList {
private:
    Node* head;  // head pointer
    int size;    // number of nodes

public:
    MyLinkedList() {
        head = nullptr; // initially empty list
        size = 0;
    }
    
    int get(int index) {
        if (index < 0 || index >= size) return -1; // invalid index
        Node* temp = head;
        for (int i = 0; i < index; i++) {
            temp = temp->next;
        }
        return temp->data;
    }
    
    void addAtHead(int val) {
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }
    
    void addAtTail(int val) {
        Node* temp = new Node(val);
        if (!head) {// if head is null
            head = temp;
        } else {
            Node* curr = head; // pehle tail pe jao
            while (curr->next) {
                curr = curr->next;
            }
            curr->next = temp;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) return;  // invalid index
        if (index == 0) { // agar index '0' hai to first position pe create kro
            addAtHead(val);
            return;
        }
        if (index == size) { // agar index size ke brabar ho means tail pe create kro
            addAtTail(val);
            return;
        }
        
        Node* prev = head; // nhi to us index pe jao and create kro
        for (int i = 0; i < index - 1; i++) {
            prev = prev->next;
        }
        Node* temp = new Node(val); // ek node bnao
        temp->next = prev->next; // node ke next ko prev ke next ko point kro
        prev->next = temp; // prev ke next ko temp kro point kro 
        size++;
    }
    
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return; // invalid index
        if (index == 0) { // means head node kro delete kro
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
        } else {
            Node* prev = head; // means us index pe jao
            for (int i = 0; i < index - 1; i++) {
                prev = prev->next;
            }
            Node* toDelete = prev->next;
            prev->next = toDelete->next;
            delete toDelete;
        }
        size--;
    }

    ~MyLinkedList() {// memory release kro
        while (head) {
            Node* temp = head->next;
            delete head;
            head = temp;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */