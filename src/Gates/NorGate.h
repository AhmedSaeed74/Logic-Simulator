/*
 * NorGate.h
 *
 *  Created on: Sep 26, 2022
 *      Author: yelnaggar
 */

#ifndef GATES_NORGATE_H_
#define GATES_NORGATE_H_

#include "Gate.h"

class Node;

class NorGate: public Gate {
public:
	NorGate();
	NorGate(Node* n1, Node* n2, Node* n3);

	void simulateGate();

	~NorGate();
};

#endif /* GATES_NORGATE_H_ */
