// Thien Tran 1232642283
#ifndef _graph_h
#define _graph_h 1
#include "data_structures.h"
#include <stdio.h>

pGRAPH InitGraph(int n, int m);

pNODE CreateNode(int edgeIndex, int u, int v, double w);

void InsertNode(pGRAPH G, int u, pNODE newNode, int flag);

void AddEdge(pGRAPH G, int edge_index, int u, int v, double w, int flag, char* graph_type);

void AddEdge(pGRAPH G, int edge_index, int u, int v, double w, char* type, int flag);

void PrintADJ(pGRAPH G);

void DijkstraAlgo(pGRAPH G, int s, int t);

void Relax(pGRAPH G, int u, int v, double w);

void PrintLength(pGRAPH G, int s, int t);

void PrintPath(pGRAPH G, int s, int t, int count);

#endif	