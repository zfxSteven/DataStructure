/*
 *  Linear List  Defination
 *  2016/2/16 15:53
 *  
 * */
#ifndef _LINEAR_H_
#define _LINEAR_H_

#include<stdlib.h>
/*
 *  this file define linear sturcture
 *  and must environment vriaties and
 *  use linklist to complete it 
 * */

/* Environment Defination */
#ifndef boolen
    typedef unsigned int boolen;
    #define true 1
    #define false 0
#endif

#define ERROR -1
#define SUCCESS 1

typedef int  ElemType;/* default element type is integer */
#define MAC_LENGTH sizeof( int )
#define _MAX_LNODE_ 100 //Every node max data number

/*cannot use  #define to forecast overflow */
#if 0
    #if MAC_LENGTH == 4
        /* default LNode Length <= 2^16-1 */
        #define _MAX_LNODE_ 100 //Every node max data number
        typedef unsigned int LinearLength;
    #endif
    #if MAC_LENGTH == 8
        /* default LNode Length <= 2^32-1 */
        #define _MAX_LNODE_ 100 //Every node max data number
        typedef unsigned int LinearLength;
    #endif
#endif 

/*Structure Defination */
typedef struct{
    ElemType data[ _MAX_LNODE_ ];
    
    //LinearLength length;
    int length; /*! ! !  overflow risk exist ! ! ! */

    struct LNode *next;
}LNode, *LinkList;
//use LNode declare linear node
//use LinkList declare a LNode pointer 
#endif

