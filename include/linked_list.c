#include "linked_list.h"
#include "stdio.h"
#include "stdlib.h"


// This function creates a linked list
linked_list * create_ll(int data)
{
    linked_list *list;
    list = (linked_list *) malloc(sizeof(linked_list));
    // initialising the data to null
    list->next = NULL;
    list->data = data;

    return list;
}

// this function adds an element to the end of a linked list
void add_ll(linked_list *list, int data)
{
    linked_list *element = create_ll(data);
    linked_list *temp;
    for (temp = list; temp->next != NULL; temp = temp->next)
    {
        // nothing
    }
    temp->next = element;
}

// this function prints a linked list
void print_ll(linked_list *list)
{
    if (list == NULL)
    {
        printf("\n");
        return;
    }

    printf("%d   ", list->data);
    print_ll(list->next);
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// this part of the code is for double linked lists

// this function creates a double linked list
double_linked_list * create_dll(int data)
{
    double_linked_list *list;
    list = (double_linked_list *) malloc(sizeof(double_linked_list));
    // initialising the data to null
    list->next = NULL;
    list->prev = NULL;
    list->data = data;

    return list;
}


// this function adds an element to the end of a double linked list
void add_dll(double_linked_list *list, int data)
{
    double_linked_list *element = create_dll(data);
    double_linked_list *temp;
    for (temp = list; temp->next != NULL; temp = temp->next)
    {
        // nothing
    }
    element->prev = temp;
    temp->next    = element;
}


// this function prints a double linked list
void print_dll(double_linked_list *list)
{
    if (list == NULL)
    {
        printf("\n");
        return;
    }

    printf("%d   ", list->data);
    print_dll(list->next);
}


// this function returns a certain node from its index
double_linked_list *index_dll(double_linked_list *list, int index)
{
    int i = 0;
    double_linked_list *temp = list;
    while (i < index)
    {
        temp = temp->next;
        i++;
    }

    return temp;
}


// this function creates a double linked list out of an array
double_linked_list *array_to_dll(int *array, int length)
{
    int i;
    double_linked_list *list = create_dll(array[0]);
    for (i = 1; i < length; i++)
    {
        add_dll(list, array[i]);
    }

    return list;
}


// this function inserts an element to an index, the index should be > 0
void insert_dll(double_linked_list *list, int data, int index)
{
    if (index <= 0)
    {
        return;
    }

    double_linked_list *element = create_dll(data);
    double_linked_list *temp    = index_dll(list, index - 1);


    element->prev    = temp;
    element->next    = temp->next;
    temp->next->prev = element;
    temp->next       = element; 
}

// this frees a full double linked list
void free_dll(double_linked_list *list)
{
    if (list == NULL)
    {
        return;
    }

    free_dll(list->next);
    free(list);
}