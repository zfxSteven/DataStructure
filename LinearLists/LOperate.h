/*************************************************************************
  > File Name   : LOperate.h
  > Author      : zfx
  > Mail        : zfx050621@163.com
  > Created Time: 2016年02月11日 星期四 14时19分24秒
 ************************************************************************/

#ifndef _LOPERATE_H_
#define _LOPERATE_H_
#endif

#include "Linear.h"
//#include "LOperate.c"

/* Initate a empty Linklist
 * rerurn a pointer of the head
 * */
LinkList InitList( LinkList L );

/* if LinkList exist 
 * Destory it
 * */
boolen DestroyList( LinkList L);

/*  make exist List empty one
 *  return a LinkList Pointer
 * */
LinkList ClearList( LinkList L);

/* jugde the list is empty or not
 * return true or false
 */
boolen ListEmpty( LinkList L );

/* return the number of elenment in the LinkList*/
int ListLength( LinkList L );

/* Get elenment value
 * if list exist and i value is legel
 * return a Elemtype pointer
 * */
ElemType *GetElem( LinkList L, int i);

/* If LinkList exist 
 * return the first one elenment Location
 * which is compatible with e judged by compare()
 * */
int LocateElem( LinkList L, ElemType e, boolen compare());

/* if LinkList exists and cur_e is not the first
 * return the precursor node pointer
 * */
LinkList PriorElem( LinkList L, LinkList cur_e);

/* if LinkList exists and cur_e is not the last one
 * return the subsequence node  pointer
 * */
LinkList NextElem( LinkList L, LinkList cur_e);

/* if LinkList exist 
 * add elenment e before i node 
 * return true or false
 * */
boolen ListInsert( LinkList L, int i, ElemType e);

/* delete i elenemnt and 
 * return its value
 * */
ElemType ListDelete( LinkList L, int i);

/* Travesal list 
 * return true or false
 * */
boolen ListTraverse( LinkList L, boolen visit());

