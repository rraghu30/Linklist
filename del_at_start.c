#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL, *ptr, *temp;

int main()
{
   int ne, ch,se, val;

   while(1)
   {
      printf("\n : Enter your choice ");
      printf("\n 1: insert the Element ");
      printf("\n 2: delete at begining ");
      printf("\n 3: display ");
      scanf("%d",&ch);
      switch(ch)
      {
        case 1:
        {
            ptr=head;
            struct node *new_node;
            new_node = (struct node*)malloc(sizeof(struct node));
            if(head == NULL)
            {
                printf("\n Enter the value");
                scanf("%d", &val);
                new_node->data=val;
                new_node->prev=NULL;
                new_node->next=NULL;
                head=new_node;
            }
            else{
                printf("\n Enter the value ");
                scanf("%d", &val);
                new_node->data=val;
                new_node->prev=NULL;
                new_node->next=head;
                head->prev=new_node;
                head=new_node;
            }
            break;
        }

        case 2:
        {
            if(head == NULL)
            {
                printf("\n Linklist is underflow :");
            }
            else
            {
                ptr = head;
                temp = ptr;
                ptr = ptr->next;
                head=ptr;
                ptr->prev=NULL;
                free(temp);
            }
            break;
        }

        case 3:
        {
            ptr = head;
            while(ptr != NULL)
            {
                printf("--->%d", ptr->data);
                ptr=ptr->next;
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