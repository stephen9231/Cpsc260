// File:     Graph.h
//
// Author:   Stephen Tai
// SID:      35015114
// UserID:   h5e8
// Lab:      L1A
// Modified: 2013 October 24
//
//
// This file declares the Graph class for my Social Network Analyzer


#include <string>
#include <iostream>
#include <stdlib.h>


#ifndef _GRAPH_HPP
#define _GRAPH_HPP

using namespace std;

class Graph{

public:

	Graph();

	Graph(int size);

	~Graph();

	/* @param int** --> pointer to the 2D array on heap memmory
	 * @param int--> size of the 2D array
	 * print the 2D array on console
	 */
	void printGraph();

	/* @param int** --> pointer to the 2D array on heap memmory
	 * @param int--> size of the 2D array
	 * initialize the 2D array to have all 0 entries
	 */
	void initArray();

	void reSize();

	int getShortestPath(int a, int b);

	void addConnection(int personA_ID, int personB_ID);

private:

	int shortestPath;
	int graphSize;
	int** graph;

};
#endif
