/*
 * Simulator.h
 *
 *  Created on: Sep 21, 2022
 *      Author: yelnaggar
 */

#ifndef SIMULATOR_H_
#define SIMULATOR_H_

#include "Gates\Gate.h"
#include <vector>

class Simulator {
private:
	vector<Gate*> gatesArray;  // array of pointers to Gate
	vector<Node*> nodesArray;  // array of pointers to node

	/*
	 * Singleton object specifications:
	 * 1. Private access to the default constructor
	 * 2. delete the default copy constructor
	 * 3. delete the default assignment copy overloading
	 */
	Simulator();
	Simulator(const Simulator& other) = delete;
	Simulator& operator = (const Simulator& other) = delete;

public:
	// Singleton Object;
	static Simulator& getInstance();

	void postGate(Gate* gate);

	void postNode(Node* node);

	Node* findNode(const string& nodeName);

	void printAllNodes();

	void printAllGates();

	void startSimulate();

	 ~Simulator();
};

#endif /* SIMULATOR_H_ */
