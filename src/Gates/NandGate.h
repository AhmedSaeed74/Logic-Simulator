/*
 * NandGate.h
 *
 *  Created on: Sep 26, 2022
 *      Author: yelnaggar
 */

#ifndef GATES_NANDGATE_H_
#define GATES_NANDGATE_H_

#include "Gate.h"

class Node;

class NandGate: public Gate {
public:
	NandGate();
	NandGate(Node* n1, Node* n2, Node* n3);

	void simulateGate();

	~NandGate();
};

#endif /* GATES_NANDGATE_H_ */
