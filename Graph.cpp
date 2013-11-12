// File:     Graph.cpp
//
// Author:   Stephen Tai
// SID:      35015114
// UserID:   h5e8
// Lab:      L1A
// Modified: 2013 October 24
//
//
// This file defines the Graph class for my Social Network Analyzer

#include "Graph.h"

using namespace std;


Graph::Graph()
{
	this->graphSize=0;
	graph = new int*[graphSize];
	for(int i = 0;i < graphSize; i++)
	{
		graph[i] = new int[graphSize];
	}

}

Graph::Graph(int size)
{
	this->graphSize = size;

	graph = new int*[graphSize];
	for(int i = 0;i < graphSize; i++)
	{
		graph[i] = new int[graphSize];
	}
}

Graph::~Graph()
{
	for(int i = 0;i < graphSize; i++)
	{
		delete[] graph[i];
	}
	delete[] graph;
}

void Graph::initArray()
{
	for(int i =0; i < graphSize; i++)
		for(int j =0; j < graphSize; j++)
			graph[j][i] = 0;
}

void Graph::printGraph()
{
	for(int i =0; i < graphSize; i++)
	{
		for(int j =0; j < graphSize; j++)
			cout<<graph[j][i]<<" ";
		cout<<endl;
	}
}


void Graph::addConnection(int personA_ID, int personB_ID)
{
	graph[personA_ID][personB_ID]=1;
	graph[personB_ID][personA_ID]=1;
}

/*
void Graph::reSize()
{
	graph = (int**) realloc (graph,(graphSize+1)*sizeof(int));
	for(int i = 0;i < graphSize+1; i++)
	{
		graph[i] = (int*)realloc(graph,(graphSize+1)*sizeof(int));
	}
}
*/