// Node.cpp
// tom bailey   1050  31 jan 2011
// Definitions of the Node class methods


#include "Node.h"


Node::Node(string rawevent, string parentID)
{
	RAWE = rawevent;
	PARENT = parentID;
	ID = hash(RAWE, parentID);
	// will totally need to fix this up
}

Node::~Node()
{
	cout << "Node( " << entry_ << ", " << next_ <<
		" ) at " << this << " destroyed" << endl;
}
