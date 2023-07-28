/*
 * Gate.cpp
 *
 *  Created on: Sep 21, 2022
 *      Author: yelnaggar
 */

#include "Gate.h"
#include "Node.h"

Gate::Gate(): inN1(nullptr), inN2(nullptr), outN(nullptr)
{
	// TODO Auto-generated constructor stub

}

Gate::Gate(Node* n1, Node* n2, Node* n3): inN1(n1), inN2(n2), outN(n3) {

}

Node* Gate::getInpN1() const {
	return inN1;
}

Node* Gate::getInpN2() const {
	return inN2;
}

Node* Gate::getOutN() const {
	return outN;
}

void Gate::setInpN1(Node*& node){
	inN1 = node;
}

void Gate::setInpN2(Node*& node){
	inN2 = node;
}

void Gate::setOutN(Node*& node) {
	outN = node;
}

Gate::~Gate() {
	// TODO Auto-generated destructor stub
}

