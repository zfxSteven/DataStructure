/*************************************************************************
  > File Name   : main.c
  > Author      : zfx
  > Mail        : zfx050621@163.com
  > Created Time: 2016年02月11日 星期四 11时41分33秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#include "LOperate.h"

int main()
{
#if 0
    LinkList p= ( LinkList )malloc( sizeof( LNode ));
    p->data[0]=1;
    printf("%d\n",p->data[0]);
#endif 
    
    //test
    LinkList p;
    p = InitList(p);

    return EXIT_SUCCESS;
}
