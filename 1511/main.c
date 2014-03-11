#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct listNode{
    int value;
    struct listNode *p_next;
};
int size;
void addToTail(struct listNode **head, int value)
{
    struct listNode * p = (struct listNode*)malloc(sizeof(struct listNode));
    if (NULL == p) {
        printf("malloc error\n");
        return ;
    }
    p->value = value;
    p->p_next = NULL;
    size ++;

    //empty list
    if (NULL==(*head)) {
        *head = p;
        return ;
    }
    
    struct listNode * q = *head;
    while (NULL != q->p_next) {
        q = q->p_next;
    }
    q ->p_next = p;
}

void removeList(struct listNode **head)
{
    if (NULL == *head) {
        return;
    }
    struct listNode *p, *q;
    p = *head;
    while (NULL != p->p_next) {
        q = p->p_next;
        free(p);
        p = q;
    }
    free(p);

    *head = NULL;
    size = 0;
}
void printList(struct listNode *head)
{
    struct listNode *p = head;
    while (NULL != p) {
        printf("%d ", p->value);
        p = p->p_next;
    }
    printf("\n");
}

void revert(struct listNode** head)
{
    if (NULL == *head || NULL == (*head)->p_next) {
        return;
    }
    struct listNode *p, *q;
    p = (*head)->p_next;
    (*head)->p_next = NULL;
    while (NULL != p) {
        q = p->p_next;
        p->p_next = *head;
        *head = p;
        p = q;
    }
}
void printRevertList(struct listNode* head)
{
    int *a,i;
    a =(int*)malloc(size*sizeof(int));
    struct listNode *p = head;
    for (i = 0; i < size; i++) {
        a[i] = p->value;
        p = p->p_next;
    }
    for (i = size-1; i >=0; i--) {
        printf("%d\n", a[i]);
    }
}
int main(int argc, char* argv[])
{
    int a;
    struct listNode *p_head = NULL;
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();
    while (~scanf("%d", &a)) {
        //printf("%d\n", a);
        removeList(&p_head);
        addToTail(&p_head, a);
        while (1) {
            scanf("%d", &a);
            //printf("%d\n", a);
            if (-1 == a) {
                break;
            }
            addToTail(&p_head, a);
        }
        //(1),revert the list
        //revert(&p_head);
        //printList(p_head);
        //(2), use stack
        printRevertList(p_head);
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
