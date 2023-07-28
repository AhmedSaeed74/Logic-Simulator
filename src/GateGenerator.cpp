/*
 * GateGenerator.cpp
 *
 *  Created on: Sep 21, 2022
 *      Author: yelnaggar
 */

#include "GateGenerator.h"

GateGenerator::GateGenerator(): baseGate(nullptr), simulator(Simulator::getInstance()) {
	// TODO Auto-generated constructor stub

}

void GateGenerator::loadFile(const string& fileName) {
	testFile.open(fileName);

	// loop through each file line

	while(! testFile.eof())
	{
		string operation;
		testFile>>operation;

		if (operation == "SET")
		{
			string nodeName;
			bool nodeValue;
			testFile>>nodeName>>nodeValue;

			Node* node = createOrFindNode(nodeName);
			node->setValue(nodeValue);
		}

		else if (operation == "SIM")
			simulator.startSimulate();

		else if (operation == "OUT")
		{
			string name;
			testFile>>name;
			if (name == "ALL")
				simulator.printAllNodes();

			else
			{
				Node *node = simulator.findNode(name);
				if (node != nullptr)
					cout<<*(node);
				else
					cout<<"The node "<<name<<" doesn't exist\n";
			}

		}

		else
		{
			string name1, name2, name3;
			Node* node1 = nullptr;
			Node* node2=nullptr;
			Node* node3=nullptr;

			if (operation == "NOT")
			{
				testFile>>name1>>name2;
				node1 = createOrFindNode(name1);
				node2 = createOrFindNode(name2);
			}

			else
			{
				testFile>>name1>>name2>>name3;
				node1 = createOrFindNode(name1);
				node2 = createOrFindNode(name2);
				node3 = createOrFindNode(name3);
			}

			baseGate = createGate(operation, node1, node2, node3);

			if (baseGate != nullptr)
				simulator.postGate(baseGate);
		}
	}

	testFile.close();
}


GateGenerator::~GateGenerator() {
}



