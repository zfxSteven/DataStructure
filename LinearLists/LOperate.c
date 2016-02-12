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

LinkList InitList( LinkList L)
{
    L = NULL;
    L = ( LinkList )malloc( sizeof( LNode ) );
    if( L == NULL ) exit( ERROR );
    L->length = 0;
    return L;
}

/* if LinkList exist 
 * destroy it 
 * return boolen
 * */
#if 0
boolen DestroyList( LinkList L)
{   
    //check if Linear list exist
    if( L == NULL ){ return false;}

    int nodeLength = 0;
    LinkList ptr = L,q;//LinkList traversal pointer
    while( ptr->next != NULL ){
        q=ptr;
        ptr=ptr->next;
        free(q);
    }

    return true;
}
#endif
