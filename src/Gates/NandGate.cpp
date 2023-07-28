/*
 * NandGate.cpp
 *
 *  Created on: Sep 26, 2022
 *      Author: yelnaggar
 */

#include "NandGate.h"
#include "Node.h"

NandGate::NandGate():Gate(){
	// TODO Auto-generated constructor stub

}

NandGate::NandGate(Node* n1, Node* n2, Node* n3):Gate(n1, n2, n3) {

}

void NandGate::simulateGate(){
	bool value = inN1->NAND(*(inN2));
	outN->setValue(value);
}

NandGate::~NandGate() {
	// TODO Auto-generated destructor stub
}

