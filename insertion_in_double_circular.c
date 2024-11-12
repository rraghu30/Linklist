#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *n_next;
    struct node *p_next;
};
struct node *head = NULL, *ptr, *ptr1, *ptr2;

int main()
{
    int ne, ch, val, pos, up=0;
    while(1)
    {
        printf("\n Enter the value :");
        printf("\n 1: insert at start :");
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
            if(head==NULL)
            {
                printf("\nEnter the value :");
                scanf("%d", &val);
                new_node->data=val;
                head=new_node;
                new_node->n_next=head;
                new_node->p_next=head;
            }
            else 
            {
                ptr=head;
                ptr1=head;
                while(ptr->n_next!=head)
                {
                    ptr=ptr->n_next;
                }
                printf("\nEnter the value :");
                scanf("%d", &val);
                new_node->data=val;
                new_node->n_next=ptr1;
                new_node->p_next=ptr;
                head=new_node;
                ptr->n_next=new_node;
                ptr1->p_next=new_node;
            }
            break;
            }
            case 2:
            {
                ptr=head;
                if(head==NULL)
                {
                    printf("\nnothimg can be printed :");
                    
                }
                else
                {
                    printf("\n node add = %p | %d | %p--->",ptr,ptr->data,ptr->n_next);
                    while(ptr->n_next!=head)
                    {
                        ptr=ptr->n_next;
                        printf("--%p | %d | %p--->",ptr,ptr->data,ptr->n_next);
                    }

                }
                break;
            }
            case 3:
            {
                 struct node *new_node = (struct node*)malloc(sizeof(struct node));
            if(head==NULL)
            {
                printf("\nEnter the value :");
                scanf("%d", &val);
                new_node->data=val;
                head=new_node;
                new_node->n_next=head;
                new_node->p_next=head;
            }
            else
            {
                ptr=head;
                ptr1=ptr;
                while(ptr->n_next!=head);
                {
                    ptr=ptr->n_next;
                }
                printf("\nEnter the value :");
                scanf("%d", &val);
                new_node->data=val;
                new_node->n_next=ptr1;
                new_node->p_next=ptr;
                ptr->n_next=new_node;
                ptr1->p_next=new_node;
            }
            break;
            }
            case 4:
            {
                up=0;
                struct node *new_node = (struct node*)malloc(sizeof(struct node));
                printf("\nEnter the position which you want to insert :");
                scanf("%d", &pos);
                printf("\nEnter the value :");
                scanf("%d", &val);
                ptr1=head;
                if(head==NULL)
                {
                    printf("\n insertion can't be possible :");
                }
                else
                {
                    while(ptr->n_next!=head && up<pos)
                    {
                        ptr1= ptr->n_next;
                        up++;
                    }
                    new_node->data=val;
                    new_node->n_next=ptr1;
                    new_node->p_next=ptr;
                    ptr->n_next=new_node;
                    ptr1->p_next=new_node;
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