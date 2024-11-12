#include<stdio.h>
#include<stdlib.h>

struct node {

    int data;
    struct node *n_next;
    struct node *p_next;

};

struct node *head = NULL, *ptr;

int main()
{
    int ne,ch,se,val;

    while(1)
    {
        printf("\n Enter your choice :");
        printf("\n : insert at end");
        printf("\n: display ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1 :
            {
                ptr=head;
                struct node *new_node;
                new_node = (struct node *)malloc(sizeof(struct node));
                if(head == NULL)
                {
                    printf("Enter value:\n");
                    scanf("%d", &val);
                    new_node->data=val;
                    new_node->n_next=NULL;
                    new_node->p_next=NULL;
                    head=new_node;
                }
                else
                {
                    printf("\nEnter value:");
                    scanf("%d", &val);
                    ptr = head;
                    while(ptr->n_next!=NULL)
                    {
                        ptr=ptr->n_next;
                    }
                    new_node->data=val;
                    new_node->p_next=ptr;
                    new_node->n_next=NULL;
                    ptr->n_next=new_node;
                }
                break;
            }

            case 2 :
            {
            ptr = head;
            while(ptr!=NULL)
            {
                printf("--->%d", ptr->data);
                ptr=ptr->n_next;
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