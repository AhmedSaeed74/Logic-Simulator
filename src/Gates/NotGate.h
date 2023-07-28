/*
 * NotGate.h
 *
 *  Created on: Sep 26, 2022
 *      Author: yelnaggar
 */

#ifndef GATES_NOTGATE_H_
#define GATES_NOTGATE_H_

#include "Gate.h"

class Node;

class NotGate: public Gate {
public:
	NotGate();
	NotGate(Node* n1, Node* n2);

	void simulateGate();

	~NotGate();
};

#endif /* GATES_NOTGATE_H_ */
