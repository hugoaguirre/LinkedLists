/*============================================================================

                A basic linked lists implementation in C

    @author: Hugo Aguirre
    @description: The functions implemented below, are intended to complete
                  the Hacker Rank excercises about Linked Lists.

============================================================================*/

#include <stdio.h>
#include <stdlib.h>

#include "lnlist_utils.h"

Node* create_list(int size)
{
    int i;
    Node* head = NULL;
    Node* tail = NULL;

    if (0 >= size || MAX_NUMBER_NODES < size) {
        printf("%s: Error, invalid size!\n", __FUNCTION__);
	return NULL;
    }

    for (i = 0; i <= size; i++) {
        if (NULL == head) {
            /* it means we are on the first iteration */
            head = (Node*) malloc(sizeof(Node));
            tail = (Node*) malloc(sizeof(Node));
            head->value = i;
            tail = head;
        } else {
            /* the head is defined, creating nodes and moving the tail */
           tail->next = (Node*) malloc(sizeof(Node));
           tail->value = i;
           tail = tail->next;
        }
    }

    return head;
}

int print_list(Node* head)
{
    Node* tail = NULL;
    int list_len = 0;

    if (NULL == head) {
        printf("NULL->\n");
        return list_len;
    }

    tail = head;
    while (NULL != tail->next) {
        printf("%d->", tail->value);
        tail = tail->next;
        list_len++;
    }
    printf("NULL\n");

    return list_len;
}


