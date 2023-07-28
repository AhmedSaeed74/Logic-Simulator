/*
 * OrGate.h
 *
 *  Created on: Sep 25, 2022
 *      Author: yelnaggar
 */

#ifndef GATES_ORGATE_H_
#define GATES_ORGATE_H_

#include "Gate.h"

class Node;

class OrGate: public Gate {
public:
	OrGate();
	OrGate(Node* n1, Node* n2, Node* n3);

	void simulateGate();

	~OrGate();
};

#endif /* GATES_ORGATE_H_ */
