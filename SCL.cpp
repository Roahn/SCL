#include<iostream>

using namespace std;

typedef struct node
{
    int data;
    struct node * next;
}NODE ,* PNODE ,**PPNODE;

void DeleteFirst(PPNODE Head )
{
   


}
void DeleteLast(PPNODE Head)
{
  

}


void InsertFirst(PPNODE Head , int no)
{
    
};



void InsertLast(PPNODE Head , int no)
{
   

}

void Display(PNODE Head)
{
   
}
int Count(PNODE Head)
{
  
    
}


void DeleteAtPos(PPNODE Head , int pos)
{

   

}
void InsertAtPos(PPNODE Head , int no ,int pos)
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
           InsertFirst(&first , no);
           break;
       case 2:
            cout<<"Enter number\n";
            cin>>no;
           InsertLast(&first , no);
           break;
       case 3:
            cout<<"Enter number\n";
            cin>>no;
            cout<<"Enter Position\n";
            cin>>pos;
            InsertAtPos(&first , no,pos);
           break;
       case 4:
           DeleteFirst(&first);
           break;
       case 5:
           DeleteLast(&first);
           break;
       case 6:
            cout<<"Enter Position\n";
            cin>>pos;
           DeleteAtPos(&first,pos);
           break;
        case 7:
            Display(first);
           
           break;
       case 0:
            flag =false;
           break;
       
       default:
            cout<<"Please Enter correct option\n";
           break;
       }
    }
    //ret =Count(first);
    //cout<<"Number of elements are "<<ret;




}