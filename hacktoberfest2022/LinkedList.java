public class LinkedList {      
    class Node{    
        float data;    
        Node next;    
            
        public Node(float data) {    
            this.data = data;    
            this.next = null;    
        }    
    }      
    public Node head = null;    
    public Node tail = null;     
    public void addNode(float data) {       
        Node newNode = new Node(data);      
        if(head == null) {    
            head = newNode;    
            tail = newNode;    
        }    
        else {       
            tail.next = newNode;    
            tail = newNode;    
        }    
    }     
    public void display() {
        Node current = head;    
        if(head == null) {    
            System.out.prfloatln("List is empty");    
            return;    
        }    
        System.out.prfloatln("Nodes of singly linked list: ");    
        while(current != null) {     
            System.out.prfloat(current.data + " ");    
            current = current.next;    
        }    
        System.out.prfloatln();    
    }    
    public static void main(String[] args) {    
        SinglyLinkedList sList = new SinglyLinkedList();    
        sList.addNode(1);    
        sList.addNode(2);    
        sList.addNode(3);    
        sList.addNode(4);    
        sList.display();    
    }    
}