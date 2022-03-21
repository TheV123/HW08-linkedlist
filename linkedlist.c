//TODO: Remember to add include statement here. 

ll_node *ll_head(ll_node *list){
  //TODO: Implement this function, see header file for description
  //TODO: Update return statement. 
  return NULL; 
}


ll_node *ll_tail(ll_node *list){
  //TODO: Implement this function, see header file for description
  //TODO: Update return statement. 
  return NULL; 
}


unsigned long ll_length(ll_node *list){
  //TODO: Implement this function, see header file for description
  //TODO: Update return statement. 
  return NULL; 
}

ll_node *ll_find(ll_node *list, int value){
  //TODO: Implement this function, see header file for description
  //TODO: Update return statement. 
  return NULL; 
}


ll_node *ll_remove(ll_node *list){
  //TODO: Implement this function, see header file for description
  //TODO: Update return statement. 
  return NULL; 
}


ll_node *ll_insert(int value, ll_node *list, int before){  
//TODO: Implement this function, see header file for description
//TODO: Update return statement. 
return NULL; 
  
}


void ll_show(ll_node *list) {
    ll_node *ptr = ll_head(list);
    putchar('[');
    while(ptr) {
        if (ptr->prev) printf(", ");
        if (ptr == list) putchar('*');
        printf("%d", ptr->value);
        if (ptr == list) putchar('*');
        ptr = ptr->next;
    }
    puts("]");
}


/**
 * Debugging display: shows the address and all the fields of the node,
 * optionally with the nodes before (if b is true) and after (if f is true).
 *
 * Written by Luther Tychonievich and made available to all students.
 */
void ll_dump(ll_node *list, int f, int b) {
    if (b && list->prev) ll_dump(list->prev, 0, 1);
    printf("%p: %p\t%d\t%p\n", list, list->prev, list->value, list->next);
    if (f && list->next) ll_dump(list->next, 1, 0);
}


int main(int argc, const char *argv[]) {
    ll_node *x = NULL;
    putchar('A'); ll_show(x);
    x = ll_insert(25, x, 1);
    putchar('B'); ll_show(x);
    x = ll_insert(1, x, 0);
    putchar('C'); ll_show(x);
    x = ll_insert(99, x, 1);
    putchar('D'); ll_show(x);
    x = ll_insert(0, x, 1);
    putchar('E'); ll_show(x);
    x = ll_insert(-8, ll_tail(x), 0);
    putchar('F'); ll_show(x);
    ll_node *y = ll_head(x);
    putchar('G'); ll_show(y);
    printf("Length: %lu (or %lu)\n", ll_length(y), ll_length(x));
    x = ll_remove(x);
    putchar('H'); ll_show(x);
    putchar('I'); ll_show(y);
    x = ll_remove(ll_find(y, 99));
    putchar('J'); ll_show(x);
    putchar('K'); ll_show(y);
    
    return 0;
}
