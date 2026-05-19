// Thien Tran 1232642283
#ifndef _heap_h
#define _heap_h 1

#include "data_structures.h"
#include <stdio.h>

// Allocates and initializes a HEAP struct
HEAP* InitHeap(int capacity);

// Frees the HEAP struct and its internal H array
// (Does NOT free the vertices themselves)
void FreeHeap(HEAP* Q);

// Builds a min-heap from an array of vertex pointers
void BuildMinHeap(HEAP* Q, pVERTEX V_array[], int n);

// Extracts the vertex with the minimum key
pVERTEX ExtractMin(HEAP* Q);

// Notifies the heap that a vertex's key has decreased
void DecreaseKey(HEAP* Q, int position, double newKey);

// Checks if the heap is empty
int IsEmpty(HEAP* Q);

void MinHeapInsert(HEAP* pHeap, pELEMENT newNode);

void PrintHeap(HEAP* heap);

#endif