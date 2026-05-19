// Thien Tran 1232642283
#ifndef _stack_h
#define _stack_h 1

#include "data_structures.h"

STACK* InitStack(int capacity);

void FreeStack(STACK* S);

void Push(STACK* S, int vertex_index);

int Pop(STACK* S);

int IsEmpty(STACK* S);

int IsFull(STACK* S);

#endif