#include<stdio.h>
#include<stdlib.h>

struct node {

    int data;
    struct node *n_next;
    struct node *p_next;

};

struct node *head = NULL, *ptr1, *ptr2;
int main()
{
    int ne,ch,se,val,up=1,pos=0;

    while(1)
    {
        printf("\n Enter your choice :");
        printf("\n 1: insert at Begining ");
        printf("\n 2: insert at user require positin ");
        printf("\n 3: display ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1 :
            {
                struct node *new_node;
                new_node = (struct node *)malloc(sizeof(struct node));
                if(head == NULL)
                {
                    printf("\nenter the value :");
                    scanf("%d", &val);
                    new_node->data=val;
                    new_node->p_next=NULL;
                    new_node->n_next=NULL;
                    head=new_node;

                }
                else{
                    printf("\nenter the value :");
                    scanf("%d", &val);
                    new_node->data=val;
                    new_node->p_next=NULL;
                    new_node->n_next=head;
                    head->p_next=new_node;
                    head=new_node;
                }
                break;
            }
            case 2 :
            {
                ptr1 = head;
                struct node *new_node;
                new_node = (struct node *)malloc(sizeof(struct node));
                printf("Enter the value");
                scanf("%d",&val);
              while(ptr1->n_next != NULL)
              {
                if(pos == up)
                {
                    break;
                }
                ptr2 = ptr1;
                ptr1 = ptr1->n_next;
                pos++;
              }
              
                 new_node->data=val;
                 new_node->n_next=ptr1;
                 new_node->p_next=ptr2;
                 ptr2->n_next=new_node;
                 ptr1->p_next=new_node;
              
                break;
            }

            case 3 :
            {
            ptr1 = head;
            while(ptr1!=NULL)
            {
                printf("--->%d", ptr1->data);
                ptr1=ptr1->n_next;
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