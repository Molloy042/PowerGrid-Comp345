#pragma once
#ifndef AdjListNode_H
#define AdjListNode_H

//class for an adjacency list
class AdjListNode
{
private:
	int data;
	AdjListNode *next;

public:
	static AdjListNode* newAdjListNode(int data);
	void setNext(AdjListNode *head);
	AdjListNode* getNext();
	int getData();


};

#endif AdjListNode_H