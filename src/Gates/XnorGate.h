/*
 * XnorGate.h
 *
 *  Created on: Sep 26, 2022
 *      Author: yelnaggar
 */

#ifndef GATES_XNORGATE_H_
#define GATES_XNORGATE_H_

#include "Gate.h"

class Node;

class XnorGate: public Gate {
public:
	XnorGate();
	XnorGate(Node* n1, Node* n2, Node* n3);

	void simulateGate();

	~XnorGate();
};

#endif /* GATES_XNORGATE_H_ */
