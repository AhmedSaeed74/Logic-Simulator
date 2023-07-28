/*
 * OrGate.cpp
 *
 *  Created on: Sep 25, 2022
 *      Author: yelnaggar
 */

#include "OrGate.h"
#include "Node.h"

OrGate::OrGate():Gate() {
	// TODO Auto-generated constructor stub

}

OrGate::OrGate(Node* n1, Node* n2, Node* n3): Gate(n1, n2, n3)
{

}

void OrGate::simulateGate(){
	bool value = inN1->OR(*(inN2));
	outN->setValue(value);
}

OrGate::~OrGate() {
	// TODO Auto-generated destructor stub
}

