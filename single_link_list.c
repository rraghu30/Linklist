#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head = NULL, *ptr , *temp, *ptr1, *ptr2;

int main()
{
   int ne,ch; 

   while(1)
   {
     printf("\nEnter your choice :");
     printf("\n 1: insert at begining :");
     printf("\n 2: display :");
     printf("\n 3: insert at last :");
     printf("\n 4: insert at user required position :");
     scanf("%d", &ch);
     switch(ch)
     {
        case 1:
        {
        struct node *new_node;
        new_node = (struct node*)malloc(sizeof(struct node));
        // ptr = head;
        if(head == NULL)
        {
            printf("\nEnter the value :");
            scanf("%d", &ne);

            //head = new_node; 
            new_node->data = ne;
            head = new_node;
            new_node->next = NULL;
        }
        else{
            ptr = head;
            printf("\nEnter the value :");
            scanf("%d", &ne);
            new_node->data = ne;
            new_node->next = ptr;
            head=new_node;

        }
        break;
     }

     case 2:
     { 
        if(head==NULL){
            printf("\n no element are present");
        }else{
            
                ptr = head;
        
         while(ptr != NULL)
        {
            printf("--->%d", ptr->data);
            ptr = ptr-> next;
        }
        }
        break;   
     }
     case 3:
     {
        struct node *new_node;
        new_node = (struct node*)malloc(sizeof(struct node));
        if(head == NULL)
        {
            printf("\nEnter the value :");
            scanf("%d", &ne);
             
            new_node->data=ne;
            new_node->next=NULL;
            head= new_node;

        }
        else{
            printf("\nEnter the value :");
            scanf("%d", &ne);
            ptr=head;
            while(ptr->next!=NULL)
            {
                ptr = ptr->next;
            }
           
            new_node->data=ne;
            new_node->next=NULL;
            ptr->next=new_node;
             
        }
        break;
     }
     case 4:
     {
        int pos=0,up;
        struct node *new_node;
        new_node = (struct node*)malloc(sizeof(struct node));
         printf("\nEnter the position you want to insert :");
            scanf("%d",&up); 
            printf("\nEnter the value :");
            scanf("%d", &ne);
            if(head==NULL){
                printf("\n insertion not possible");
            }else{
                ptr=head;
                while(ptr->next!=NULL && pos<up){
                    ptr=ptr->next;
                    pos++;

                }
                new_node->data = ne;
                new_node->next=ptr->next;
                ptr->next=new_node;


            }
            break;

    
     }
     default:
     {
        exit(0);
     }
   }
   }
    return 0;
}