#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
    struct node * prev;               //+
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node * * PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;              //+

    if(*Head == NULL)               // LL is empty
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        (*Head) ->prev = newn;
        *Head = newn;              //+
    }
}

void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;              //+

    if(*Head == NULL)               // LL is empty
    {
        *Head = newn;
    }
    else
    {
        while (temp ->next != NULL)
        {
            temp = temp -> next;
        }
        temp->next = newn;
        newn->prev = temp;
    }
}

void Display(PNODE Head)
{
    printf("NULL <->\t");
    while (Head != NULL)
    {
        printf("|%d|<->\t", Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt = 0;
    while (Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}

int main()
{
    int iRet = 0, iOption =1, iValue = 0, iPos =0;
    PNODE First = NULL;

    while (iOption != 0)
    {
        printf("\n************************************************\n");
        printf("Enter your action on Linked list: \n");
        printf("1: Insert node at first position\n");
        printf("2: Insert node at last position\n");
        printf("3: Insert node at given position\n");
        printf("4: Delete first node \n");
        printf("5: Delete last node\n");
        printf("6: Delete node at given position\n");
        printf("7: Display the contents of linked list\n");
        printf("8: Count the no of nodes of linked list\n");
        printf("0: Exit application\n");
        printf("************************************************\n");
        scanf("%d", &iOption);

        switch (iOption)
        {
        case 1 : 
            printf("Enter Data to Insert");
            scanf("%d", &iValue);
            InsertFirst(&First, iValue);
            break;

        case 2 : 
            printf("Enter Data to Insert");
            scanf("%d", &iValue);
            InsertLast(&First, iValue);
            break;
        
        case 3 : 

            break;

        case 4 : 
            break;

        case 5 : 
            break;
        
        case 6 :
            break;

        case 7:
            Display(First);
            break;

        case 8:
            iRet = Count(First);
            printf("No of Nodes are : %d\n", iRet);
        
        case 0:
            printf("Thank you for using Marvellous Linked list application");
            break;

        default:
            printf("Please enter valid option ");
            break;
        }
    }

    return 0;
}