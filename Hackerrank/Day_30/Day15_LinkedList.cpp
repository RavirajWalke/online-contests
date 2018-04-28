#include <iostream>
#include <cstddef>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:
        int count=0;
    Node* insert(Node *head,int data)
      {
           Node n = new Node(data);
           Node  temp = head;
           if (head == null)
               return n;
           else
             while(temp.next!=null)
            {
               temp = temp.next ;
            }

        temp.next = n;
        return head;
    }

void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }
	mylist.display(head);

}
