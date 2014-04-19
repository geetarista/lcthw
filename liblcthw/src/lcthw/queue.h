#ifndef _lcthw_Queue_h
#define _lcthw_Queue_h

#include "list.h"

#define Queue List

#define Queue_create() List_create()
#define Queue_destroy(A) List_destroy(A)

#define Queue_send(A, B) List_push(A, B)
#define Queue_peek(A) List_first(A)
#define Queue_recv(A) List_shift(A)

#define Queue_count(A) List_count(A)

#define QUEUE_FOREACH(A, B) ListNode *B = NULL;\
    for(B = A->first; B != NULL; B = B->next)

#endif
