#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node * * PPNODE;

void Display(PNODE Head)
{
    while (Head != NULL)
    {
        printf("|%d|->\t", Head->data);
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

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)               // LL is empty
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;        //
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;
    PNODE temp = *Head;

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
        
        temp->next = newn;        //
    }
}

void InsertAtPosition(PPNODE Head, int No, int iPos)
{
    int iSize = 0, i =0;
    PNODE newn = NULL;
    PNODE temp = *Head;
    iSize = Count(*Head);

    if ((iPos <1) || (iPos > iSize +1))
    {
        return;
    }

    if (iPos ==1)
    {
        InsertFirst(Head, No);
    }

    else if(iPos == iSize+1)
    {
        InsertLast(Head, No);
    }

    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data =No;
        newn -> next = NULL;

        for (i = 1; i < iPos-1; i++)
        {
            temp =temp -> next;
        }
        
        newn ->next = temp ->next;
        temp ->next = newn;
    }
}

void DeleteFirst(PPNODE Head)
{
    PNODE Temp = *Head;
    if(*Head == NULL)     //If LL is empty
    {
        return;
    }
    else if((*Head) -> next == NULL) //If LL contains single node
    {
        free(*Head);   // Delete that first node
        *Head = NULL;  // Set NULL into first pointer
    }
    else   // If LL Contains more than one node
    {
        (*Head) = (*Head)->next;
        free(Temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE Temp = *Head;
    if(*Head == NULL)           //If LL is empty
    {
        return;
    }
    else if((*Head) -> next == NULL)
    {
        free(*Head);              // Delete that first node
        *Head = NULL;            // Set NULL into first pointer
    }
    else
    {
        while ((Temp)->next->next != NULL)
        {
            Temp = Temp -> next;
        }

        free (Temp->next);
        Temp->next = NULL;
        
    }
}

void DeleteAtPosition(PPNODE Head, int iPos)
{
    int iSize = 0, i =0;
    PNODE temp = *Head;
    PNODE Target = NULL;
    iSize = Count(*Head);

    if ((iPos <1) || (iPos > iSize))
    {
        return;
    }

    if (iPos ==1)
    {
        DeleteFirst(Head);
    }

    else if(iPos == iSize)
    {
        DeleteLast(Head);
    }

    else
    {
        for (i = 1; i < iPos-1; i++)
        {
            temp =temp -> next;
        }
        Target = temp -> next;
        temp ->next = Target ->next;
        free(Target);
    }
}

int main()
{
    int iRet = 0, iOption =1, iValue = 0, iPos =0;
    PNODE First = NULL;

    while (iOption != 0)
    {
        printf("------------------------------------------------\n");
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
        printf("------------------------------------------------\n");
        scanf("%d", &iOption);

        switch (iOption)
        {
        case 1 : 
            printf("Enter data to insert: \n");
            scanf("%d", &iValue);
            InsertFirst(&First, iValue);
            break;

        case 2 : 
            printf("Enter data to insert: \n");
            scanf("%d", &iValue);
            InsertLast(&First, iValue);
            break;
        
        case 3 : 
            printf("Enter data to insert: \n");
            scanf("%d", &iValue);
            printf("Enter position: \n");
            scanf("%d", &iPos);
            InsertAtPosition(&First, iValue, iPos);
            break;

        case 4 : 
            DeleteFirst(&First);
            break;

        case 5 : 
            DeleteLast(&First);
            break;
        
        case 6 : 
            printf("Enter position: \n");
            scanf("%d", &iPos);
            DeleteAtPosition(&First, iPos);
            break;

        case 7:
            Display(First);
            break;

        case 8:
            iRet = Count(First);
            printf("No of Nodes are : %d\n", iRet);
            break;
        
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