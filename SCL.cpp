#include<iostream>

using namespace std;

typedef struct node
{
    int data;
    struct node * next;
}NODE ,* PNODE ,**PPNODE;

void DeleteFirst(PPNODE Head, PPNODE Tail )
{
   if(*Head == NULL)
   {
       return;
   }
   else if(*Head == *Tail)
   {
       delete *Head;
       *Head =NULL;
       *Tail =NULL;
       
   }
   else
   {
    *Head = (*Head)->next;
    delete (*Tail)->next;
    (*Tail)->next = *Head;

   }
    ;
    

}
void DeleteLast(PPNODE Head, PPNODE Tail)
{
  

}


void InsertFirst(PPNODE Head , PPNODE Tail, int no)
{
    PNODE newn = new NODE;
    newn->next = NULL;
    newn->data = no;

    if(*Head == NULL)
    {
        *Head = newn;
        *Tail = newn;
        newn->next = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
        (*Tail)->next = *Head; 
       
    }
    
};



void InsertLast(PPNODE Head , PPNODE Tail, int no)
{
   PNODE newn = new NODE;
   newn->data = no;
   newn->next = NULL;

    if(*Head == NULL)
    {
        InsertFirst(Head,Tail,no);
    }
    else
    {
        newn->next= *Head;
        (*Tail)->next = newn;
        *Tail = (*Tail)->next;

    }
   
}

void Display(PNODE Head,PNODE Tail)
{
    if(Head == NULL)
    {
        cout<<"Empty LL Empty!!!\n";
        return;
    }
    
    do
    {
       cout<<Head->data<<"||-->";
       Head = Head->next;
    }while(Head!=Tail->next);
    cout<<"NULL \n";
   
}
int Count(PNODE Head)
{
  
    return 0;
}


void DeleteAtPos(PPNODE Head , PPNODE Tail, int pos)
{

   

}
void InsertAtPos(PPNODE Head , PPNODE Tail,int no ,int pos)
{
   
}
int main()
{
///Singly Linear Linked List

    PNODE first = NULL;
    PNODE last =  NULL;
    int ret =0;
    int choice =1;
    int no= 0;
    int pos = 0;
    bool flag= true;
  
    while(flag)
    {
        cout<<"Enter choice\n";
       cout<<"Enter 1 for Insert At First position\n";
       cout<<"Enter 2 for Insert At Last position\n";
       cout<<"Enter 3 for Insert at desired position\n";
       cout<<"Enter 4 fot Delete at first position\n";
       cout<<"Enter 5 for Delete at last position\n";
       cout<<"Enter 6 for Delete at desired position\n";
       cout<<"Enter  7 to Display\n";
        cout<<"Enter choice\n";
        cin>>choice;
       switch (choice)
       {
       case 1:
            cout<<"Enter number\n";
            cin>>no;
           InsertFirst(&first ,&last, no);
           break;
       case 2:
            cout<<"Enter number\n";
            cin>>no;
           InsertLast(&first ,&last, no);
           break;
       case 3:
            cout<<"Enter number\n";
            cin>>no;
            cout<<"Enter Position\n";
            cin>>pos;
            InsertAtPos(&first ,&last, no,pos);
           break;
       case 4:
           DeleteFirst(&first,&last);
           break;
       case 5:
           DeleteLast(&first,&last);
           break;
       case 6:
            cout<<"Enter Position\n";
            cin>>pos;
           DeleteAtPos(&first,&last,pos);
           break;
        case 7:
            Display(first,last);
           
           break;
       case 0:
            flag =false;
           break;
       
       default:
            cout<<"Please Enter correct option\n";
          
       }
    }
    //ret =Count(first);
    //cout<<"Number of elements are "<<ret;




}