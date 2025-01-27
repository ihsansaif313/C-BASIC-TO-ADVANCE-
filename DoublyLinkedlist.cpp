#include<iostream>
using namespace std;
 class Node {
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int val){
        data = val;
        prev=nullptr;
        next= nullptr;
    }
};
class doublyLinkedList 
{
    private:
    Node* head;
    public:
    doublyLinkedList(){
        head = nullptr;
    }
    void insertAtEnd(int val){
        Node* newNode= new Node(val);
        if (head==nullptr)
        {
            head=newNode;
        }
        
    }
};
int main()
{

 return 0;
}