#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL, *ptr, *temp, *ptr1, *ptr2;

int main()
{
    int ne, ch, se, val, pos=0, up=1;
 while(1)
 {
    printf("\n Enter your choice :");
    printf("\n 1: insert at end ");
    printf("\n 2: delete at end ");
    printf("\n 3: display");
    printf("\n 4: delete at user required position :");
    scanf("%d", &ch);
    switch(ch)
    {
        case 1:
        {
            struct node *new_node;
            new_node = (struct node*)malloc(sizeof(struct node));
            if(head == NULL)
            {
                printf("\n Enter the value ");
                scanf("%d", &val);
                new_node->data=val;
                new_node->next=NULL;
                new_node->prev=NULL;
                head=new_node;
            }
            else{
                printf("\n Enter the value ");
                scanf("%d", &val);
                ptr = head;
                while(ptr->next!=NULL)
                {
                    ptr=ptr->next;
                }
                new_node->data=val;
                new_node->prev=ptr;
                new_node->next=NULL;
                ptr->next=new_node;
            }
            break;
        }

        case 2:
        {
            if(head == NULL)
            {
                printf("\n Deletion cannot be possible ");

            }
            else{
              ptr = head;
              while(ptr->next!=NULL)
              {
                temp = ptr;
                ptr = ptr->next;
              }
              temp->next=NULL;
              free(ptr);
            }
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

        case 4:
        {
            up=0;
            ptr1=head;
            printf("\n enter the position you want to insert :");
            scanf("%d", &up);
            if(head==NULL || pos==up)
            {
                printf("Deletion not possible :");
            }
            else{
                while((up!=pos) && (ptr1->next!=NULL))
                {
                    ptr2=ptr1;
                    ptr1=ptr1->next;
                    pos++;
                }
                ptr1->next->prev=ptr2;
                ptr2->next=ptr1->next;
                free(ptr1);
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