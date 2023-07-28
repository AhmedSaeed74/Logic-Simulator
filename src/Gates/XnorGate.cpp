/*
 * XnorGate.cpp
 *
 *  Created on: Sep 26, 2022
 *      Author: yelnaggar
 */

#include "XnorGate.h"
#include "Node.h"

XnorGate::XnorGate():Gate() {
	// TODO Auto-generated constructor stub

}

XnorGate::XnorGate(Node* n1, Node* n2, Node* n3): Gate(n1, n2, n3) {

}

void XnorGate::simulateGate() {
	bool value = inN1->XNOR(*(inN2));
	outN->setValue(value);
}

XnorGate::~XnorGate() {
	// TODO Auto-generated destructor stub
}

