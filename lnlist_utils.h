/*============================================================================

                A basic linked lists implementation in C

    @author: Hugo Aguirre
    @description: The functions defined below, are intended to complete
                  the Hacker Rank excercises about Linked Lists.

============================================================================*/

#define MAX_NUMBER_NODES 256        /* max number of nodes allowed */

/* A basic node structure */
typedef struct Node {
    int value;
    struct Node* next;
} Node;

/*============================================================================
  @function
    create_list

  @description
    Creates a linked list with the provided number of nodes.

  @return value
    NULL if there is an error
    A pointer to the linked list's head.
============================================================================*/
Node* create_list(int size);

int print_list(Node* head);
