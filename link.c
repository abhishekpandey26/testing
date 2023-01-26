#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void display();
struct node{
    int data;
    struct node* next;
};
struct node *head=0,*nextnode,*temp;



void addnode(int data)
{
    nextnode=(struct node*)malloc(sizeof(struct node*));
    
    nextnode->data=data;
    nextnode->next=0;

    if(head==0)
    {
        head=temp=nextnode;
    }

    else {
        temp->next=nextnode;
        temp=nextnode;

    }
}
    void display()
    {
        temp=head;
        if(head==0)
        {
            printf("the list is empty");
        }

        else{
            while (temp!=0)
            {
                /* code */
                printf("%d",temp->data);
                temp=temp->next;
            }
            printf("\n");
        }
    }
   
   void addnewnode(int data)
   {
      nextnode=(struct node*)malloc(sizeof(struct node*));
      nextnode->data=data;

      nextnode->next=head;
      head=nextnode;
   }

   void addlast(int data)
   {
    nextnode=(struct node*)malloc(sizeof(struct node*));
    nextnode->data=data;
    nextnode->data=0;
     
    temp=head;
    while (temp->next==0)
    {
        temp=temp->next;
    }
    temp->next=nextnode;
    
   }
      void addlastnode(int data)
    {
        nextnode = (struct node*)malloc(sizeof(struct node*));

        nextnode->data=data;
        nextnode->next=NULL;
         temp=head;

         while (temp->next!=NULL)
         {
            temp=temp->next;
         }
         temp->next=nextnode;
         


    }

   
    



int main()
{
    addnode(5);
    addnode(4);
    addnode(7);
    addnode(8);
    addnode(9);
    addnode(3);

   display();
   addnewnode(78);
   display();
   
   
}