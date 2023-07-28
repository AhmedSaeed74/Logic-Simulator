/*
 * AndGate.h
 *
 *  Created on: Sep 21, 2022
 *      Author: yelnaggar
 */

#ifndef GATES_ANDGATE_H_
#define GATES_ANDGATE_H_

#include "Gate.h"

class Node;

class AndGate: public Gate {
public:
	AndGate();
	AndGate(Node* n1, Node* n2, Node* n3);

	void simulateGate();

	~AndGate();
};

#endif /* GATES_ANDGATE_H_ */
