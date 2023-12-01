#pragma once

// this function peforms bubble sort on a table
void tri_bule(int *T, int n);

// this function peforms insertion sort on a table
void tri_insertion(int *T, int n);

// this function gives the right placement of a pivot on a table
int partition(int *T, int low, int high);

// this function quisorts an array
void tri_rapide(int *T, int low, int high);

// this function permutate two variables
void permut(int *a, int *b);

// this function allows us to merge two arrays
void fusion(int *T, int deb, int fin);

// this function peforms merge sort
void tri_fusion(int *T, int deb, int fin);