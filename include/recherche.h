#pragma once

// this function lineairely search for an element in an array
int rech_lineaire(int *tableau, int lengeur, int nombre);

// this function searches linearly for an element in a sorted array
int tri_rech_lineaire(int *tableau, int lengeur, int nombre);

// this function peforms binary search to an array
int rech_dicho(int *tableau, int debut, int fin, int nombre);
