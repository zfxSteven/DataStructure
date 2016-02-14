/*************************************************************************
  > File Name   : LOperate.c
  > Author      : zfx
  > Mail        : zfx050621@163.com
  > Created Time: 2016年02月11日 星期四 11时47分01秒
 ************************************************************************/
/* Operation Defination for Linear Structure */
#include<stdio.h>
#include<stdlib.h>

#include"Linear.h"
#include"LOperate.h"

boolen DestroyList( LinkList L);


/* init list and apply memory space
 * return a LinkList pointer
 * */
LinkList InitList( LinkList L)
{
    L = NULL;

    //memory allocation ( one Node)
    L = ( LinkList )malloc( sizeof( LNode ) );

    if( L == NULL ) exit( ERROR );
#if 0
    L->length = 0;
#endif
    L->next = NULL;

    return L;
}

/* if LinkList exist 
 * destroy it 
 * return boolen
 * */

boolen DestroyList( LinkList L)
{   
    //check if Linear list exist
    if( L == NULL ){ return false;}

    int nodeLength = 0;
    LinkList ptr = L,q;//LinkList traversal pointer
    while( ptr != NULL ){
        q=ptr;
        ptr=ptr->next;
        free(q);
    }
    return true;
}

/* make an exist list an empty one 
 * return a LinkList pointer
 * */
LinkList ClearList( LinkList L)
{
    //check if Linear list exist
    if( L == NULL ){ exit( ERROR );}

    int nodeLength = 0;
    LinkList ptr = L,q;//LinkList traversal pointer
    while( ptr != NULL ){
        q=ptr;
        ptr=ptr->next;
        free(q);
    }
#if 0
    if( DestoryList( L ) == false ){ exit( ERROR );}
#endif
    return L;
} 
/* jugde the list is empty or not
 * return true or false
 */
boolen ListEmpty( LinkList L )
{
    if( L == NULL){
        return true;
    }
    return false;
}

/* return the number of elenment in the LinkList*/
int ListLength( LinkList L )
{   
    if( L == NULL ){ exit( ERROR );}
    LinkList ptr = L;
    int i=0;
    for( i=0 ; ptr != NULL ; i++ ){
        ptr = ptr->next;
    }

    return i;
}

/* Get elenment value
 * if list exist and i value is legel
 * return a Elemtype pointer
 * */
ElemType *GetElem( LinkList L, int i)
{
    if( L == NULL || ( i < 0 || i >= ListLength( L ) ) ){ exit( ERROR );}
    LinkList ptr = L;
    int j=0;
    for( j = 0; j != i; j++ ){
        ptr = ptr->next;
    }
    return ptr->data;
}

/* If LinkList exist 
 * return the first one elenment Location
 * which is compatible with e judged by compare()
 * */
int LocateElem( LinkList L, ElemType e, boolen (*compare)( ElemType e1, ElemType e2))
{
    
    return true;
}

/* if LinkList exists and cur_e is not the first
 * return the precursor node pointer
 * */
LinkList PriorElem( LinkList L, LinkList cur_e)
{   
    //check input data
    if( L == NULL || cur_e == NULL ){ exit( ERROR );}
    LinkList ptr = L;
    //if equal to the first node ,exit
    if( ptr->data[0] == cur_e->data[0] ){
        printf("\n cur_e equal to the first node.\n");
        exit( ERROR );
    }
    while( ptr->data[0] != cur_e->data[0] ){
        //last is not compare,cur_e do not exist
        if( ptr == NULL ){
            printf("\ncur_e not exist in this link list.\n");
            exit( ERROR );
        }
        ptr = ptr->next;
    }

    return ptr;
}

/* if LinkList exists and cur_e is not the last one
 * return the subsequence node  pointer
 * */
LinkList NextElem( LinkList L, LinkList cur_e)
{
    //check input data
    if( L == NULL || cur_e == NULL ){ exit( ERROR );}
    LinkList ptr = L;
    while( ptr->data[0] != cur_e->data[0] ){
        //last is not compare,cur_e do not exist
        if( ptr->next == NULL ){
            printf("\ncur_e not exist in this link list.\n");
            exit( ERROR );
        }
        ptr = ptr->next;
    }
    //last one is cur_e
    if( ptr->data[0] == cur_e->data[0] && ptr->next == NULL){
        printf("\nCompare with last one!\n");
        exit( ERROR );
    }

    return ptr->next;

}

/* if LinkList exist 
 * add elenment e before i node 
 * return true or false
 * */
boolen ListInsert( LinkList L, int i, ElemType e)
{
    //check input data
    if( L == NULL || ( i < 0 || i > ListLength( L ) ) ){ exit( ERROR );}
    LinkList ptr = L;

    LinkList qtr = ( LinkList )malloc( sizeof( LNode ) );
    qtr->data[0] = e;

    int j;
    for( j = 0 ; j == i ; j++){
        ptr = ptr->next;
    }
    
    //insert
    qtr->next = ptr->next;
    ptr->next = qtr;

    return true;
}

/* delete i elenemnt and 
 * return its value
 * */
ElemType ListDelete( LinkList L, int i)
{
    //check input data
    if( L == NULL || ( i < 0 || i >= ListLength( L ) ) ){ exit( ERROR );}
    LinkList ptr = L;
    ElemType e;
    int j;

    for( j = 0 ; j != i; j++ ){
        ptr = ptr->next;
    }

    //pass the value & delete
    e = ptr->data[0];
    free( ptr );

    return e;
}

/* Travesal list 
 * return true or false
 * */
boolen ListTraverse( LinkList L, boolen visit())
{
    return true;
}
