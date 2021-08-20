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

int main()
{
    int iRet = 0;
    PNODE First = NULL;
    
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
    InsertLast(&First, 110);
    Display(First);
    //iRet = Count(First);
    DeleteFirst(&First);
    Display(First);
    DeleteLast(&First);
    Display(First);
    //printf("Count = %d",iRet);
    return 0;
}