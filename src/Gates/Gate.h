/*
 * Gate.h
 *
 *  Created on: Sep 21, 2022
 *      Author: yelnaggar
 */

#ifndef GATES_GATE_H_
#define GATES_GATE_H_

#include <iostream>
using namespace std;

class Node;

class Gate {
protected:
	Node* inN1;
	Node* inN2;
	Node* outN;

public:
	Gate();
	Gate(Node* n1, Node* n2, Node* n3);

	Node* getInpN1() const;
	Node* getInpN2() const;
	Node* getOutN() const;

	void setInpN1(Node*& node);
	void setInpN2(Node*& node);
	void setOutN(Node*& node);

	virtual void simulateGate() = 0;

	virtual ~Gate();
};

#endif /* GATES_GATE_H_ */
