/*
 * NorGate.cpp
 *
 *  Created on: Sep 26, 2022
 *      Author: yelnaggar
 */

#include "NorGate.h"
#include "Node.h"

NorGate::NorGate():Gate() {
	// TODO Auto-generated constructor stub

}

NorGate::NorGate(Node* n1, Node* n2, Node* n3):Gate(n1, n2, n3) {
	// TODO Auto-generated constructor stub

}

void NorGate::simulateGate(){
	bool value = inN1->NOR(*(inN2));
	outN->setValue(value);
}

NorGate::~NorGate() {
	// TODO Auto-generated destructor stub
}

