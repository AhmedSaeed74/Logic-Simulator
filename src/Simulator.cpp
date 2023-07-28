/*
 * Simulator.cpp
 *
 *  Created on: Sep 21, 2022
 *      Author: yelnaggar
 */

#include "Simulator.h"
#include "Gates\Node.h"

Simulator::Simulator() {

}

Simulator& Simulator::getInstance() {
	static Simulator singletonObject;
	return singletonObject;
}

void Simulator::postGate(Gate* gate){
	if (gate != nullptr)
		gatesArray.push_back(gate);
}

void Simulator::postNode(Node* node) {
	if (node != nullptr)
		nodesArray.push_back(node);
}

Node* Simulator::findNode(const string& nodeName){
	Node* node = nullptr;

	for (uint32_t i=0; i<nodesArray.size(); i++)
	{
		if (nodesArray[i]->getName() == nodeName)
		{
			node = nodesArray[i];
			break;
		}
	}

	return node;
}

void Simulator::printAllNodes() {

	for (uint32_t i=0; i<nodesArray.size(); i++)
	{
		if (nodesArray[i] != nullptr)
			cout<<*(nodesArray[i]);
	}
}

void Simulator::printAllGates()
{
	cout<<"size gates array: "<<gatesArray.size()<<"\n";

	for (uint32_t i=0; i<gatesArray.size(); i++)
	{
		cout<<"Gate node1:"<<gatesArray[i]->getInpN1()<<"\n";
		cout<<"Gate node2:"<<gatesArray[i]->getInpN2()<<"\n";
		cout<<"Gate node3:"<<gatesArray[i]->getOutN()<<"\n";

	}

}
void Simulator::startSimulate(){
	// loop over the gateArray and simulate its operation
	for (uint32_t i=0; i<gatesArray.size(); i++)
		gatesArray[i]->simulateGate();
}

Simulator::~Simulator() {
	// delete the dynamic allocated gates
	for (uint32_t i=0; i<gatesArray.size(); i++)
	{
		if (gatesArray[i] != nullptr)
				delete gatesArray[i];
	}

	for (uint32_t i=0; i<nodesArray.size(); i++)
	{
		if (nodesArray[i] != nullptr)
			delete nodesArray[i];
	}

}

