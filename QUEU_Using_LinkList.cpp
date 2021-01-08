//
// Created by abdul on 08/01/2021.
//

#include "iostream"

using namespace  std;
struct Node{
    int Data;
    Node *next;
};

struct Node * front=NULL ;
struct Node * rear =NULL;
struct Node *temp;


void insertQueu(int n){
    if(rear==NULL )
    {

        rear =(struct Node *)malloc(sizeof(struct Node));
        //rear = new Node;
        //rear->Data=n;
        rear->Data=n;

rear->next =NULL;

front =rear;


    }
    else
    {
        temp=(struct Node *)malloc(sizeof(struct Node));
        rear->next=temp;
        temp->Data=n;
        temp->next=NULL;
        rear=temp;
     //   temp=rear;
       // rear->next=NULL;
        //  temp->next=R;
        //rear=rear->next;
    }
}


void DeleteQueu(int n) {
    if (front == NULL)
    {
        std::cout<<"Queu is Empty";

    }
    else {
        temp=new Node;
        temp =front;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }

        free(front);
    }
free(front);
    front = rear= NULL;

}

void printQueu()
{
    temp =front;
    if(front=NULL)
    {
        std::cout<<"Queu is empty";
    }
    else


    while (temp!=NULL)
    {
        std::cout <<  temp->Data;

        temp=temp->next;
    }
};

int main()
{
insertQueu(5);
insertQueu(3);
insertQueu(4);

printQueu();



}