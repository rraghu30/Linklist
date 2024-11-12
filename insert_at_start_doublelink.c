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
    int ne,ch,se;

    while(1)
    {
        printf("\n Enter your choice :");
        printf("\n 1 : insert at start");
        printf("\n 2 : display ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1 :
            {
                struct node *new_node;
                new_node = (struct node *)malloc(sizeof(struct node));
                if(head == NULL)
                {
                    printf("Enter value:\n");
                    scanf("%d", &ne);
                    new_node->data=ne;
                    new_node->n_next=NULL;
                    new_node->p_next=NULL;
                    head=new_node;
                }
                else
                {
                    printf("\nEnter value:");
                    scanf("%d", &ne);
                    new_node->data=ne;
                    new_node->n_next=head;
                    new_node->p_next=NULL;
                    head->p_next=new_node;
                    head=new_node;
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