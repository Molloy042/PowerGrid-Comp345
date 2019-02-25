#include "AdjListNode.h"
#include<cstdlib>

AdjListNode *AdjListNode::newAdjListNode(int data)
{
	AdjListNode *nptr = new AdjListNode;
	nptr->data = data;
	nptr->next = NULL;
	return nptr;
}
int AdjListNode::getData() {

	return data;
}

AdjListNode *AdjListNode::getNext() {

	return next;
}

void AdjListNode::setNext(AdjListNode *head) {

	next = head;
	
};

