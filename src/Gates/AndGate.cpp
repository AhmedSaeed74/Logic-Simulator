/*
 * AndGate.cpp
 *
 *  Created on: Sep 21, 2022
 *      Author: yelnaggar
 */

#include "AndGate.h"
#include "Node.h"

AndGate::AndGate():Gate() {
	// TODO Auto-generated constructor stub

}

AndGate::AndGate(Node* n1, Node* n2, Node* n3): Gate(n1, n2, n3) {

}

void AndGate::simulateGate() {
	bool value = inN1->AND(*(inN2));
	outN->setValue(value);
}

AndGate::~AndGate() {
	// TODO Auto-generated destructor stub
}

