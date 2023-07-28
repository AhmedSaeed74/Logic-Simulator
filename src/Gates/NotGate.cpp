/*
 * NotGate.cpp
 *
 *  Created on: Sep 26, 2022
 *      Author: yelnaggar
 */

#include "NotGate.h"
#include "Node.h"

NotGate::NotGate():Gate() {
	// TODO Auto-generated constructor stub

}

NotGate::NotGate(Node* n1, Node* n2): Gate(n1, n2, nullptr) {

}

void NotGate::simulateGate(){
	bool value = inN1->NOT();
	inN2->setValue(value);
}

NotGate::~NotGate() {
	// TODO Auto-generated destructor stub
}

