#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *ptr;

int main()
{
    int ne, ch, val, pos=0,up;

    while(1)
    {
        printf("\n Enter your choice :");
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
            if(head == NULL)
            {
                printf("\nEnter the value :");
                scanf("%d", &val);
                new_node->data=val;
                head=new_node;
                new_node->next=head;
            }
                else
                {
                    ptr=head;
                    while(ptr->next!=head)
                    {
                        ptr=ptr->next;
                    }
                    printf("\nEnter the value");
                    scanf("%d", &val);
                    new_node->data=val;
                    new_node->next=head;
                    head=new_node;
                    ptr->next=new_node;
               }
               break;
            }
            case 2:
            {
                ptr=head;
                if(head==NULL)
                {
                    printf("\nnothing can be printed :");
                
                return;
                }
            
            else
            {
                printf("\n node add=%p 1 %d 1 %p --->", ptr,ptr->data,ptr->next);
                while(ptr->next!=head)
                {
                    ptr=ptr->next;
                    printf("%p 1 %d 1 %p --->",ptr,ptr->data,ptr->next);
                }
            }
            break;
            }
            case 3:
            {
                 struct node *new_node;
                 new_node = (struct node*)malloc(sizeof(struct node));
                if(head==NULL)
                {
                    printf("\nEnter the value:");
                    scanf("%d", &val);
                    new_node->data=val;
                    head=new_node;
                    new_node->next=head;

                }
                else
                {
                    printf("\nEnter the value :");
                    scanf("%d", &val);
                    ptr=head;
                    while(ptr->next!=head)
                    {
                        ptr=ptr->next;
                    }
                    new_node->data=val;
                    ptr->next=new_node;
                    new_node->next=head;
                }
                break;
            }
            case 4:
            {
                // user require position :
                int pos, up=0;
                 struct node *new_node;
                 new_node = (struct node*)malloc(sizeof(struct node));
                 printf("\nEnter the position which you want to insert :");
                 scanf("%d", &pos);
                 printf("\nEnter the value :");
                 scanf("%d", &val);
                 ptr=head;
                 if(head==NULL)
                 {
                    printf("\ninsertion not possible :");

                 }
                 else
                 {
                    while(ptr->next!=head && up<pos)
                    {
                      ptr=ptr->next;
                      up++;
                    }
                    new_node->data=val;
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