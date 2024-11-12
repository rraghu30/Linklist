#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL, *ptr, *ptr1;

int main()
{
    int ne, ch, val, pos=0,up;
    
    while(1)
    {
        printf("\nEnter the value :");
        printf("\n 1: insert at start :");
        printf("\n 2: delete at start :");
        printf("\n 3: dusplay :");
        printf("\n 4: delete at last :");
        printf("\n 5: delete at user required position :");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
            {
                struct node *new_node;
            new_node = (struct node*)malloc(sizeof(struct node));
            if(head==NULL)
            {
                printf("\nEnter the value :");
                scanf("%d", &val);
                new_node->data=val;
                head=new_node;
                new_node->next=head;
                new_node->prev=head;
            }
            else 
            {
                ptr=head;
                ptr1=head;
                while(ptr->next!=head)
                {
                    ptr=ptr->next;
                }
                printf("\nEnter the value :");
                scanf("%d", &val);
                new_node->data=val;
                new_node->next=ptr1;
                new_node->prev=ptr;
                head=new_node;
                ptr->next=new_node;
                ptr1->prev=new_node;
            }
            break;
            }
            case 2:
            {
                 
                if(head==NULL)
                {
                    printf("\nDelition not possible :");
                }
                else
                {
                    ptr=head;
                    ptr1=ptr;
                    while(ptr->next!=head)
                    {
                        ptr=ptr->next;;
                    }
                    ptr1->next->prev=ptr;
                    ptr->next=ptr1->next;
                    head=ptr1->next;
                    printf("\n--->%d", ptr1->data);
                    free(ptr1);
                }
                break;
            }
            case 3:
            {
                ptr=head;
                if(head==NULL)
                {
                    printf("\nnothing can be printed :");
                }
                else
                {
                    printf("\n node add = %p | %d | %p--->",ptr,ptr->data,ptr->next);
                    while(ptr->next!=head)
                    {
                        ptr=ptr->next;
                        printf(" %p | %d | %p--->",ptr,ptr->data,ptr->next);
                    }
                }
                break;
            }
            case 4:
            {
                 
                if(head==NULL)
                {
                    printf("\nDelition not possible :");
                }
                else
                {
                    ptr1=head;
                    //ptr=ptr1;
                    while(ptr1->next!=NULL)
                    { 
                       ptr=ptr1;
                       ptr1=ptr1->next;
                    }
                    ptr1->prev->next=ptr;
                    ptr->prev=ptr1->prev;
                    printf("\n--->%d",ptr1->data);
                    free(ptr1);
                }
                break;
            }
            case 5:
            {
                up=0;
                printf("\nenter the position you want to delete :");
                scanf("%d", &pos);
                ptr1=head;
                if(head==NULL)
                {
                    printf("\nDelition not possible :");
                }
                else
                {
                    ptr=head;
                    while(ptr->next!=head && up != pos)
                    {
                        ptr1=ptr;
                        ptr=ptr->next;
                        up++;
                    }
                    ptr->next->prev=ptr1;
                    ptr1->next=ptr->next;
                    printf("\n--->%d", ptr->data);
                    free(ptr);
                }
                break;
            }    

            default:
            {
                exit(0);
                break;
            }
        }
    }

    return 0;
}
