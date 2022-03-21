#ifndef __LINKEDLIST_H
#define __LINKEDLIST_H

/**
 * A doubly linked-list node.
 */
typedef struct ll_node_s {
    int value;
    struct ll_node_s *prev;
    struct ll_node_s *next;
} ll_node;


/**
 * Returns a pointer to the first node of a list, given a pointer to any node 
 * in the list. If the provided pointer is `NULL`, instead returns `NULL`.
 */
ll_node *ll_head(ll_node *list);

/**
 * Returns a pointer to the last node of a list, given a pointer to any node 
 * in the list. If the provided pointer is `NULL`, instead returns `NULL`.
 */
ll_node *ll_tail(ll_node *list);

/**
 * Returns the number of nodes in the list, which is the same for all nodes
 * in the list and 0 for `NULL`.
 */
unsigned long ll_length(ll_node *list);

/**
 * Given a pointer to a node in a list, returns a pointer to the first node
 * at or after that node which has the given `value`. If given `NULL`, or
 * if no such node exists, returns `NULL`.
 */
ll_node *ll_find(ll_node *list, int value);


/**
 * Given a pointer to a node in a list, remove that node from the list,
 * `free`ing its memory in the process. Returns a pointer to the node that now
 * occupies the same position in the list that the removed node used to occupy
 * (which may be `NULL` if the removed node was the last node in the list).
 * 
 * If given `NULL`, this function does nothing and returns `NULL`.
 */
ll_node *ll_remove(ll_node *list);

/**
 * Extend a list by one by adding `value` next to `list`. If `before` is 0,
 * inserts `value` immediately following the node pointed to by `list`;
 * otherwise inserts `value` immediately before that node. If `list` is NULL,
 * the newly inserted node is the entire list. In all cases, the new node is 
 * allocated using `malloc` and returned by the function.
 */
ll_node *ll_insert(int value, ll_node *list, int before);

/**
 * Displays the contents of the list separated by commas and surrounded by
 * brackets, with the pointed-to node highlighted with asterisks.
 */
void ll_show(ll_node *list);


#endif /* ifdef __LINKEDLIST_H */
