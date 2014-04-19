#ifndef _lcthw_Stack_h
#define _lcthw_Stack_h

#include "list.h"

#define Stack List

#define Stack_create() List_create()
#define Stack_destroy(A) List_destroy(A)

#define Stack_push(A, B) List_push(A, B)
#define Stack_peek(A) List_last(A)
#define Stack_pop(A) List_pop(A)

#define Stack_count(A) List_count(A)

#define STACK_FOREACH(A, B) ListNode *_node = NULL;\
    ListNode *B = NULL;\
    for(B = _node = A->last; _node != NULL; B = _node = _node->prev)

#endif
