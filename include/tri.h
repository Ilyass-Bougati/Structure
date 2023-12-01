#pragma once

// this function peforms bubble sort on a table
void tri_bule(int *tableau, int longeur);

// this function peforms insertion sort on a table
void tri_insertion(int *tableau, int longeur);

// this function gives the right placement of a pivot on a table
int partition(int *tableau, int low, int high);

// this function quisorts an array
void tri_rapide(int *tableau, int low, int high);

// this function permutate two variables
void permut(int *a, int *b);

// this function allows us to merge two arrays
void fusion(int *tableau, int debut, int fin);

// this function peforms merge sort
void tri_fusion(int *tableau, int debut, int fin);
