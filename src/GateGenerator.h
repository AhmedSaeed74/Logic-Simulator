/*
 * GateGenerator.h
 *
 *  Created on: Sep 21, 2022
 *      Author: yelnaggar
 */

#ifndef GATEGENERATOR_H_
#define GATEGENERATOR_H_

#include "Gates\Node.h"
#include "Gates\Gate.h"
#include "Gates\AndGate.h"
#include "Gates\OrGate.h"
#include "Gates\XorGate.h"
#include "Gates\NandGate.h"
#include "Gates\NorGate.h"
#include "Gates\XnorGate.h"
#include "Gates\NotGate.h"
#include "Simulator.h"
#include <assert.h>
#include <fstream>
using namespace std;

class GateGenerator {
private:
	Gate* createGate(const string& gateType, Node* node1, Node* node2, Node* node3){
		Gate* gate = nullptr;

		if (gateType == "AND")
			gate = new AndGate(node1, node2, node3);

		else if (gateType == "OR")
			gate = new OrGate(node1, node2, node3);

		else if (gateType == "XOR")
			gate = new XorGate(node1, node2, node3);

		else if (gateType == "NAND")
			gate = new NandGate(node1, node2, node3);

		else if (gateType == "NOR")
			gate = new NorGate(node1, node2, node3);

		else if (gateType == "XNOR")
			gate = new XnorGate(node1, node2, node3);

		else if (gateType == "NOT")
			gate = new NotGate(node1, node2);

		return gate;
	}


	Node* createOrFindNode(const string& name) {
		Node *node = simulator.findNode(name);

		// First time to create the node and post it to the simulator
		if (node == nullptr)
		{
			node = new Node(name);
			simulator.postNode(node);
		}

		return node;
	}

public:
	GateGenerator();

	void loadFile(const string& fileName);

	~GateGenerator();

private:
	Gate* baseGate;
	Simulator& simulator;
	ifstream testFile;
};

#endif /* GATEGENERATOR_H_ */
