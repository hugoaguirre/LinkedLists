/*============================================================================

		A basic linked lists implementation in C

    @author: Hugo Aguirre
    @description: The functions implemented below, are intended to complete
                  the Hacker Rank excercises about Linked Lists.

============================================================================*/
#include <stdio.h>

#include "lnlist_utils.h"

int main(void)
{
    /* create the list */
    Node* head = create_list(10);
    /* print the list! */
    print_list(head);

    return 0;
}



