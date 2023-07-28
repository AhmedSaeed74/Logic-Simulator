/*
 * XorGate.cpp
 *
 *  Created on: Sep 25, 2022
 *      Author: yelnaggar
 */

#include "XorGate.h"
#include "Node.h"

XorGate::XorGate():Gate() {
	// TODO Auto-generated constructor stub

}

XorGate::XorGate(Node* n1, Node* n2, Node* n3): Gate(n1, n2, n3)
{

}

void XorGate::simulateGate() {
	bool value = inN1->XOR(*(inN2));
	outN->setValue(value);
}

XorGate::~XorGate() {
	// TODO Auto-generated destructor stub
}

