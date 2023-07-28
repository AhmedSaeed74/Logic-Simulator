/*
 * XorGate.h
 *
 *  Created on: Sep 25, 2022
 *      Author: yelnaggar
 */

#ifndef GATES_XORGATE_H_
#define GATES_XORGATE_H_

#include "Gate.h"

class Node;

class XorGate: public Gate {
public:
	XorGate();
	XorGate(Node* n1, Node* n2, Node* n3);

	void simulateGate();

	~XorGate();
};

#endif /* GATES_XORGATE_H_ */
