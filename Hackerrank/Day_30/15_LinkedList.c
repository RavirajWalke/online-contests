/**
 *
 * @author Ravi
 */
 #include <stdlib.h>
#include <stdio.h>
int count=0;
typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* insert(Node *head,int data)
{
    count++;
    int i;
    Node* temp1=(Node*)malloc(sizeof(Node));
	temp1->data=data;
	temp1->next=NULL;
	if(count==1)
    {
        temp1->next=head;
        head=temp1;
        return head;
    }
    Node* temp2=head;
    for(i=0;i<count-1;i++)
    {
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
}

void display(Node *head)
{
	Node *start=head;
	while(start)
	{
		printf("%d ",start->data);
		start=start->next;
	}
}
int main()
{
	int T,data;
    scanf("%d",&T);
    Node *head=NULL;
    while(T-->0){
        scanf("%d",&data);
        head=insert(head,data);
    }
  display(head);

}

