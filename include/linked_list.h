#pragma once

// list chainee
typedef struct linked_list {
    int data;
    struct linked_list *next;
} linked_list;


linked_list * create_ll(int data);
void add_ll(linked_list *list, int data);
void print_ll(linked_list *list);



// list double chainee
typedef struct double_linked_list{
    struct double_linked_list *prev;
    int data;
    struct double_linked_list *next;
} double_linked_list;


double_linked_list * create_dll(int data);
void add_dll(double_linked_list *list, int data);
void print_dll(double_linked_list *list);
double_linked_list *index_dll(double_linked_list *list, int index);
double_linked_list *array_to_dll(int *array, int length);
void insert_dll(double_linked_list *list, int data, int index);
void free_dll(double_linked_list *list);